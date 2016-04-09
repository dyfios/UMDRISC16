----------------------------------------------------------------------------------
-- Engineers:		 Dylan Z. Baker
-- Create Date:    12:39:24 03/20/2016
-- Module Name:    WB_Unit - Behavioral
-- Revision 0.01 - File Created
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity WB_Unit is
    Port ( CLK 		: in   STD_LOGIC;
			  ENB			: in   STD_LOGIC;
			  NOOP		: in   STD_LOGIC_VECTOR (4 downto 0);
			  OPCODE		: in   STD_LOGIC_VECTOR (3 downto 0);
			  LOC_IN		: in   STD_LOGIC_VECTOR (3 downto 0);
			  MEMLOC_IN	: in   STD_LOGIC_VECTOR (5 downto 0);
	        CCR_IN		: in   STD_LOGIC_VECTOR	(3 downto 0);
			  ALU_IN		: in	 STD_LOGIC_VECTOR (15 downto 0);
			  LDST_IN	: in	 STD_LOGIC_VECTOR (15 downto 0);
			  OUT_VAL	: out	 STD_LOGIC_VECTOR (15 downto 0);
			  BANK_ADDR	: out  STD_LOGIC_VECTOR (3 downto 0);
			  MEM_ADDR	: out  STD_LOGIC_VECTOR (5 downto 0);
			  MEM_WE		: out  STD_LOGIC;
			  BANK_WE	: out	 STD_LOGIC);
end WB_Unit;

architecture Behavior of WB_Unit is
	begin
		WRITETOBANK: process(CLK, ENB, NOOP)
			begin
				if (CLK'event and CLK = '1' and ENB = '1' and NOOP /= "0001") then
					if (OPCODE = "1010") then
						BANK_WE <= '0';
						MEM_WE <= '1';
						MEM_ADDR <= MEMLOC_IN;
						OUT_VAL <= ALU_IN;
					else
						BANK_WE <= '1';
						MEM_WE <= '0';
						BANK_ADDR <= LOC_IN;
						OUT_VAL <= ALU_IN;
					end if;
				end if;
		END PROCESS ;
end behavior;