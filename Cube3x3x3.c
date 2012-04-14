/*
 * Cube3x3x3.c
 *
 * Created: 11.04.2012 12:34:36
 *  Author: Tobi
 */ 

#include <avr/io.h>

int main(void)
{
	DDRC = 0xFF;
	DDRB = 0xFF;
	DDRD = 0xFF;
	
	PORTC = 0x00;
	PORTD = 0xFF;
	PORTB = 0xFF;
	
    while(1)
    {
       PORTC = 0x00;
	PORTD = 0xFF;
	PORTB = 0xFF; //TODO:: Please write your application code 
    }
}