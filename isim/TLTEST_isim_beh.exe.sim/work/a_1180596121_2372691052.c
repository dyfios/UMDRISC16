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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/dbake/Desktop/sandbox/UMDRISC16/WB_Unit.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);


static void work_a_1180596121_2372691052_p_0(char *t0)
{
    char t16[16];
    char t25[16];
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t26;
    char *t27;
    int t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 992U);
    t5 = xsi_signal_has_event(t4);
    if (t5 == 1)
        goto LAB11;

LAB12:    t3 = (unsigned char)0;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t4 = (t0 + 4592);
    *((int *)t4) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(34, ng0);
    t18 = (t0 + 1512U);
    t22 = *((char **)t18);
    t18 = (t0 + 7280U);
    t23 = (t0 + 7493);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 0;
    t27 = (t26 + 4U);
    *((int *)t27) = 3;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (3 - 0);
    t20 = (t28 * 1);
    t20 = (t20 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t20;
    t29 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t22, t18, t23, t25);
    if (t29 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 4672);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(41, ng0);
    t4 = (t0 + 4736);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1672U);
    t6 = *((char **)t4);
    t4 = (t0 + 4928);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t6, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(43, ng0);
    t4 = (t0 + 2152U);
    t6 = *((char **)t4);
    t4 = (t0 + 4864);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t6, 16U);
    xsi_driver_first_trans_fast_port(t4);

LAB15:    goto LAB3;

LAB5:    t6 = (t0 + 1352U);
    t13 = *((char **)t6);
    t6 = (t0 + 7264U);
    t14 = (t0 + 7489);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = 3;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (3 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t21 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t13, t6, t14, t16);
    t1 = t21;
    goto LAB7;

LAB8:    t6 = (t0 + 1192U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    t2 = t12;
    goto LAB10;

LAB11:    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB13;

LAB14:    xsi_set_current_line(35, ng0);
    t27 = (t0 + 4672);
    t30 = (t27 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t27);
    xsi_set_current_line(36, ng0);
    t4 = (t0 + 4736);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1832U);
    t6 = *((char **)t4);
    t4 = (t0 + 4800);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t6, 6U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2152U);
    t6 = *((char **)t4);
    t4 = (t0 + 4864);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t6, 16U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB15;

}


extern void work_a_1180596121_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1180596121_2372691052_p_0};
	xsi_register_didat("work_a_1180596121_2372691052", "isim/TLTEST_isim_beh.exe.sim/work/a_1180596121_2372691052.didat");
	xsi_register_executes(pe);
}
