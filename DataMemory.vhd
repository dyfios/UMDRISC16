----------------------------------------------------------------------------------
-- Engineer:		 Dylan Z. Baker
-- Create Date:    16:15:00 03/25/2016
-- Module Name:    DataMemory - Behavioral
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity DataMemory is
PORT ( CLK: 			in  STD_LOGIC;
       RST: 			in  STD_LOGIC;
		 RA_LOC:			in	 STD_LOGIC_VECTOR (3 downto 0);
		 RB_LOC:			in	 STD_LOGIC_VECTOR (3 downto 0);
		 NEW_LOC:		in	 STD_LOGIC_VECTOR (3 downto 0);
		 NEW_VAL:		in	 STD_LOGIC_VECTOR (15 downto 0);
		 NEW_WE:			in	 STD_LOGIC;
		 A_OUT:			out STD_LOGIC_VECTOR (15 downto 0);
		 B_OUT:			out STD_LOGIC_VECTOR (15 downto 0));
end DataMemory;

architecture Behavioral of DataMemory is

type regfile_array is array (natural range 0 to 15) of 
	std_logic_vector ( 15 downto 0);

signal REGFILE: regfile_array;

begin
	WRITEOUT: process(CLK)
	begin
		if (CLK'event and CLK = '1') then
			A_OUT <= REGFILE(to_integer(unsigned(RA_LOC)));
			B_OUT <= REGFILE(to_integer(unsigned(RB_LOC)));
		end if;
	end process;
	
	WRITEIN: process(CLK, NEW_WE)
	begin
		if (CLK'event and CLK = '0' and (NEW_WE = '1')) then
			REGFILE(to_integer(unsigned(NEW_LOC))) <= NEW_VAL;
		end if;
	end process;

end Behavioral;