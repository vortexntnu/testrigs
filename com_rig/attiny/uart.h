#ifndef UART_H
#define UART_H
#define BAUD_9600 ((4UL*F_CPU)/9600)

void initUART(/* arguments */);
void uart_init(unsigned long baud);
void uart_transmit(unsigned char data);

#endif
