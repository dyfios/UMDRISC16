--------------------------------------------------------------------------------
-- Engineer:		Dylan Z. Baker
-- Create Date:   17:43:06 03/29/2016
-- Module Name:   C:/Users/dbake/Desktop/sandbox/UMDRISC16/TLTEST.vhd
-- Project Name:  UMDRISC16
-- VHDL Test Bench Created by ISE for module: UMDRISC16_TopLevel
-- Modified by Dylan Z. Baker
-- Revision 0.01 - File Created
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY TLTEST IS
END TLTEST;
 
ARCHITECTURE behavior OF TLTEST IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT UMDRISC16_TopLevel
    PORT(
         CLK : IN  std_logic;
         RST : IN  std_logic;
			ENB_FETCH : IN std_logic;
			ENB_DEC : IN std_logic;
			ENB_OA : IN std_logic;
			ENB_EX : IN std_logic;
			ENB_WB : IN std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal RST : std_logic := '0';
	signal ENB_FETCH : std_logic := '0';
	signal ENB_DEC : std_logic := '0';
	signal ENB_OA : std_logic := '0';
	signal ENB_EX : std_logic := '0';
	signal ENB_WB : std_logic := '0';

   -- Clock period definitions
   constant CLK_period : time := 100 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: UMDRISC16_TopLevel PORT MAP (
          CLK => CLK,
          RST => RST,
			 ENB_FETCH => ENB_FETCH,
			 ENB_DEC => ENB_DEC,
			 ENB_OA => ENB_OA,
			 ENB_EX => ENB_EX,
			 ENB_WB => ENB_WB
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 
 
 -- Reset process definitions
   RST_process :process
   begin
		RST <= '1';
		wait for 100 ns;
		RST <= '0';
		wait for 1000 ms;
   end process;
 
 
  -- Enable process definitions
   ENB_process :process
   begin
		ENB_FETCH <= '0';
		ENB_DEC <= '0';
		ENB_OA <= '0';
		ENB_EX <= '0';
		ENB_WB <= '0';
		wait for 160 ns;
		ENB_FETCH <= '1';
		wait for clk_period;
		ENB_DEC <= '1';
		wait for clk_period;
		ENB_OA <= '1';
		wait for clk_period;
		ENB_EX <= '1';
		wait for clk_period;
		ENB_WB <= '1';
		wait for 1000 ms;
   end process;
	

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 10 us;	

      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;
END;