#include"../MCAL/DIO/DIO.h"
#include<avr/delay.h>
void main()
{


DIO_voidSetPinDirection(PORTA_ID,PIN0_ID,OUTPUT);

DIO_voidSetPinValue(PORTA_ID,PIN0_ID,HIGH);


}
