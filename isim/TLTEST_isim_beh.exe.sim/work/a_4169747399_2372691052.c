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
static const char *ng0 = "C:/Users/dbake/Desktop/sandbox/UMDRISC16/ALU_LATCH.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_4169747399_2372691052_p_0(char *t0)
{
    char t17[16];
    char t18[16];
    unsigned char t1;
    unsigned char t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 992U);
    t4 = xsi_signal_has_event(t3);
    if (t4 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 8840);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(61, ng0);
    t5 = (t0 + 2472U);
    t12 = *((char **)t5);
    t5 = (t0 + 8936);
    t13 = (t5 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(62, ng0);
    t3 = (t0 + 2152U);
    t5 = *((char **)t3);
    t3 = (t0 + 9000);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 5U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1352U);
    t5 = *((char **)t3);
    t3 = (t0 + 9064);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 16U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1512U);
    t5 = *((char **)t3);
    t3 = (t0 + 9128);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 16U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1672U);
    t5 = *((char **)t3);
    t3 = (t0 + 9192);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(67, ng0);
    t3 = (t0 + 5992U);
    t5 = *((char **)t3);
    t3 = (t0 + 14356U);
    t6 = (t0 + 2952U);
    t9 = *((char **)t6);
    t6 = (t0 + 14068U);
    t12 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t17, t5, t3, t9, t6);
    t13 = (t0 + 14702);
    t15 = (t18 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 0;
    t16 = (t15 + 4U);
    *((int *)t16) = 3;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t19 = (3 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t20;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t12, t17, t13, t18);
    if (t1 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 9256);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);

LAB12:    goto LAB3;

LAB5:    t5 = (t0 + 1192U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB7;

LAB8:    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t2 = t8;
    goto LAB10;

LAB11:    xsi_set_current_line(68, ng0);
    t16 = (t0 + 9256);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t16);
    goto LAB12;

}

static void work_a_4169747399_2372691052_p_1(char *t0)
{
    char t15[16];
    unsigned char t1;
    unsigned char t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 992U);
    t4 = xsi_signal_has_event(t3);
    if (t4 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 8856);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(78, ng0);
    t5 = (t0 + 1992U);
    t12 = *((char **)t5);
    t5 = (t0 + 13972U);
    t13 = (t0 + 14706);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 3;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (3 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t20 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t12, t5, t13, t15);
    if (t20 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 4872U);
    t5 = *((char **)t3);
    t3 = (t0 + 9384);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB12:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 2312U);
    t5 = *((char **)t3);
    t3 = (t0 + 9448);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(84, ng0);
    t3 = (t0 + 1832U);
    t5 = *((char **)t3);
    t3 = (t0 + 9512);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1992U);
    t5 = *((char **)t3);
    t3 = (t0 + 9576);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(86, ng0);
    t3 = (t0 + 5992U);
    t5 = *((char **)t3);
    t3 = (t0 + 9640);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(87, ng0);
    t3 = (t0 + 2632U);
    t5 = *((char **)t3);
    t3 = (t0 + 9704);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 16U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(88, ng0);
    t3 = (t0 + 2792U);
    t5 = *((char **)t3);
    t3 = (t0 + 9768);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 16U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(89, ng0);
    t3 = (t0 + 2152U);
    t5 = *((char **)t3);
    t3 = (t0 + 9832);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 5U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB3;

LAB5:    t5 = (t0 + 1192U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB7;

LAB8:    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t2 = t8;
    goto LAB10;

LAB11:    xsi_set_current_line(79, ng0);
    t17 = (t0 + 5352U);
    t21 = *((char **)t17);
    t19 = (7 - 5);
    t22 = (t19 * 1U);
    t23 = (0 + t22);
    t17 = (t21 + t23);
    t24 = (t0 + 9320);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t17, 6U);
    xsi_driver_first_trans_fast_port(t24);
    goto LAB12;

}


extern void work_a_4169747399_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4169747399_2372691052_p_0,(void *)work_a_4169747399_2372691052_p_1};
	xsi_register_didat("work_a_4169747399_2372691052", "isim/TLTEST_isim_beh.exe.sim/work/a_4169747399_2372691052.didat");
	xsi_register_executes(pe);
}
