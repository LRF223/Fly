//***************************************************************************************
//烈火微型四轴飞行器源码版权归烈火团队所有，未经烈火团队同意，请勿随意在网上传播本源码。
//与本软件相关书籍<<四轴飞行器DIY-基于STM32微控制器>>，由北航出版社正式出版，内容对本套包
//含的所有软件以及硬件相关都做了详细的讲解，有兴趣的网友可以从各大书店购买。
//与本软件配套的硬件：http://fire-dragon.taobao.com
//如果有网友做了各种有意义的改进，请随时与我们保持联系。
//QQ：16053729    烈火QQ群：234879071
//***************************************************************************************
#include "stm32f10x.h"
//#include "stdio.h"//为了正常使用printf而添加！不建议使用。

#include "IMU.h"
#include "Tasks.h"
#include "Maths.h"
#include "Filter.h"
#include "Control.h"
#include "struct_all.h"

int main(void)
{
	BSP_Int();	//底层驱动初始化
	while(1)
	{
		if(Count_1ms>=1)
		{	
			Count_1ms = 0;
			Task_1000HZ();
		}
		if(Count_2ms>=2)
		{
			Count_2ms = 0;
			Task_500HZ();
		}
		if(Count_4ms>=4)
		{
			Count_4ms = 0;
			Task_250HZ();
		}
	}
}

//int fputc(int ch, FILE *f)	//为了正常使用printf而添加！不建议使用。
//{
//	USART_SendData(USART1, (uint8_t) ch);
//	while(USART_GetFlagStatus(USART1, USART_FLAG_TC) == RESET);
//	return ch;
//}
