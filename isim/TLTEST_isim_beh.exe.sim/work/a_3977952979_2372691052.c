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
static const char *ng0 = "C:/Users/dbake/Desktop/sandbox/UMDRISC16/Decode.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_4058165771_3965413181(char *, char *, char *, char *, char *);


static void work_a_3977952979_2372691052_p_0(char *t0)
{
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(41, ng0);
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
LAB3:    t3 = (t0 + 5480);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 1352U);
    t12 = *((char **)t5);
    t13 = (15 - 15);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t5 = (t12 + t15);
    t16 = (t0 + 5576);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t5, 4U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1352U);
    t5 = *((char **)t3);
    t13 = (15 - 11);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t3 = (t5 + t15);
    t6 = (t0 + 5640);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1352U);
    t5 = *((char **)t3);
    t13 = (15 - 7);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t3 = (t5 + t15);
    t6 = (t0 + 5704);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1352U);
    t5 = *((char **)t3);
    t13 = (15 - 7);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t3 = (t5 + t15);
    t6 = (t0 + 5768);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1352U);
    t5 = *((char **)t3);
    t13 = (15 - 11);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t3 = (t5 + t15);
    t6 = (t0 + 5832);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1512U);
    t5 = *((char **)t3);
    t3 = (t0 + 5896);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t5, 9U);
    xsi_driver_first_trans_fast(t3);
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
    t8 = (t7 == (unsigned char)3);
    t2 = t8;
    goto LAB10;

}

static void work_a_3977952979_2372691052_p_1(char *t0)
{
    char t21[16];
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
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(53, ng0);
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
LAB3:    t3 = (t0 + 5496);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(54, ng0);
    t5 = (t0 + 3752U);
    t12 = *((char **)t5);
    t5 = (t0 + 5960);
    t13 = (t5 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 9U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(55, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t0 + 6024);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(56, ng0);
    t3 = (t0 + 3112U);
    t5 = *((char **)t3);
    t3 = (t0 + 6088);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(57, ng0);
    t3 = (t0 + 3272U);
    t5 = *((char **)t3);
    t3 = (t0 + 6152);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(58, ng0);
    t3 = (t0 + 3432U);
    t5 = *((char **)t3);
    t3 = (t0 + 6216);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(59, ng0);
    t3 = (t0 + 3592U);
    t5 = *((char **)t3);
    t3 = (t0 + 6280);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(60, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t0 + 3432U);
    t6 = *((char **)t3);
    t17 = (0 - 7);
    t18 = (t17 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t3 = (t6 + t20);
    t1 = *((unsigned char *)t3);
    t12 = ((IEEE_P_2592010699) + 4024);
    t13 = (t0 + 9192U);
    t9 = xsi_base_array_concat(t9, t21, t12, (char)97, t5, t13, (char)99, t1, (char)101);
    t22 = (4U + 1U);
    t2 = (5U != t22);
    if (t2 == 1)
        goto LAB11;

LAB12:    t14 = (t0 + 6344);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 5U);
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(62, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t0 + 9192U);
    t6 = (t0 + 9356);
    t12 = (t21 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 3;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t17 = (3 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t18;
    t1 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t5, t3, t6, t21);
    if (t1 != 0)
        goto LAB13;

LAB15:    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t0 + 9192U);
    t6 = (t0 + 9363);
    t12 = (t21 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 3;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t17 = (3 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t18;
    t1 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t5, t3, t6, t21);
    if (t1 != 0)
        goto LAB16;

LAB17:    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t0 + 9192U);
    t6 = (t0 + 9370);
    t12 = (t21 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 3;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t17 = (3 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t18;
    t1 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t5, t3, t6, t21);
    if (t1 != 0)
        goto LAB18;

LAB19:    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t0 + 9192U);
    t6 = (t0 + 9377);
    t12 = (t21 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 3;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t17 = (3 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t18;
    t1 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t5, t3, t6, t21);
    if (t1 != 0)
        goto LAB20;

LAB21:
LAB14:    goto LAB3;

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

LAB11:    xsi_size_not_matching(5U, t22, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(63, ng0);
    t13 = (t0 + 9360);
    t15 = (t0 + 6408);
    t16 = (t15 + 56U);
    t23 = *((char **)t16);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t13, 3U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB14;

LAB16:    xsi_set_current_line(65, ng0);
    t13 = (t0 + 9367);
    t15 = (t0 + 6408);
    t16 = (t15 + 56U);
    t23 = *((char **)t16);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t13, 3U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB14;

LAB18:    xsi_set_current_line(67, ng0);
    t13 = (t0 + 9374);
    t15 = (t0 + 6408);
    t16 = (t15 + 56U);
    t23 = *((char **)t16);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t13, 3U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB14;

LAB20:    xsi_set_current_line(69, ng0);
    t13 = (t0 + 9381);
    t15 = (t0 + 6408);
    t16 = (t15 + 56U);
    t23 = *((char **)t16);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t13, 3U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB14;

}


extern void work_a_3977952979_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3977952979_2372691052_p_0,(void *)work_a_3977952979_2372691052_p_1};
	xsi_register_didat("work_a_3977952979_2372691052", "isim/TLTEST_isim_beh.exe.sim/work/a_3977952979_2372691052.didat");
	xsi_register_executes(pe);
}
