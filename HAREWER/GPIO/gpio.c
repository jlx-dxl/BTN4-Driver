#include "gpio.h"

/**************************************************************************
�������ܣ���ʼ��PA6ʹ�ܶ�
��ڲ�������
����  ֵ����
**************************************************************************/
void Gpio_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;            //����ṹ��GPIO_InitStructure
	
  RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB, ENABLE); // ʹ��PB�˿�ʱ��  
  GPIO_InitStructure.GPIO_Pin =   GPIO_Pin_6;	  //P6
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;     	//���죬��������������  
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;  //IO���ٶ�
	GPIO_Init(GPIOB, &GPIO_InitStructure);          //GBIOB��ʼ�� 
	GPIO_SetBits(GPIOB,GPIO_Pin_6);									//�ø�ʹ��PB6
	
}
