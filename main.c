#include <avr/io.h>
#include <util/delay.h>
#include "main.h"
int main ()
{
	//setup
	// configure PB0 for output
	pinMode(LED1, OUT);
  pinMode(LED2, OUT);
	while(1)
	{
		digitalWrite(LED1, HIGH);
		_delay_ms(100);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
		_delay_ms(100);
    digitalWrite(LED2, LOW);
	}
	return 0;
}

void pinMode(uint8_t pin, uint8_t mode)
{
	if(mode == OUT)	DDRB |= (1 << pin);
	else DDRB &= ~(1 << pin);
}

void digitalWrite(uint8_t pin, uint8_t state)
{
	if(state == HIGH)	PORTB |= (1 << pin);
	else PORTB &= ~(1 << pin);
}
