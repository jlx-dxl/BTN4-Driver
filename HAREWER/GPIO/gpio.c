#include "gpio.h"

/**************************************************************************
函数功能：初始化PA6使能端
入口参数：无
返回  值：无
**************************************************************************/
void Gpio_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;            //定义结构体GPIO_InitStructure
	
  RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB, ENABLE); // 使能PB端口时钟  
  GPIO_InitStructure.GPIO_Pin =   GPIO_Pin_6;	  //P6
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;     	//推挽，增大电流输出能力  
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;  //IO口速度
	GPIO_Init(GPIOB, &GPIO_InitStructure);          //GBIOB初始化 
	GPIO_SetBits(GPIOB,GPIO_Pin_6);									//置高使能PB6
	
}
