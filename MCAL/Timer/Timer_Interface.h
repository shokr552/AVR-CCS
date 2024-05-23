/*
 * Timer_Interface.h
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#ifndef MCAL_TIMER_TIMER_INTERFACE_H_
#define MCAL_TIMER_TIMER_INTERFACE_H_

/*--------------------------------------------------------------------------------------------*/
/*   INCLUDES   */
/*--------------------------------------------------------------------------------------------*/
#include "STD.h"
#include "BitMath.h"
#include "DIO_Interface.h"
#include <avr/interrupt.h>

/*--------------------------------------------------------------------------------------------*/
/*   DEFINES   */
/*--------------------------------------------------------------------------------------------*/
#define  TIMER0_CHANNEL         0
#define  TIMER1_CHANNEL         1
#define  TIMER2_CHANNEL         2

/*--------------------------------------------------------------------------------------------*/
/*   PROTOTYPES   */
/*--------------------------------------------------------------------------------------------*/
void M_Timer_Void_TimerInit(void);
void M_Timer_Void_TimerSetTime(u32);
void M_Timer_Void_TimerStart(u8);
void M_Timer_Void_TimerStop(u8);

void M_Timer_Void_PWMInit(u8);
void M_Timer_Void_PWMSetDutyCycle(u8,f32);
void M_Timer_Void_PWMStart(u8);
void M_Timer_Void_PWMStop(u8);
void M_Timer_Void_SetCallBack(void(*)(void));


/*********************************************************************************/


void Timer2_Init(void);

void M_Timer_Void_Timer2SetTime(u32);
void M_Timer_Void_Timer2Start(void);
void M_Timer_Void_Timer2Stop(void);

extern void Timer2_SetCallBack(void (*p_fnc)(void));

#endif /* MCAL_TIMER_TIMER_INTERFACE_H_ */
