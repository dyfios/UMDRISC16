----------------------------------------------------------------------------------
-- Engineer:		 Dylan Z. Baker
-- Create Date:    10:43:56 03/25/2016 
-- Module Name:    FPU - Structural
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity FPU is
	PORT ( CLK: 			in  STD_LOGIC;
          RST:				in  STD_LOGIC;
			 ENB_OA:			in  STD_LOGIC;
			 ENB_EX:			in  STD_LOGIC;
			 ENB_WB:			in  STD_LOGIC;
			 MEM_ADDR:		in  STD_LOGIC_VECTOR (5 downto 0);
			 PROGRAM_ADDR:	in	 STD_LOGIC_VECTOR (8 downto 0);
			 RA:				in	 STD_LOGIC_VECTOR (15 downto 0);
			 RB:				in	 STD_LOGIC_VECTOR (15 downto 0);
			 GP_RA_LOC:		in	 STD_LOGIC_VECTOR (3 downto 0);
			 GP_RB_LOC:		in	 STD_LOGIC_VECTOR (3 downto 0);
			 GP_NEW_LOC:	in	 STD_LOGIC_VECTOR (3 downto 0);
			 GP_NEW_VAL:	in	 STD_LOGIC_VECTOR (15 downto 0);
			 GP_NEW_WE:		in	 STD_LOGIC;
			 OPCODE: 		in  STD_LOGIC_VECTOR (3 downto 0);
			 OPSELECTOR:	in  STD_LOGIC_VECTOR (1 downto 0);
			 NOOP_IN:		in  STD_LOGIC_VECTOR (4 downto 0);
			 FP_BR_MASK_IN: in  STD_LOGIC_VECTOR (3 downto 0);
			 FETCH_DATA:	out STD_LOGIC_VECTOR (15 downto 0);
			 LOC_OUT:		out STD_LOGIC_VECTOR (3 downto 0);
			 MEMLOC_OUT:	out STD_LOGIC_VECTOR (5 downto 0);
			 NOOP_OUT:		out STD_LOGIC_VECTOR (4 downto 0);
			 OP_OUT:			out STD_LOGIC_VECTOR (3 downto 0);
			 ALU_OUT:		out STD_LOGIC_VECTOR (15 downto 0);
			 CCR_OUT:		out STD_LOGIC_VECTOR (3 downto 0);
			 FPBR_FLG_OUT: out STD_LOGIC;
			 LDST_OUT:		out STD_LOGIC_VECTOR (15 downto 0));
end FPU;

architecture Structural of FPU is

signal DM_WE									: STD_LOGIC_VECTOR (0 downto 0);
signal DM_WRADDR, DM_RDADDR 				: STD_LOGIC_VECTOR (5 downto 0);
signal DM_INDATA, DM_OUTDATA 				: STD_LOGIC_VECTOR (15 downto 0);

signal SH_REG_LOC, SH_NEW_LOC				: STD_LOGIC_VECTOR (1 downto 0);
signal SH_NEW_VAL, SH_REG_OUT				: STD_LOGIC_VECTOR (15 downto 0);
signal SH_NEW_WE								: STD_LOGIC;

signal VALA, VALB, VALB_ALU				: STD_LOGIC_VECTOR (15 downto 0);

signal ALU_CCR									: STD_LOGIC_VECTOR (3 downto 0);
signal ALU_OUTPUT, LDST_OUTPUT			: STD_LOGIC_VECTOR (15 downto 0);

signal RABUS, RBBUS							: STD_LOGIC_VECTOR (15 downto 0);
signal OPCODEBUS, ALU_OPOUT				: STD_LOGIC_VECTOR (3 downto 0);

signal BR_MASK									: STD_LOGIC_VECTOR (3 downto 0);

begin
	----- Structural Components: -----
	 ALU: entity work.ALU
    port map( CLK => CLK,
              RA => RABUS,
              RB => RBBUS,
              OPCODE => OPCODEBUS,
				  CCR => ALU_CCR,
				  ALU_OUT => ALU_OUTPUT,
				  BR_MASK => FP_BR_MASK_IN,
				  LDST_OUT => LDST_OUTPUT);

	 ALU_MUX: entity work.Oa_MUX
	 port map( IMM_IN => RB,
				  REGB_IN => VALB,
				  SEL_IN => OPSELECTOR,
				  VALB_OUT => VALB_ALU);

	 ALU_LATCH: entity work.ALU_LATCH
    port map( CLK => CLK,
				  ENB => ENB_EX,
				  RA_IN => VALA,
				  RB_IN => VALB_ALU,
				  OP_TOALU_IN => OPCODE,
				  MEM_ADR_IN => RB(7 downto 0),
				  NOOP_IN => NOOP_IN,
				  LOC_IN => GP_RA_LOC,
				  OP_IN => OPCODEBUS,
				  CCR_IN => ALU_CCR,
				  ALU_IN => ALU_OUTPUT,
				  LDST_IN => LDST_OUTPUT,
              LOC_OUT => LOC_OUT,
				  MEMLOC_OUT => MEMLOC_OUT,
				  NOOP_OUT => NOOP_OUT,
				  OP_OUT => OP_OUT,
				  CCR_OUT => CCR_OUT,
				  RA_OUT => RABUS,
				  RB_OUT => RBBUS,
				  OP_TOALU_OUT => OPCODEBUS,
				  BR_MASK => FP_BR_MASK_IN,
				  PC_BR_FLG => FPBR_FLG_OUT,
				  ALU_OUT => ALU_OUT);

    GPRegBank: entity work.GenPurposeRegBank
    port map( CLK	=> CLK,
				  RST => RST,
				  ENBW => ENB_WB,
				  ENBR => ENB_EX,
              RA_LOC	=> GP_RA_LOC,
				  RB_LOC	=> GP_RB_LOC,
				  NEW_LOC=> GP_NEW_LOC,
				  NEW_VAL => GP_NEW_VAL,
              NEW_WE	=>	GP_NEW_WE,
				  A_OUT => VALA,
				  B_OUT => VALB);

	 SHRegBank: entity work.ShadowRegBank
    port map( CLK	=> CLK,
				  RST => RST,
              REG_LOC => SH_REG_LOC,
				  NEW_LOC => SH_NEW_LOC,
				  NEW_VAL => SH_NEW_VAL,
              NEW_WE	=>	SH_NEW_WE,
				  REG_OUT => SH_REG_OUT);

	 Data_Memory: entity work.Data_Memory
    port map( clka => CLK,
				  clkb => CLK,
				  addra => MEM_ADDR,
				  addrb => DM_RDADDR,
              wea	=> DM_WE,
				  dina => GP_NEW_VAL,
				  doutb => DM_OUTDATA);

	 -- On the rising edge of each clock, we will pull an
	 -- instruction from memory.
	 Program_Memory: entity work.NewInstMem
    port map( clka	=> CLK,
              addra	=> PROGRAM_ADDR (4 downto 0),
				  wea		=> "0",		-- write turned off
				  dina	=> x"0000",
              douta	=>	FETCH_DATA);
	 ----- End Structural Components -----
end Structural;