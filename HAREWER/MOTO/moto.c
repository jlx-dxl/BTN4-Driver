#include "moto.h"


/**************************************************************************
函数功能：电机的正反转
入口参数：
		moto：1控制电机A,2控制电机B,2控制电机C,4控制电机D
	  pwm1：IN1的PWM的CRR寄存器赋值 占空比就是pwm1/7200
		pwm2：IN2的PWM的CRR寄存器赋值 占空比就是pwm2/7200
返回  值： 无
   a=pwm1-pwm2
  |a|  的大小决定转速度
   a   的符号决定转速
**************************************************************************/

void control(int moto,int pwm1, int pwm2)
{
	if(moto==1){                           
	TIM_SetCompare3(TIM4,pwm1);   //设置TIM4通道3的占空比  pwm1/7200
	TIM_SetCompare4(TIM4,pwm2); 	//设置TIM4通道4的占空比  pwm2/7200
	}
	if(moto==2){
	TIM_SetCompare1(TIM2,pwm1);   //设置TIM2通道1的占空比  pwm1/7200
	TIM_SetCompare2(TIM2,pwm2);   //设置TIM2通道2的占空比  pwm2/7200
	}
	if(moto==3){
	TIM_SetCompare3(TIM2,pwm1);   //设置TIM2通道3的占空比  pwm1/7200
	TIM_SetCompare4(TIM2,pwm2); 	//设置TIM2通道4的占空比  pwm1/7200
	}
	
	if(moto==4){
	TIM_SetCompare1(TIM3,pwm1);   //设置TIM3通道1的占空比  pwm1/7200
	TIM_SetCompare2(TIM3,pwm2);   //设置TIM3通道2的占空比  pwm2/7200
	}                                      
	
}




