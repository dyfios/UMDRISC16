----------------------------------------------------------------------------------
-- Engineer: Dylan Z. Baker
-- Create Date:    10:13:08 03/11/2016 
-- Module Name:    ProgramCounter - Behavioral 
-- Revision 0.01 - File Created
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_ARITH.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;

entity ProgramCounter is
PORT ( CLK: 			in  STD_LOGIC;
       RST: 			in  STD_LOGIC;
		 ENB:				in  STD_LOGIC;
		 JUMP_FLG:		in	 STD_LOGIC;
		 JUMP_ADDR:		in	 STD_LOGIC_VECTOR (8 downto 0);
		 BRANCH_FLG:	in	 STD_LOGIC;
		 BRANCH_AMT:	in	 STD_LOGIC_VECTOR (8 downto 0);
       Addr:   		out STD_LOGIC_VECTOR (8 downto 0));
end ProgramCounter;

architecture Behavioral of ProgramCounter is

-- PC Config
constant Address_Size : STD_LOGIC_VECTOR (3 downto 0) := x"1";				-- size of each program instruction in bits
constant Program_Limit : STD_LOGIC_VECTOR (8 downto 0) := "111111111";	-- limit of program memory

signal Address: STD_LOGIC_VECTOR (8 downto 0);

begin

Addr <= Address;

INCREMENT: PROCESS (RST, CLK)
        BEGIN
            IF (RST='1') THEN
                    Address <= "000000000";
				ELSIF (Address >= Program_Limit) THEN
						Address <= "000000000";
            ELSIF (CLK'EVENT AND CLK = '1') THEN
						IF (JUMP_FLG = '1') THEN
							Address <= JUMP_ADDR;
						ELSE
							IF (BRANCH_FLG = '1') THEN
								Address <= Address + BRANCH_AMT;
							ELSE
								Address <= Address + Address_Size;
							END IF;
						END IF;
            END IF;
        END PROCESS INCREMENT;

end Behavioral;