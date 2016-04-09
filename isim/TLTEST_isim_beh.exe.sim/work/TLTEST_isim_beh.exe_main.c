/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3620187407;
char *STD_TEXTIO;
char *IEEE_P_1242562249;
char *IEEE_P_3499444699;
char *IEEE_P_3564397177;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_a_1007874614_3212880686_init();
    work_a_3817879253_3212880686_init();
    work_a_3977952979_2372691052_init();
    work_a_0242591222_3212880686_init();
    work_a_1180596121_2372691052_init();
    work_a_2096391741_1181938964_init();
    ieee_p_1242562249_init();
    work_a_2797637665_3852387523_init();
    work_a_2270315936_3852387523_init();
    work_a_0006176688_3852387523_init();
    work_a_2850036672_3212880686_init();
    work_a_3527312285_3852387523_init();
    work_a_0832606739_1181938964_init();
    work_a_3191300636_3852387523_init();
    work_a_4169747399_2372691052_init();
    work_a_4211215617_3212880686_init();
    work_a_2198182308_3212880686_init();
    std_textio_init();
    ieee_p_3564397177_init();
    xilinxcorelib_a_0501124386_2959432447_init();
    xilinxcorelib_a_4259388143_1709443946_init();
    xilinxcorelib_a_3378656678_0543512595_init();
    xilinxcorelib_a_2299056586_3212880686_init();
    work_a_1632567566_1196175844_init();
    xilinxcorelib_a_1203745346_2959432447_init();
    xilinxcorelib_a_1677950190_1709443946_init();
    xilinxcorelib_a_1807780694_0543512595_init();
    xilinxcorelib_a_1749501161_3212880686_init();
    work_a_3500897147_2737744624_init();
    work_a_0621405942_1181938964_init();
    work_a_1945928343_1181938964_init();
    work_a_3809712022_2372691052_init();


    xsi_register_tops("work_a_3809712022_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");

    return xsi_run_simulation(argc, argv);

}
