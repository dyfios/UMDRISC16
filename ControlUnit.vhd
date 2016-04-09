----------------------------------------------------------------------------------
-- Engineer:		 Dylan Z. Baker
-- Create Date:    10:21:56 03/13/2016 
-- Module Name:    ControlUnit - Structural
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity ControlUnit is
	PORT ( CLK:				in  STD_LOGIC;
          RST:				in  STD_LOGIC;
			 ENB_FETCH:		in  STD_LOGIC;
			 ENB_DEC:		in  STD_LOGIC;
			 ENB_OA:			in  STD_LOGIC;
			 ENB_WB:			in  STD_LOGIC;
			 FETCH_DATA:	in  STD_LOGIC_VECTOR (15 downto 0);
			 NOOP_IN:		in  STD_LOGIC_VECTOR (4 downto 0);
			 OP_IN:			in  STD_LOGIC_VECTOR (3 downto 0);
			 LOC_IN:			in  STD_LOGIC_VECTOR (3 downto 0);
			 MEMLOC_IN:		in  STD_LOGIC_VECTOR (5 downto 0);
			 CCR_IN:			in  STD_LOGIC_VECTOR (3 downto 0);
			 ALU_IN:			in  STD_LOGIC_VECTOR (15 downto 0);
			 LDST_IN:		in  STD_LOGIC_VECTOR (15 downto 0);
			 PCBR_FLG:		in  STD_LOGIC;
			 CU_BR_AMT:		in  STD_LOGIC_VECTOR (8 downto 0);
			 PROGRAM_ADDR: out STD_LOGIC_VECTOR (8 downto 0);
			 NOOP_OUT:		out STD_LOGIC_VECTOR (4 downto 0);
			 OP_OUT:			out STD_LOGIC_VECTOR (3 downto 0);
			 VALA_OUT:		out STD_LOGIC_VECTOR (15 downto 0);
			 VALB_OUT:		out STD_LOGIC_VECTOR (15 downto 0);
			 ADDRA_OUT:		out STD_LOGIC_VECTOR (3 downto 0);
			 ADDRB_OUT:		out STD_LOGIC_VECTOR (3 downto 0);
			 OPSEL_OUT: 	out STD_LOGIC_VECTOR (1 downto 0);
			 OUT_VAL: 		out STD_LOGIC_VECTOR (15 downto 0);
			 MEM_ADDR: 		out STD_LOGIC_VECTOR (5 downto 0);
			 BANK_ADDR: 	out STD_LOGIC_VECTOR (3 downto 0);
			 CU_BR_MASK_OUT: out STD_LOGIC_VECTOR (3 downto 0);
			 BANK_WE: 		out STD_LOGIC);
end ControlUnit;

architecture Structural of ControlUnit is

-- Program Counter Control Signals
signal PC_RST, PC_JMP_FLG, PC_BR_FLG 			: STD_LOGIC;

signal PC_JUMP_ADDR, PC_BR_AMT 					: STD_LOGIC_VECTOR (8 downto 0);

signal PR_ADDR, ADDR_REG, DO_ADDR				: STD_LOGIC_VECTOR (8 downto 0);
signal INSTRUCTION, REGBANKHOLDER				: STD_LOGIC_VECTOR (15 downto 0);
signal DO_ITYPE										: STD_LOGIC_VECTOR (2 downto 0);
signal DO_OP, DO_RA, DO_RB, DO_SR				: STD_LOGIC_VECTOR (3 downto 0);
signal DO_IMM											: STD_LOGIC_VECTOR (7 downto 0);
signal DO_NOOP											: STD_LOGIC_VECTOR (4 downto 0);

begin
	PROGRAM_ADDR <= PR_ADDR;
	PC_BR_FLG <= PCBR_FLG;
	PC_BR_AMT <= CU_BR_AMT;
	
    ----- Structural Components: -----
    Program_Counter: entity work.ProgramCounter
    port map( CLK    => CLK,
              RST    => RST,
				  ENB		=> ENB_FETCH,
              JUMP_FLG  => PC_JMP_FLG,
              BRANCH_FLG => PC_BR_FLG,
				  JUMP_ADDR => PC_JUMP_ADDR,
				  BRANCH_AMT => PC_BR_AMT,
				  Addr => PR_ADDR);
    
    Fetch_Unit: entity work.FetchUnit
    port map( CLK => CLK,
				  RST => RST,
				  ENB => ENB_FETCH,
				  ADDR => PR_ADDR,
				  FETCH_DATA => FETCH_DATA,
				  INSTRUCTION => INSTRUCTION,
				  OUT_ADDR => ADDR_REG);
	 
	 Decode_Unit: entity work.Decode
    port map( CLK => CLK,
				  ENB => ENB_DEC,
				  CODE => INSTRUCTION,
				  ADDR => ADDR_REG,
				  NOOP => DO_NOOP,
				  ADDR_OUT => DO_ADDR,
				  OP_OUT => DO_OP,
				  RA_OUT => DO_RA,
				  RB_OUT => DO_RB,
				  IMM_OUT => DO_IMM,
				  SR_OUT => DO_SR,
				  ITYPE_OUT => DO_ITYPE);
	
	 OA_Unit: entity work.OaUnit
    port map( CLK => CLK,
				  ENB => ENB_OA,
				  ADDR_IN => DO_ADDR,
				  NOOP_IN => DO_NOOP,
				  OP_IN => DO_OP,
				  RA_IN => DO_RA,
				  RB_IN => DO_RB,
				  IMM_IN => DO_IMM,
				  SR_IN => DO_SR,
				  ITYPE_IN => DO_ITYPE,
				  NOOP_OUT => NOOP_OUT,
				  OP_OUT => OP_OUT,
				  VALUE_A => VALA_OUT,
				  VALUE_B => VALB_OUT,
				  RA_ADDR => ADDRA_OUT,
				  RB_ADDR => ADDRB_OUT,
				  BR_MASK_OUT => CU_BR_MASK_OUT,
				  MUXSEL => OPSEL_OUT);

	 WB_Unit: entity work.WB_Unit
    port map( CLK => CLK,
				  ENB => ENB_WB,
				  NOOP => NOOP_IN,
				  OPCODE => OP_IN,
				  MEMLOC_IN => MEMLOC_IN,
				  LOC_IN => LOC_IN,
				  CCR_IN => CCR_IN,
				  ALU_IN => ALU_IN,
				  LDST_IN => LDST_IN,
				  OUT_VAL => OUT_VAL,
				  MEM_ADDR => MEM_ADDR,
				  BANK_ADDR => BANK_ADDR,
				  BANK_WE => BANK_WE);

    ----- End Structural Components -----
end Structural;