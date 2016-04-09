----------------------------------------------------------------------------------
-- Engineer:		 Dylan Z. Baker
-- Create Date:    16:15:00 03/25/2016
-- Module Name:    ShadowRegBank - Behavioral
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity ShadowRegBank is
PORT ( CLK: 				in  STD_LOGIC;
       RST: 				in  STD_LOGIC;
		 REG_LOC:			in	 STD_LOGIC_VECTOR (1 downto 0);
		 NEW_LOC:			in	 STD_LOGIC_VECTOR (1 downto 0);
		 NEW_VAL:			in	 STD_LOGIC_VECTOR (15 downto 0);
		 NEW_WE:				in	 STD_LOGIC;
		 REG_OUT:			out STD_LOGIC_VECTOR (15 downto 0));
end ShadowRegBank;

architecture Behavioral of ShadowRegBank is

type regfile_array is array (natural range 0 to 3) of 
	std_logic_vector (15 downto 0);

signal REGFILE: regfile_array;

begin
	WRITEOUT: process(CLK)
	begin
		if (CLK'event and CLK = '1') then
			REG_OUT <= REGFILE(to_integer(unsigned(REG_LOC)));
		end if;
	end process;
	
	WRITEIN: process(CLK, NEW_WE)
	begin
		if (CLK'event and CLK = '0' and (NEW_WE = '1')) then
			REGFILE(to_integer(unsigned(NEW_LOC))) <= NEW_VAL;
		end if;
	end process;

end Behavioral;