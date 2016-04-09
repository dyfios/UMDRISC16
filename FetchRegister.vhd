----------------------------------------------------------------------------------
-- Engineer: Dylan Z. Baker
-- Create Date:    12:07:13 03/14/2016 
-- Module Name:    FetchRegister - Behavioral 
-- Revision 0.01 - File Created
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity FetchRegister is
	port (PORTIN		: in std_logic_vector (15 downto 0);
			clk			: in std_logic;
			PORTOUT		: out std_logic_vector (15 downto 0));
end FetchRegister;

architecture Behavioral of FetchRegister is

begin

	FR: process(clk, clear, preset)
		begin			-- on falling edge, latch onto data
      if (clk'event and clk='0') then
         PORTOUT <= PORTIN;
      end if;
   end process;

end Behavioral;

