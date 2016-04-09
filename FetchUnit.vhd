----------------------------------------------------------------------------------
-- Engineer: Dylan Z. Baker
-- Create Date:    10:22:51 03/13/2016
-- Module Name:    FetchUnit - Behavioral 
-- Revision 0.01 - File Created
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity FetchUnit is
	Port ( CLK				: in  STD_LOGIC;
			 RST				: in  STD_LOGIC;
			 ENB				: in  STD_LOGIC;
			 ADDR				: in  STD_LOGIC_VECTOR (8 downto 0);
			 FETCH_DATA		: in	STD_LOGIC_VECTOR (15 downto 0);
			 INSTRUCTION	: out STD_LOGIC_VECTOR (15 downto 0);
			 OUT_ADDR		: out STD_LOGIC_VECTOR (8 downto 0));
end FetchUnit;

architecture Behavioral of FetchUnit is

signal INSTR: STD_LOGIC_VECTOR (15 downto 0);
signal OUTADDRESS: STD_LOGIC_VECTOR (8 downto 0);

begin

	LATCH : PROCESS (RST, CLK, ENB)
		BEGIN
			--IF (RST = '1' AND ENB = '1') THEN
				--INSTR <= x"0000";
			IF (CLK'EVENT AND CLK = '1' AND ENB = '1') THEN
				INSTR <= FETCH_DATA;
				OUTADDRESS <= ADDR;
			END IF;
		END PROCESS LATCH;

	FU : PROCESS (CLK, ENB)
		BEGIN
			IF (CLK'EVENT AND CLK = '0' AND ENB = '1') THEN
				INSTRUCTION <= INSTR;
				OUT_ADDR <= OUTADDRESS;
			END IF;
		END PROCESS FU;

end Behavioral;