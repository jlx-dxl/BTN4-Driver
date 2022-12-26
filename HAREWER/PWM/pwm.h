#ifndef __PWM_H
#define	__PWM_H

#include "stm32f10x.h"

void	pwm_int_TIM2(u16 arr,u16 psc);
void	pwm_int_TIM3(u16 arr,u16 psc);
void	pwm_int_TIM4(u16 arr,u16 psc);

#endif

