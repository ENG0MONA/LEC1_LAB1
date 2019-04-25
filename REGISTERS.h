/*
 * REGISTERS.h
 *
 *  Created on: ??�/??�/????
 *      Author: toshipa
 */

#ifndef LIB_REGISTERS_H_
#define LIB_REGISTERS_H_

//WE INCLUDE STD_TYPES.h BECAUSE WE USE DATA TYPES LIKE uint8
#include"STD_TYPES.h"
//for DIO
#define DDRA         *((volatile uint8 *)(0X3A))
#define PORTA         *((volatile uint8 *)(0X3B))
#define PINA         *((volatile uint8 *)(0X39))


#define DDRB         *((volatile uint8 *)(0X37))
#define PORTB         *((volatile uint8 *)(0X38))
#define PINB        *((volatile uint8 *)(0X36))

#define DDRC         *((volatile uint8 *)(0X34))
#define PORTC         *((volatile uint8 *)(0X35))
#define PINC        *((volatile uint8 *)(0X33))

#define DDRD         *((volatile uint8 *)(0X31))
#define PORTD         *((volatile uint8 *)(0X32))
#define PIND         *((volatile uint8 *)(0X30))


#endif /* LIB_REGISTERS_H_ */
