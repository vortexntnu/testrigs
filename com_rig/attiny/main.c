#define F_CPU 3333333UL

#include <avr/io.h>
#include <util/delay.h>
#include "uart.h"
#include <avr/interrupt.h>

#define hei 50
#define LED0 4 // LED0 is connected to pin 4 on port B (PIN4_bp)

int main(void){
    PORTB.DIR |= (1 << LED0);
    uart_init(BAUD_9600);
    sei();
    while (1);
}

ISR(USART0_RXC_vect){

	uint8_t data = USART0_RXDATAL;
	//Do things with data:

    PORTB.OUT ^= (1 << LED0);

	uart_transmit(data - 1); //Example: Shift all characters by one step A -> B, B -> C etc.

}
