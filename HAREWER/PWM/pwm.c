#include "pwm.h"



/**************************************************************************
�������ܣ�pwm��ʼ��TIM2
��ڲ�����arr����Ϊһ��ʱ��Ƶ�ʵ����ֵ  psc�� Ԥ��Ƶֵ
����  ֵ����
**************************************************************************/

void	pwm_int_TIM2(u16 arr,u16 psc)
{
	 GPIO_InitTypeDef GPIO_InitStructure;                 //����ṹ��GPIO_InitStructure
	 TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;       //����ṹTIM_TimeBaseStructure
	 TIM_OCInitTypeDef  TIM_OCInitStructure;               //����ṹTIM_OCInitStructure
	
	 RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2,ENABLE);  //ʹ�ܶ�ʱ��3ʱ��
	 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);//ʹ��PA�˿�ʱ��

	 GPIO_InitStructure.GPIO_Pin =    GPIO_Pin_0 | GPIO_Pin_1| GPIO_Pin_2 | GPIO_Pin_3;          //P0 P1 P2 P3
   GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;     //IO���ٶ�
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;     	//����ģʽ���
	 GPIO_Init(GPIOA, &GPIO_InitStructure);              //GBIOA��ʼ��  
	
	 TIM_TimeBaseStructure.TIM_Period = arr;    //��������һ�������¼�װ�����Զ���װ�ؼĴ������ڵ�ֵ	 
   TIM_TimeBaseStructure.TIM_Prescaler = psc; //����������ΪTIMxʱ��Ƶ�ʳ�����Ԥ��Ƶֵ  ����Ƶ
   TIM_TimeBaseStructure.TIM_ClockDivision = 0;  //����ʱ�ӷָ�:TDTS = Tck_tim
   TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up; //TIM���ϼ���ģʽ

   TIM_TimeBaseInit(TIM2, &TIM_TimeBaseStructure);//����TIM_TimeBaseInitStruct��ָ���Ĳ�����ʼ��TIMx��ʱ�������λ

	 TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM1;   //PWMTIM�����ȵ���ģʽ1
 	 TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_High;       //����TIM����Ƚϼ���Ϊ��
   TIM_OCInitStructure.TIM_OutputState=	TIM_OutputState_Enable;   //�Ƚ����ʹ��
	 
	 TIM_OC1Init(TIM2, &TIM_OCInitStructure);  //����TIM_OCInitStructure��ָ���Ĳ�����ʼ������TIM2

   TIM_OC1PreloadConfig(TIM2, TIM_OCPreload_Enable);	    //ʹ��Ԥװ�ؼĴ���

   TIM_OC2Init(TIM2, &TIM_OCInitStructure);  //����TIM_OCInitStructure��ָ���Ĳ�����ʼ������TIM2

   TIM_OC2PreloadConfig(TIM2, TIM_OCPreload_Enable);	    //ʹ��Ԥװ�ؼĴ���
	 
	 TIM_OC3Init(TIM2, &TIM_OCInitStructure);  //����TIM_OCInitStructure��ָ���Ĳ�����ʼ������TIM2

   TIM_OC3PreloadConfig(TIM2, TIM_OCPreload_Enable);	    //ʹ��Ԥװ�ؼĴ���

   TIM_OC4Init(TIM2, &TIM_OCInitStructure);  //����TIM_OCInitStructure��ָ���Ĳ�����ʼ������TIM2

   TIM_OC4PreloadConfig(TIM2, TIM_OCPreload_Enable);	    //ʹ��Ԥװ�ؼĴ���
	 
	 TIM_ARRPreloadConfig(TIM2, ENABLE);      //ʹ���Զ�װ������λ
	 
	 TIM_Cmd(TIM2, ENABLE);   //������ʱ��TIM2
 }


/**************************************************************************
�������ܣ�pwm��ʼ��TIM3
��ڲ�����arr����Ϊһ��ʱ��Ƶ�ʵ����ֵ  psc�� Ԥ��Ƶֵ
����  ֵ����
**************************************************************************/

void	pwm_int_TIM3(u16 arr,u16 psc)
{
	 GPIO_InitTypeDef GPIO_InitStructure;                 //����ṹ��GPIO_InitStructure
	 TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;       //����ṹTIM_TimeBaseStructure
	 TIM_OCInitTypeDef  TIM_OCInitStructure;               //����ṹTIM_OCInitStructure
	
	 RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3,ENABLE);  //ʹ�ܶ�ʱ��3ʱ��
	 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);//ʹ��PA��PB�˿�ʱ��

	 GPIO_InitStructure.GPIO_Pin =    GPIO_Pin_6 | GPIO_Pin_7;          //PA6 PA7
   GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;     //IO���ٶ�
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;     	//����ģʽ���
	 GPIO_Init(GPIOA, &GPIO_InitStructure);              //GBIOA��ʼ��  
	
	 TIM_TimeBaseStructure.TIM_Period = arr;    //��������һ�������¼�װ�����Զ���װ�ؼĴ������ڵ�ֵ	 
   TIM_TimeBaseStructure.TIM_Prescaler = psc; //����������ΪTIMxʱ��Ƶ�ʳ�����Ԥ��Ƶֵ  ����Ƶ
   TIM_TimeBaseStructure.TIM_ClockDivision = 0;  //����ʱ�ӷָ�:TDTS = Tck_tim
   TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up; //TIM���ϼ���ģʽ

   TIM_TimeBaseInit(TIM3, &TIM_TimeBaseStructure);//����TIM_TimeBaseInitStruct��ָ���Ĳ�����ʼ��TIMx��ʱ�������λ

	 TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM1;   //PWMTIM�����ȵ���ģʽ1
 	 TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_High;       //����TIM����Ƚϼ���Ϊ��
   TIM_OCInitStructure.TIM_OutputState=	TIM_OutputState_Enable;   //�Ƚ����ʹ��
	 
	 TIM_OC1Init(TIM3, &TIM_OCInitStructure);  //����TIM_OCInitStructure��ָ���Ĳ�����ʼ������TIM3

   TIM_OC1PreloadConfig(TIM3, TIM_OCPreload_Enable);	    //ʹ��Ԥװ�ؼĴ���

   TIM_OC2Init(TIM3, &TIM_OCInitStructure);  //����TIM_OCInitStructure��ָ���Ĳ�����ʼ������TIM3

   TIM_OC2PreloadConfig(TIM3, TIM_OCPreload_Enable);	    //ʹ��Ԥװ�ؼĴ���
	 
	 
	 TIM_ARRPreloadConfig(TIM3, ENABLE);      //ʹ���Զ�װ������λ
	 
	 TIM_Cmd(TIM3, ENABLE);   //������ʱ��TIM3
 }

 
  /**************************************************************************
�������ܣ�pwm��ʼ��TIM4
��ڲ�����arr����Ϊһ��ʱ��Ƶ�ʵ����ֵ  psc�� Ԥ��Ƶֵ
����  ֵ����
**************************************************************************/
 

 void	pwm_int_TIM4(u16 arr,u16 psc)
{
	 GPIO_InitTypeDef GPIO_InitStructure;                 //����ṹ��GPIO_InitStructure
	 TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;       //����ṹTIM_TimeBaseStructure
	 TIM_OCInitTypeDef  TIM_OCInitStructure;               //����ṹTIM_OCInitStructure
	 
	  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4,ENABLE);  //ʹ�ܶ�ʱ��4ʱ��
	 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);//ʹ��PB�˿�ʱ��

	 GPIO_InitStructure.GPIO_Pin =   GPIO_Pin_8 | GPIO_Pin_9;          //PB7
   GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;     //IO���ٶ�
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;     	//����ģʽ���
	 GPIO_Init(GPIOB, &GPIO_InitStructure);              //GBIOB��ʼ��  
	
	 TIM_TimeBaseStructure.TIM_Period = arr;    //��������һ�������¼�װ�����Զ���װ�ؼĴ������ڵ�ֵ	 
   TIM_TimeBaseStructure.TIM_Prescaler = psc; //����������ΪTIMxʱ��Ƶ�ʳ�����Ԥ��Ƶֵ  ����Ƶ
   TIM_TimeBaseStructure.TIM_ClockDivision = 0;  //����ʱ�ӷָ�:TDTS = Tck_tim
   TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up; //TIM���ϼ���ģʽ

   TIM_TimeBaseInit(TIM4, &TIM_TimeBaseStructure);//����TIM_TimeBaseInitStruct��ָ���Ĳ�����ʼ��TIMx��ʱ�������λ

	 TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM1;   //PWMTIM�����ȵ���ģʽ1
 	 TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_High;       //����TIM����Ƚϼ���Ϊ��
   TIM_OCInitStructure.TIM_OutputState=	TIM_OutputState_Enable;   //�Ƚ����ʹ��
	 
	 TIM_OC3Init(TIM4, &TIM_OCInitStructure);  //����TIM_OCInitStructure��ָ���Ĳ�����ʼ������TIM4

   TIM_OC3PreloadConfig(TIM4, TIM_OCPreload_Enable);	    //ʹ��Ԥװ�ؼĴ���

   TIM_OC4Init(TIM4, &TIM_OCInitStructure);  //����TIM_OCInitStructure��ָ���Ĳ�����ʼ������TIM4

   TIM_OC4PreloadConfig(TIM4, TIM_OCPreload_Enable);	    //ʹ��Ԥװ�ؼĴ���
	
	 TIM_ARRPreloadConfig(TIM4, ENABLE);      //ʹ���Զ�װ������λ

	 TIM_Cmd(TIM4, ENABLE);   //������ʱ��TIM4
	 
}


