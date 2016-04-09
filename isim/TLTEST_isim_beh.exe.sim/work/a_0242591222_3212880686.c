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
static const char *ng0 = "C:/Users/dbake/Desktop/sandbox/UMDRISC16/OaUnit.vhd";
extern char *IEEE_P_2592010699;



static void work_a_0242591222_3212880686_p_0(char *t0)
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(48, ng0);
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
LAB3:    t3 = (t0 + 6760);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t5 = (t0 + 1352U);
    t12 = *((char **)t5);
    t5 = (t0 + 6856);
    t13 = (t5 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 9U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1672U);
    t5 = *((char **)t3);
    t3 = (t0 + 6920);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1832U);
    t5 = *((char **)t3);
    t3 = (t0 + 6984);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1832U);
    t5 = *((char **)t3);
    t3 = (t0 + 7048);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1992U);
    t5 = *((char **)t3);
    t3 = (t0 + 7112);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(54, ng0);
    t3 = (t0 + 2152U);
    t5 = *((char **)t3);
    t3 = (t0 + 7176);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(55, ng0);
    t3 = (t0 + 2312U);
    t5 = *((char **)t3);
    t3 = (t0 + 7240);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(56, ng0);
    t3 = (t0 + 2472U);
    t5 = *((char **)t3);
    t3 = (t0 + 7304);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1512U);
    t5 = *((char **)t3);
    t3 = (t0 + 7368);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 5U);
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

static void work_a_0242591222_3212880686_p_1(char *t0)
{
    char t21[16];
    char t22[16];
    char t30[16];
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
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int t31;
    char *t32;

LAB0:    xsi_set_current_line(63, ng0);
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
LAB3:    t3 = (t0 + 6776);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(64, ng0);
    t5 = (t0 + 4072U);
    t12 = *((char **)t5);
    t5 = (t0 + 7432);
    t13 = (t5 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(65, ng0);
    t3 = (t0 + 5032U);
    t5 = *((char **)t3);
    t3 = (t0 + 7496);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 5U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(66, ng0);
    t3 = (t0 + 4872U);
    t5 = *((char **)t3);
    t3 = (t0 + 11464);
    t1 = 1;
    if (3U == 3U)
        goto LAB14;

LAB15:    t1 = 0;

LAB16:    if (t1 != 0)
        goto LAB11;

LAB13:    t3 = (t0 + 4872U);
    t5 = *((char **)t3);
    t3 = (t0 + 11469);
    t1 = 1;
    if (3U == 3U)
        goto LAB22;

LAB23:    t1 = 0;

LAB24:    if (t1 != 0)
        goto LAB20;

LAB21:    t3 = (t0 + 4872U);
    t5 = *((char **)t3);
    t3 = (t0 + 11482);
    t1 = 1;
    if (3U == 3U)
        goto LAB32;

LAB33:    t1 = 0;

LAB34:    if (t1 != 0)
        goto LAB30;

LAB31:    t3 = (t0 + 4872U);
    t5 = *((char **)t3);
    t3 = (t0 + 11495);
    t1 = 1;
    if (3U == 3U)
        goto LAB42;

LAB43:    t1 = 0;

LAB44:    if (t1 != 0)
        goto LAB40;

LAB41:    t3 = (t0 + 4872U);
    t5 = *((char **)t3);
    t3 = (t0 + 11524);
    t1 = 1;
    if (3U == 3U)
        goto LAB54;

LAB55:    t1 = 0;

LAB56:    if (t1 != 0)
        goto LAB52;

LAB53:
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
    t8 = (t7 == (unsigned char)2);
    t2 = t8;
    goto LAB10;

LAB11:    xsi_set_current_line(69, ng0);
    t13 = (t0 + 11467);
    t15 = (t0 + 7560);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t13, 2U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB12;

LAB14:    t17 = 0;

LAB17:    if (t17 < 3U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t9 = (t5 + t17);
    t12 = (t3 + t17);
    if (*((unsigned char *)t9) != *((unsigned char *)t12))
        goto LAB15;

LAB19:    t17 = (t17 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(72, ng0);
    t13 = (t0 + 11472);
    t15 = (t0 + 4552U);
    t16 = *((char **)t15);
    t18 = ((IEEE_P_2592010699) + 4024);
    t19 = (t22 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 7;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t23 = (7 - 0);
    t24 = (t23 * 1);
    t24 = (t24 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t24;
    t20 = (t0 + 11308U);
    t15 = xsi_base_array_concat(t15, t21, t18, (char)97, t13, t22, (char)97, t16, t20, (char)101);
    t24 = (8U + 8U);
    t2 = (16U != t24);
    if (t2 == 1)
        goto LAB28;

LAB29:    t25 = (t0 + 7624);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t15, 16U);
    xsi_driver_first_trans_fast_port(t25);
    xsi_set_current_line(73, ng0);
    t3 = (t0 + 11480);
    t6 = (t0 + 7560);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t3, 2U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB12;

LAB22:    t17 = 0;

LAB25:    if (t17 < 3U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t9 = (t5 + t17);
    t12 = (t3 + t17);
    if (*((unsigned char *)t9) != *((unsigned char *)t12))
        goto LAB23;

LAB27:    t17 = (t17 + 1);
    goto LAB25;

LAB28:    xsi_size_not_matching(16U, t24, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(76, ng0);
    t13 = (t0 + 11485);
    t15 = (t0 + 4552U);
    t16 = *((char **)t15);
    t18 = ((IEEE_P_2592010699) + 4024);
    t19 = (t22 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 7;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t23 = (7 - 0);
    t24 = (t23 * 1);
    t24 = (t24 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t24;
    t20 = (t0 + 11308U);
    t15 = xsi_base_array_concat(t15, t21, t18, (char)97, t13, t22, (char)97, t16, t20, (char)101);
    t24 = (8U + 8U);
    t2 = (16U != t24);
    if (t2 == 1)
        goto LAB38;

LAB39:    t25 = (t0 + 7624);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t15, 16U);
    xsi_driver_first_trans_fast_port(t25);
    xsi_set_current_line(77, ng0);
    t3 = (t0 + 11493);
    t6 = (t0 + 7560);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t3, 2U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB12;

LAB32:    t17 = 0;

LAB35:    if (t17 < 3U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t9 = (t5 + t17);
    t12 = (t3 + t17);
    if (*((unsigned char *)t9) != *((unsigned char *)t12))
        goto LAB33;

LAB37:    t17 = (t17 + 1);
    goto LAB35;

LAB38:    xsi_size_not_matching(16U, t24, 0);
    goto LAB39;

LAB40:    xsi_set_current_line(79, ng0);
    t13 = (t0 + 4232U);
    t14 = *((char **)t13);
    t13 = (t0 + 7688);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t14, 4U);
    xsi_driver_first_trans_fast_port(t13);
    xsi_set_current_line(80, ng0);
    t3 = (t0 + 11498);
    t6 = (t0 + 11506);
    t13 = ((IEEE_P_2592010699) + 4024);
    t14 = (t22 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 7;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t23 = (7 - 0);
    t17 = (t23 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t30 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 0;
    t16 = (t15 + 4U);
    *((int *)t16) = 7;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t31 = (7 - 0);
    t17 = (t31 * 1);
    t17 = (t17 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t17;
    t12 = xsi_base_array_concat(t12, t21, t13, (char)97, t3, t22, (char)97, t6, t30, (char)101);
    t17 = (8U + 8U);
    t1 = (16U != t17);
    if (t1 == 1)
        goto LAB48;

LAB49:    t16 = (t0 + 7752);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t25 = *((char **)t20);
    memcpy(t25, t12, 16U);
    xsi_driver_first_trans_fast_port(t16);
    xsi_set_current_line(81, ng0);
    t3 = (t0 + 11514);
    t6 = (t0 + 4552U);
    t9 = *((char **)t6);
    t12 = ((IEEE_P_2592010699) + 4024);
    t13 = (t22 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 7;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t23 = (7 - 0);
    t17 = (t23 * 1);
    t17 = (t17 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t17;
    t14 = (t0 + 11308U);
    t6 = xsi_base_array_concat(t6, t21, t12, (char)97, t3, t22, (char)97, t9, t14, (char)101);
    t17 = (8U + 8U);
    t1 = (16U != t17);
    if (t1 == 1)
        goto LAB50;

LAB51:    t15 = (t0 + 7624);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t6, 16U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(82, ng0);
    t3 = (t0 + 11522);
    t6 = (t0 + 7560);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t3, 2U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB12;

LAB42:    t17 = 0;

LAB45:    if (t17 < 3U)
        goto LAB46;
    else
        goto LAB44;

LAB46:    t9 = (t5 + t17);
    t12 = (t3 + t17);
    if (*((unsigned char *)t9) != *((unsigned char *)t12))
        goto LAB43;

LAB47:    t17 = (t17 + 1);
    goto LAB45;

LAB48:    xsi_size_not_matching(16U, t17, 0);
    goto LAB49;

LAB50:    xsi_size_not_matching(16U, t17, 0);
    goto LAB51;

LAB52:    xsi_set_current_line(84, ng0);
    t13 = (t0 + 11527);
    t15 = (t0 + 11535);
    t19 = ((IEEE_P_2592010699) + 4024);
    t20 = (t22 + 0U);
    t25 = (t20 + 0U);
    *((int *)t25) = 0;
    t25 = (t20 + 4U);
    *((int *)t25) = 7;
    t25 = (t20 + 8U);
    *((int *)t25) = 1;
    t23 = (7 - 0);
    t24 = (t23 * 1);
    t24 = (t24 + 1);
    t25 = (t20 + 12U);
    *((unsigned int *)t25) = t24;
    t25 = (t30 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 0;
    t26 = (t25 + 4U);
    *((int *)t26) = 7;
    t26 = (t25 + 8U);
    *((int *)t26) = 1;
    t31 = (7 - 0);
    t24 = (t31 * 1);
    t24 = (t24 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t24;
    t18 = xsi_base_array_concat(t18, t21, t19, (char)97, t13, t22, (char)97, t15, t30, (char)101);
    t24 = (8U + 8U);
    t2 = (16U != t24);
    if (t2 == 1)
        goto LAB60;

LAB61:    t26 = (t0 + 7752);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t32 = *((char **)t29);
    memcpy(t32, t18, 16U);
    xsi_driver_first_trans_fast_port(t26);
    xsi_set_current_line(86, ng0);
    t3 = (t0 + 11543);
    t6 = (t0 + 7560);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t3, 2U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB12;

LAB54:    t17 = 0;

LAB57:    if (t17 < 3U)
        goto LAB58;
    else
        goto LAB56;

LAB58:    t9 = (t5 + t17);
    t12 = (t3 + t17);
    if (*((unsigned char *)t9) != *((unsigned char *)t12))
        goto LAB55;

LAB59:    t17 = (t17 + 1);
    goto LAB57;

LAB60:    xsi_size_not_matching(16U, t24, 0);
    goto LAB61;

}


extern void work_a_0242591222_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0242591222_3212880686_p_0,(void *)work_a_0242591222_3212880686_p_1};
	xsi_register_didat("work_a_0242591222_3212880686", "isim/TLTEST_isim_beh.exe.sim/work/a_0242591222_3212880686.didat");
	xsi_register_executes(pe);
}
