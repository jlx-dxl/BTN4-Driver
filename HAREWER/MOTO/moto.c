#include "moto.h"


/**************************************************************************
�������ܣ����������ת
��ڲ�����
		moto��1���Ƶ��A,2���Ƶ��B,2���Ƶ��C,4���Ƶ��D
	  pwm1��IN1��PWM��CRR�Ĵ�����ֵ ռ�ձȾ���pwm1/7200
		pwm2��IN2��PWM��CRR�Ĵ�����ֵ ռ�ձȾ���pwm2/7200
����  ֵ�� ��
   a=pwm1-pwm2
  |a|  �Ĵ�С����ת�ٶ�
   a   �ķ��ž���ת��
**************************************************************************/

void control(int moto,int pwm1, int pwm2)
{
	if(moto==1){                           
	TIM_SetCompare3(TIM4,pwm1);   //����TIM4ͨ��3��ռ�ձ�  pwm1/7200
	TIM_SetCompare4(TIM4,pwm2); 	//����TIM4ͨ��4��ռ�ձ�  pwm2/7200
	}
	if(moto==2){
	TIM_SetCompare1(TIM2,pwm1);   //����TIM2ͨ��1��ռ�ձ�  pwm1/7200
	TIM_SetCompare2(TIM2,pwm2);   //����TIM2ͨ��2��ռ�ձ�  pwm2/7200
	}
	if(moto==3){
	TIM_SetCompare3(TIM2,pwm1);   //����TIM2ͨ��3��ռ�ձ�  pwm1/7200
	TIM_SetCompare4(TIM2,pwm2); 	//����TIM2ͨ��4��ռ�ձ�  pwm1/7200
	}
	
	if(moto==4){
	TIM_SetCompare1(TIM3,pwm1);   //����TIM3ͨ��1��ռ�ձ�  pwm1/7200
	TIM_SetCompare2(TIM3,pwm2);   //����TIM3ͨ��2��ռ�ձ�  pwm2/7200
	}                                      
	
}




