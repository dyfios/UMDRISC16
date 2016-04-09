--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:14:30 03/29/2016
-- Design Name:   
-- Module Name:   C:/Users/dbake/Desktop/sandbox/UMDRISC16/TestCU.vhd
-- Project Name:  UMDRISC16
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ControlUnit
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TestCU IS
END TestCU;
 
ARCHITECTURE behavior OF TestCU IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ControlUnit
    PORT(
         CLK : IN  std_logic;
         RST : IN  std_logic;
         OP_OUT : OUT  std_logic_vector(3 downto 0);
         VALA_OUT : OUT  std_logic_vector(15 downto 0);
         VALB_OUT : OUT  std_logic_vector(15 downto 0);
         ADDRA_OUT : OUT  std_logic_vector(3 downto 0);
         ADDRB_OUT : OUT  std_logic_vector(3 downto 0);
         OPSEL_OUT : OUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal RST : std_logic := '0';

 	--Outputs
   signal OP_OUT : std_logic_vector(3 downto 0);
   signal VALA_OUT : std_logic_vector(15 downto 0);
   signal VALB_OUT : std_logic_vector(15 downto 0);
   signal ADDRA_OUT : std_logic_vector(3 downto 0);
   signal ADDRB_OUT : std_logic_vector(3 downto 0);
   signal OPSEL_OUT : std_logic_vector(1 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ControlUnit PORT MAP (
          CLK => CLK,
          RST => RST,
          OP_OUT => OP_OUT,
          VALA_OUT => VALA_OUT,
          VALB_OUT => VALB_OUT,
          ADDRA_OUT => ADDRA_OUT,
          ADDRB_OUT => ADDRB_OUT,
          OPSEL_OUT => OPSEL_OUT
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
		wait for 20 us;
		RST <= '0';
		wait for 1000 ms;
   end process;

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 20 us;	

      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
