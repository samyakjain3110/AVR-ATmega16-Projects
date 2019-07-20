/*
 * PRACTISE.cpp
 *
 * Created: 6/19/2019 10:10:27 AM
 *  Author: SAMYAK
 */ 


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA = 0xff;

	
    while(1)
    {
			PORTA = 0X01;
			_delay_ms(1000);
			PORTA = 0X02;
			_delay_ms(1000);
			PORTA = 0X04;
			_delay_ms(1000);
        //TODO:: Please write your application code 
    }
}