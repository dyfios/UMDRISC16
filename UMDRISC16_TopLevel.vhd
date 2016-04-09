----------------------------------------------------------------------------------
-- Engineer:		 Dylan Z. Baker
-- Create Date:    10:26:31 03/13/2016 
-- Module Name:    UMDRISC16_TopLevel - STRUCTURAL 
-- Revision 0.01 - File Created
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity UMDRISC16_TopLevel is
	PORT ( CLK: in  STD_LOGIC;
          RST: in STD_LOGIC;
			 ENB_FETCH : in std_logic;
			 ENB_DEC : in std_logic;
			 ENB_OA : in std_logic;
			 ENB_EX : in std_logic;
			 ENB_WB : in std_logic);
end UMDRISC16_TopLevel;

architecture Structural of UMDRISC16_TopLevel is

signal PC_RST, PC_JMP_FLG, PC_BR_FLG 			: STD_LOGIC;
signal PC_JUMP_ADDR, PC_BR_AMT 					: STD_LOGIC_VECTOR (8 downto 0);
signal PROGRAM_ADDR 									: STD_LOGIC_VECTOR (8 downto 0);
signal FETCH_DATA, INSTRUCTION, REGBANKHOLDER: STD_LOGIC_VECTOR (15 downto 0);
signal RABUS, RBBUS, DMEMA, DMEMB				: STD_LOGIC_VECTOR (15 downto 0);
signal OPBUS, OPCODE_REVERSE						: STD_LOGIC_VECTOR (3 downto 0);
signal GP_RAL, GP_RBL, GP_NEWL					: STD_LOGIC_VECTOR (3 downto 0);
signal GP_NEWV											: STD_LOGIC_VECTOR (15 downto 0);
signal GP_NEWWE										: STD_LOGIC;
signal OPSEL											: STD_LOGIC_VECTOR (1 downto 0);
signal NOOP, NOOP_REVERSE							: STD_LOGIC_VECTOR (4 downto 0);

signal CF_LOC, CF_CCR								: STD_LOGIC_VECTOR (3 downto 0);
signal CF_MEMLOC, DM_ADDR							: STD_LOGIC_VECTOR (5 downto 0);
signal CF_ALU, CF_LDST								: STD_LOGIC_VECTOR (15 downto 0);

signal BRANCH_MASK									: STD_LOGIC_VECTOR (3 downto 0);
signal CF_BR_FLG										: STD_LOGIC;

begin

    ----- Structural Components: -----
	ControlUnit: entity work.ControlUnit
    port map( CLK => CLK,
              RST => RST,
				  ENB_FETCH => ENB_FETCH,
				  ENB_DEC => ENB_DEC,
			     ENB_OA => ENB_OA,
				  ENB_WB => ENB_WB,
				  NOOP_IN => NOOP_REVERSE,
				  OP_IN => OPCODE_REVERSE,
				  LOC_IN => CF_LOC,
				  MEMLOC_IN => CF_MEMLOC,
				  CCR_IN => CF_CCR,
				  ALU_IN => CF_ALU,
				  LDST_IN => CF_LDST,
				  FETCH_DATA => FETCH_DATA,
				  OP_OUT => OPBUS,
				  NOOP_OUT => NOOP,
				  VALA_OUT => RABUS,
				  VALB_OUT => RBBUS,
				  ADDRA_OUT => GP_RAL,
				  ADDRB_OUT => GP_RBL,
				  OPSEL_OUT => OPSEL,
				  PROGRAM_ADDR => PROGRAM_ADDR,
				  OUT_VAL => GP_NEWV,
				  MEM_ADDR => DM_ADDR,
				  BANK_ADDR => GP_NEWL,
				  CU_BR_MASK_OUT => BRANCH_MASK,
				  PCBR_FLG => CF_BR_FLG,
				  CU_BR_AMT => CF_ALU (8 downto 0),
				  BANK_WE => GP_NEWWE);
	
	FPU: entity work.FPU
    port map( CLK    => CLK,
              RST    => RST,
				  ENB_OA => ENB_OA,
				  ENB_EX => ENB_EX,
				  ENB_WB => ENB_WB,
				  RA		=>	RABUS,
				  RB		=> RBBUS,
				  FETCH_DATA => FETCH_DATA,
				  NOOP_IN => NOOP,
				  PROGRAM_ADDR => PROGRAM_ADDR,
				  MEM_ADDR => DM_ADDR,
				  GP_RA_LOC => GP_RAL,
				  GP_RB_LOC => GP_RBL,
				  GP_NEW_LOC => GP_NEWL,
				  GP_NEW_VAL => GP_NEWV,
				  GP_NEW_WE => GP_NEWWE,
				  OPSELECTOR => OPSEL,
				  OPCODE	=>	OPBUS,
				  NOOP_OUT => NOOP_REVERSE,
				  OP_OUT	  => OPCODE_REVERSE,
				  LOC_OUT => CF_LOC,
				  MEMLOC_OUT => CF_MEMLOC,
				  CCR_OUT => CF_CCR,
				  ALU_OUT => CF_ALU,
				  FP_BR_MASK_IN => BRANCH_MASK,
				  FPBR_FLG_OUT => CF_BR_FLG,
				  LDST_OUT => CF_LDST);
	
    ----- End Structural Components -----

end Structural;