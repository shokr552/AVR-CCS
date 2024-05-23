/*
 * ADC_Private.h
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#ifndef MCAL_ADC_ADC_PRIVATE_H_
#define MCAL_ADC_ADC_PRIVATE_H_

/*--------------------------------------------------------------------------------------------*/
/*   DEFINES   */
/*--------------------------------------------------------------------------------------------*/
#define ADC_FINISH_CONVERTING   1
#define ADC_POLLING_TIME        2000000
#define ADMUX_MASK              0xE0
#define AVCC                    1
#define AREF_PIN                2
#define _2V5                    3

/*   REGISTERS   */
#define ADMUX_REG     *(volatile u8*)0x27
#define ADCSRA_REG    *(volatile u8*)0x26
#define ADCL_REG      *(volatile u8*)0x24
#define ADCH_REG      *(volatile u8*)0x25
#define ADCVALUE_REG  *(volatile u16*)0x24

/*   ADMUX BITS   */
#define REFS1_BIT            7
#define REFS0_BIT            6
#define ADLAR_BIT            5
#define MUX4_BIT             4
#define MUX3_BIT             3
#define MUX2_BIT             2
#define MUX1_BIT             1
#define MUX0_BIT             0

/*   ADCSRA BITS   */
#define ADEN_BIT             7
#define ADSC_BIT             6
#define ADATE_BIT            5
#define ADIF_BIT             4
#define ADPS2_BIT            2
#define ADPS1_BIT            1
#define ADPS0_BIT            0

#endif /* MCAL_ADC_ADC_PRIVATE_H_ */
