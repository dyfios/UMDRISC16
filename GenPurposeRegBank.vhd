----------------------------------------------------------------------------------
-- Engineer:		 Dylan Z. Baker
-- Create Date:    16:15:00 03/25/2016
-- Module Name:    GenPurposeRegBank - Behavioral
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity GenPurposeRegBank is
PORT ( CLK: 			in  STD_LOGIC;
       RST: 			in  STD_LOGIC;
		 ENBW:			in  STD_LOGIC;
		 ENBR:			in  STD_LOGIC;
		 RA_LOC:			in	 STD_LOGIC_VECTOR (3 downto 0);
		 RB_LOC:			in	 STD_LOGIC_VECTOR (3 downto 0);
		 NEW_LOC:		in	 STD_LOGIC_VECTOR (3 downto 0);
		 NEW_VAL:		in	 STD_LOGIC_VECTOR (15 downto 0);
		 NEW_WE:			in	 STD_LOGIC;
		 A_OUT:			out STD_LOGIC_VECTOR (15 downto 0);
		 B_OUT:			out STD_LOGIC_VECTOR (15 downto 0));
end GenPurposeRegBank;

architecture Behavioral of GenPurposeRegBank is

type regfile_array is array (natural range 0 to 15) of 
	std_logic_vector (15 downto 0);

signal REGFILE: regfile_array;

begin
	WRITEOUT: process(CLK, ENBW)
	begin
		if (CLK'event and CLK = '0' and ENBR = '1') then
			A_OUT <= REGFILE(to_integer(unsigned(RA_LOC)));
			B_OUT <= REGFILE(to_integer(unsigned(RB_LOC)));
		end if;
	end process;
	
	WRITEIN: process(CLK, RST, NEW_WE, ENBR)
	begin
		if (RST = '1') then
			REGFILE <= ((others => (others => '0')));
		elsif (CLK'event and CLK = '1' and (NEW_WE = '1') and ENBW = '1') then
			REGFILE(to_integer(unsigned(NEW_LOC))) <= NEW_VAL;
		end if;
	end process;

end Behavioral;