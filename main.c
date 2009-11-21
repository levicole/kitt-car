#include <avr/io.h>
#include <util/delay.h>
#include "main.h"
int main ()
{
	//setup
	// configure PB0 for output
	pinMode(LED1, OUT);
  pinMode(LED2, OUT);
  pinMode(LED3, OUT);
  pinMode(LED4, OUT);
  pinMode(LED5, OUT);
	while(1)
	{
		digitalWrite(LED1, HIGH);
		_delay_ms(20);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
		_delay_ms(20);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
		_delay_ms(20);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, HIGH);
		_delay_ms(20);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, HIGH);
		_delay_ms(20);
    digitalWrite(LED5, LOW);
    digitalWrite(LED4, HIGH);
		_delay_ms(20);
    digitalWrite(LED4, LOW);
    digitalWrite(LED3, HIGH);
		_delay_ms(20);
    digitalWrite(LED3, LOW);
    digitalWrite(LED2, HIGH);
		_delay_ms(20);
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
