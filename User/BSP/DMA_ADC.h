#ifndef _DMA_ADC_H_
#define _DMA_ADC_H_
#include "stm32f10x.h"

/******************************************************************************
							宏定义
*******************************************************************************/ 
#define M 2

/******************************************************************************
							全局变量声明
*******************************************************************************/ 
extern uint16_t ADC_Value[M];
extern int16_t Battery_Fly;

/******************************************************************************
							全局函数声明
*******************************************************************************/ 
void ADC1_Init(void);
void Voltage_Printf(void);
	
#endif
