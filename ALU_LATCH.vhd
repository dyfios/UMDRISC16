----------------------------------------------------------------------------------
-- Engineers:		 Dylan Z. Baker
-- Create Date:    11:39:24 03/30/2016 
-- Module Name:    ALU_LATCH - Behavioral 
-- Revision 0.01 - File Created
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity ALU_LATCH is
    Port ( CLK 			: in   STD_LOGIC;
			  ENB				: in   STD_LOGIC;
			  RA_IN			: in   STD_LOGIC_VECTOR (15 downto 0);
			  RB_IN			: in   STD_LOGIC_VECTOR (15 downto 0);
			  OP_TOALU_IN	: in   STD_LOGIC_VECTOR (3 downto 0);
			  MEM_ADR_IN	: in   STD_LOGIC_VECTOR (7 downto 0);
			  OP_IN			: in	 STD_LOGIC_VECTOR (3 downto 0);
			  NOOP_IN		: in   STD_LOGIC_VECTOR (4 downto 0);
	        LOC_IN			: in	 STD_LOGIC_VECTOR (3 downto 0);
			  CCR_IN			: in	 STD_LOGIC_VECTOR (3 downto 0);
			  ALU_IN			: in	 STD_LOGIC_VECTOR (15 downto 0);
           LDST_IN		: in	 STD_LOGIC_VECTOR (15 downto 0);
			  BR_MASK		: in   STD_LOGIC_VECTOR (3 downto 0);
			  NOOP_OUT		: out  STD_LOGIC_VECTOR (4 downto 0);
			  OP_OUT			: out  STD_LOGIC_VECTOR (3 downto 0);
			  LOC_OUT		: out  STD_LOGIC_VECTOR (3 downto 0);
			  MEMLOC_OUT	: out  STD_LOGIC_VECTOR (5 downto 0);
			  CCR_OUT		: out  STD_LOGIC_VECTOR (3 downto 0);
			  ALU_OUT		: out  STD_LOGIC_VECTOR (15 downto 0);
			  RA_OUT			: out  STD_LOGIC_VECTOR (15 downto 0);
			  RB_OUT			: out  STD_LOGIC_VECTOR (15 downto 0);
			  OP_TOALU_OUT	: out  STD_LOGIC_VECTOR (3 downto 0);
			  PC_BR_FLG		: out  STD_LOGIC;
           LDST_OUT		: out  STD_LOGIC_VECTOR (15 downto 0));
end ALU_LATCH;

architecture Behavior of ALU_LATCH is
	
	signal LOC_TMP   		: STD_LOGIC_VECTOR (3 downto 0);
	signal LOC_TMP1   	: STD_LOGIC_VECTOR (3 downto 0);
	signal LOC_TMP2   	: STD_LOGIC_VECTOR (3 downto 0);
	signal MEM_ADR_TMP	: STD_LOGIC_VECTOR (7 downto 0);
	signal MEM_ADR_TMP1	: STD_LOGIC_VECTOR (7 downto 0);
	signal MEM_ADR_TMP2	: STD_LOGIC_VECTOR (7 downto 0);
	signal OP_TMP	  		: STD_LOGIC_VECTOR (3 downto 0);
	signal CCR_TMP	  		: STD_LOGIC_VECTOR (3 downto 0);
	signal ALU_TMP	  		: STD_LOGIC_VECTOR (15 downto 0);
	signal NOOP_TMP  		: STD_LOGIC_VECTOR (4 downto 0);
	signal NOOP_TMP1  	: STD_LOGIC_VECTOR (4 downto 0);
	signal NOOP_TMP2  	: STD_LOGIC_VECTOR (4 downto 0);
	signal RA_TMP			: STD_LOGIC_VECTOR (15 downto 0);
	signal RB_TMP			: STD_LOGIC_VECTOR (15 downto 0);
	signal OP_TOALU_TMP	: STD_LOGIC_VECTOR (3 downto 0);
	
	begin
		LATCH: process(CLK, ENB)
			begin
				if (CLK'event and CLK = '1' and ENB = '1') then
					CCR_TMP <= CCR_IN;
					NOOP_TMP <= NOOP_IN;
					RA_OUT <= RA_IN;
					RB_OUT <= RB_IN;
					OP_TOALU_OUT <= OP_TOALU_IN;
					
					if (CCR_TMP - BR_MASK = "0000") then
						PC_BR_FLG <= '1';
					else
						PC_BR_FLG <= '0';
					end if;
				end if;
			END PROCESS;
			
			SAVE: PROCESS (CLK, ENB)
				begin
					IF (CLK'event and CLK = '0' and ENB = '1') THEN
						if (OP_IN = "1010") then
							MEMLOC_OUT <= MEM_ADR_TMP(5 downto 0);
						else
							LOC_OUT <= LOC_TMP;
						end if;
						LOC_TMP <= LOC_IN;
						MEM_ADR_TMP <= MEM_ADR_IN;
						OP_OUT <= OP_IN;
						CCR_OUT <= CCR_TMP;
						ALU_OUT <= ALU_IN;
						LDST_OUT <= LDST_IN;
						NOOP_OUT <= NOOP_IN;
					END IF;
			END PROCESS;

end behavior;