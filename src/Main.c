/********************************** (C) COPYRIGHT *******************************
 * File Name          : Main.c
 * Author             : jie
 * Version            : V1.0
 * Date               : 2022/06/01
 * Description        : 水位传感器数据显示
 * Copyright (c) 2022 Nanjing Qinheng Microelectronics Co., Ltd.
 * SPDX-License-Identifier: Apache-2.0
 *******************************************************************************/

#include "CH58x_common.h"
#include "adc.h"
#include "oled.h"

int main()
{
   SetSysClock(CLK_SOURCE_PLL_60MHz);

    /* 配置串口1：先配置IO口模式，再配置串口 */
    GPIOA_SetBits(GPIO_Pin_9);
    GPIOA_ModeCfg(GPIO_Pin_8, GPIO_ModeIN_PU);      // RXD-配置上拉输入
    GPIOA_ModeCfg(GPIO_Pin_9, GPIO_ModeOut_PP_5mA); // TXD-配置推挽输出，注意先让IO口输出高电平
    UART1_DefInit();

	adc_init();
	oled_init();
	OLED_DisPlay_On();
	OLED_DisplayTurn(1);
	oled_show();
    while(1){
		adc_convert_caclute();
    }
}

