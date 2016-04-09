----------------------------------------------------------------------------------
-- Engineer:		 Dylan Z. Baker
-- Create Date:    11:53:56 03/28/2016 
-- Module Name:    NotClock - Behavioral 
-- Revision 0.01 - File Created
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity NotClock is
PORT ( CLK_IN: 			in  STD_LOGIC;
       CLK_OUT:			out STD_LOGIC);
end NotClock;

architecture Behavioral of NotClock is
	signal CLOUT			: STD_LOGIC;

begin
CLK_OUT <= CLOUT;

INVERT: process(CLK_IN)
	begin
		if (CLK_IN'event and CLK_IN = '0') then
			CLOUT <= not CLK_IN;
		elsif (CLK_IN'event and CLK_IN = '1') then
				CLOUT <= not CLK_IN;
		end if;
	end process;
end Behavioral;