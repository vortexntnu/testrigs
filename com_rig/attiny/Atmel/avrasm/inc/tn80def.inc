;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2011-08-24 16:46 ******* Source: ATtiny80.xml ************
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "tn80def.inc"
;* Title             : Register/Bit Definitions for the ATtiny80
;* Date              : 2011-08-24
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATtiny80
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;* The Register names are represented by their hexadecimal address.
;* 
;* The Register Bit names are represented by their bit number (0-7).
;* 
;* Please observe the difference in using the bit names with instructions
;* such as "sbr"/"cbr" (set/clear bit in register) and "sbrs"/"sbrc"
;* (skip if bit in register set/cleared). The following example illustrates
;* this:
;* 
;* in    r16,PORTB             ;read PORTB latch
;* sbr   r16,(1<<PB6)+(1<<PB5) ;set PB6 and PB5 (use masks, not bit#)
;* out   PORTB,r16             ;output to PORTB
;* 
;* in    r16,TIFR              ;read the Timer Interrupt Flag Register
;* sbrc  r16,TOV0              ;test the overflow flag (use bit#)
;* rjmp  TOV0_is_set           ;jump if set
;* ...                         ;otherwise do something else
;*************************************************************************

#ifndef _TN80DEF_INC_
#define _TN80DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device ATtiny80
#pragma AVRPART ADMIN PART_NAME ATtiny80
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0x93
.equ	SIGNATURE_002	= 0x14

#pragma AVRPART CORE CORE_VERSION V2
#pragma AVRPART CORE NEW_INSTRUCTIONS lpm rd,z+


; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	OSCTCAL0B	= 0xf1	; MEMORY MAPPED
.equ	OSCTCAL0A	= 0xf0	; MEMORY MAPPED
.equ	TOCPMSA1	= 0xe9	; MEMORY MAPPED
.equ	TOCPMSA0	= 0xe8	; MEMORY MAPPED
.equ	TOCPMCOE	= 0xe2	; MEMORY MAPPED
.equ	DIDR3	= 0xdf	; MEMORY MAPPED
.equ	DIDR2	= 0xde	; MEMORY MAPPED
.equ	UDR	= 0xc6	; MEMORY MAPPED
.equ	UBRRL	= 0xc4	; MEMORY MAPPED
.equ	UBRRH	= 0xc5	; MEMORY MAPPED
.equ	UCSRD	= 0xc3	; MEMORY MAPPED
.equ	UCSRC	= 0xc2	; MEMORY MAPPED
.equ	UCSRB	= 0xc1	; MEMORY MAPPED
.equ	UCSRA	= 0xc0	; MEMORY MAPPED
.equ	TWSD	= 0xbd	; MEMORY MAPPED
.equ	TWSA	= 0xbc	; MEMORY MAPPED
.equ	TWSAM	= 0xbb	; MEMORY MAPPED
.equ	TWSSRA	= 0xba	; MEMORY MAPPED
.equ	TWSCRB	= 0xb9	; MEMORY MAPPED
.equ	TWSCRA	= 0xb8	; MEMORY MAPPED
.equ	OCR1BL	= 0x8a	; MEMORY MAPPED
.equ	OCR1BH	= 0x8b	; MEMORY MAPPED
.equ	OCR1AL	= 0x88	; MEMORY MAPPED
.equ	OCR1AH	= 0x89	; MEMORY MAPPED
.equ	ICR1L	= 0x86	; MEMORY MAPPED
.equ	ICR1H	= 0x87	; MEMORY MAPPED
.equ	TCNT1L	= 0x84	; MEMORY MAPPED
.equ	TCNT1H	= 0x85	; MEMORY MAPPED
.equ	TCCR1C	= 0x82	; MEMORY MAPPED
.equ	TCCR1B	= 0x81	; MEMORY MAPPED
.equ	TCCR1A	= 0x80	; MEMORY MAPPED
.equ	DIDR1	= 0x7f	; MEMORY MAPPED
.equ	DIDR0	= 0x7e	; MEMORY MAPPED
.equ	ADMUXB	= 0x7d	; MEMORY MAPPED
.equ	ADMUXA	= 0x7c	; MEMORY MAPPED
.equ	ADCSRB	= 0x7b	; MEMORY MAPPED
.equ	ADCSRA	= 0x7a	; MEMORY MAPPED
.equ	ADCH	= 0x79	; MEMORY MAPPED
.equ	ADCL	= 0x78	; MEMORY MAPPED
.equ	PCMSK3	= 0x73	; MEMORY MAPPED
.equ	TIMSK1	= 0x6f	; MEMORY MAPPED
.equ	TIMSK0	= 0x6e	; MEMORY MAPPED
.equ	PCMSK2	= 0x6d	; MEMORY MAPPED
.equ	PCMSK1	= 0x6c	; MEMORY MAPPED
.equ	PCMSK0	= 0x6b	; MEMORY MAPPED
.equ	EICRA	= 0x69	; MEMORY MAPPED
.equ	PCICR	= 0x68	; MEMORY MAPPED
.equ	OSCCAL1	= 0x67	; MEMORY MAPPED
.equ	OSCCAL0	= 0x66	; MEMORY MAPPED
.equ	PRR	= 0x64	; MEMORY MAPPED
.equ	CLKPR	= 0x61	; MEMORY MAPPED
.equ	WDTCSR	= 0x60	; MEMORY MAPPED
.equ	SREG	= 0x3f
.equ	SPL	= 0x3d
.equ	SPH	= 0x3e
.equ	SPMCSR	= 0x37
.equ	CCP	= 0x36
.equ	MCUCR	= 0x35
.equ	MCUSR	= 0x34
.equ	SMCR	= 0x33
.equ	ACSRA	= 0x30
.equ	ACSRB	= 0x2f
.equ	SPDR	= 0x2e
.equ	SPSR	= 0x2d
.equ	SPCR	= 0x2c
.equ	GPIOR2	= 0x2b
.equ	GPIOR1	= 0x2a
.equ	OCR0B	= 0x28
.equ	OCR0A	= 0x27
.equ	TCNT0	= 0x26
.equ	TCCR0B	= 0x25
.equ	TCCR0A	= 0x24
.equ	GTCCR	= 0x23
.equ	EEAR	= 0x21
.equ	EEDR	= 0x20
.equ	EECR	= 0x1f
.equ	GPIOR0	= 0x1e
.equ	EIMSK	= 0x1d
.equ	EIFR	= 0x1c
.equ	PCIFR	= 0x1b
.equ	TIFR1	= 0x16
.equ	TIFR0	= 0x15
.equ	PHDE	= 0x14
.equ	PUED	= 0x0f
.equ	PORTD	= 0x0e
.equ	DDRD	= 0x0d
.equ	PIND	= 0x0c
.equ	PUEC	= 0x0b
.equ	PORTC	= 0x0a
.equ	DDRC	= 0x09
.equ	PINC	= 0x08
.equ	PUEB	= 0x07
.equ	PORTB	= 0x06
.equ	DDRB	= 0x05
.equ	PINB	= 0x04
.equ	PUEA	= 0x03
.equ	PORTA	= 0x02
.equ	DDRA	= 0x01
.equ	PINA	= 0x00


; ***** BIT DEFINITIONS **************************************************

; ***** SPI **************************
; SPDR - SPI Data Register
.equ	SPDR0	= 0	; SPI Data Register bit 0
.equ	SPDR1	= 1	; SPI Data Register bit 1
.equ	SPDR2	= 2	; SPI Data Register bit 2
.equ	SPDR3	= 3	; SPI Data Register bit 3
.equ	SPDR4	= 4	; SPI Data Register bit 4
.equ	SPDR5	= 5	; SPI Data Register bit 5
.equ	SPDR6	= 6	; SPI Data Register bit 6
.equ	SPDR7	= 7	; SPI Data Register bit 7

; SPSR - SPI Status Register
.equ	SPI2X	= 0	; Double SPI Speed Bit
.equ	WCOL	= 6	; Write Collision Flag
.equ	SPIF	= 7	; SPI Interrupt Flag

; SPCR - SPI Control Register
.equ	SPR0	= 0	; SPI Clock Rate Select 0
.equ	SPR1	= 1	; SPI Clock Rate Select 1
.equ	CPHA	= 2	; Clock Phase
.equ	CPOL	= 3	; Clock polarity
.equ	MSTR	= 4	; Master/Slave Select
.equ	DORD	= 5	; Data Order
.equ	SPE	= 6	; SPI Enable
.equ	SPIE	= 7	; SPI Interrupt Enable


; ***** PORTA ************************
; PUEA - Pull-up Enable Control Register
.equ	PUEA0	= 0	; 
.equ	PUEA1	= 1	; 
.equ	PUEA2	= 2	; 
.equ	PUEA3	= 3	; 
.equ	PUEA4	= 4	; 
.equ	PUEA5	= 5	; 
.equ	PUEA6	= 6	; 
.equ	PUEA7	= 7	; 

; PORTA - Port A Data Register
.equ	PORTA0	= 0	; 
.equ	PA0	= 0	; For compatibility
.equ	PORTA1	= 1	; 
.equ	PA1	= 1	; For compatibility
.equ	PORTA2	= 2	; 
.equ	PA2	= 2	; For compatibility
.equ	PORTA3	= 3	; 
.equ	PA3	= 3	; For compatibility
.equ	PORTA4	= 4	; 
.equ	PA4	= 4	; For compatibility
.equ	PORTA5	= 5	; 
.equ	PA5	= 5	; For compatibility
.equ	PORTA6	= 6	; 
.equ	PA6	= 6	; For compatibility
.equ	PORTA7	= 7	; 
.equ	PA7	= 7	; For compatibility

; DDRA - Data Direction Register, Port A
.equ	DDA0	= 0	; 
.equ	DDA1	= 1	; 
.equ	DDA2	= 2	; 
.equ	DDA3	= 3	; 
.equ	DDA4	= 4	; 
.equ	DDA5	= 5	; 
.equ	DDA6	= 6	; 
.equ	DDA7	= 7	; 

; PINA - Port A Input Pins
.equ	PINA0	= 0	; 
.equ	PINA1	= 1	; 
.equ	PINA2	= 2	; 
.equ	PINA3	= 3	; 
.equ	PINA4	= 4	; 
.equ	PINA5	= 5	; 
.equ	PINA6	= 6	; 
.equ	PINA7	= 7	; 


; ***** PORTB ************************
; PUEB - Pull-up Enable Control Register
.equ	PUEB0	= 0	; 
.equ	PUEB1	= 1	; 
.equ	PUEB2	= 2	; 
.equ	PUEB3	= 3	; 
.equ	PUEB4	= 4	; 
.equ	PUEB5	= 5	; 
.equ	PUEB6	= 6	; 
.equ	PUEB7	= 7	; 

; PORTB - Port B Data Register
.equ	PORTB0	= 0	; 
.equ	PB0	= 0	; For compatibility
.equ	PORTB1	= 1	; 
.equ	PB1	= 1	; For compatibility
.equ	PORTB2	= 2	; 
.equ	PB2	= 2	; For compatibility
.equ	PORTB3	= 3	; 
.equ	PB3	= 3	; For compatibility
.equ	PORTB4	= 4	; 
.equ	PB4	= 4	; For compatibility
.equ	PORTB5	= 5	; 
.equ	PB5	= 5	; For compatibility
.equ	PORTB6	= 6	; 
.equ	PB6	= 6	; For compatibility
.equ	PORTB7	= 7	; 
.equ	PB7	= 7	; For compatibility

; DDRB - Data Direction Register, Port B
.equ	DDB0	= 0	; 
.equ	DDB1	= 1	; 
.equ	DDB2	= 2	; 
.equ	DDB3	= 3	; 
.equ	DDB4	= 4	; 
.equ	DDB5	= 5	; 
.equ	DDB6	= 6	; 
.equ	DDB7	= 7	; 

; PINB - Port B Input Pins
.equ	PINB0	= 0	; 
.equ	PINB1	= 1	; 
.equ	PINB2	= 2	; 
.equ	PINB3	= 3	; 
.equ	PINB4	= 4	; 
.equ	PINB5	= 5	; 
.equ	PINB6	= 6	; 
.equ	PINB7	= 7	; 


; ***** PORTC ************************
; PHDE - Port High Drive Enable Register
.equ	PHDEC	= 2	; Port C High Drive Enable

; PUEC - Pull-up Enable Control Register
.equ	PUEC0	= 0	; 
.equ	PUEC1	= 1	; 
.equ	PUEC2	= 2	; 
.equ	PUEC3	= 3	; 
.equ	PUEC4	= 4	; 
.equ	PUEC5	= 5	; 
.equ	PUEC6	= 6	; 
.equ	PUEC7	= 7	; 

; PORTC - Port C Data Register
.equ	PORTC0	= 0	; 
.equ	PC0	= 0	; For compatibility
.equ	PORTC1	= 1	; 
.equ	PC1	= 1	; For compatibility
.equ	PORTC2	= 2	; 
.equ	PC2	= 2	; For compatibility
.equ	PORTC3	= 3	; 
.equ	PC3	= 3	; For compatibility
.equ	PORTC4	= 4	; 
.equ	PC4	= 4	; For compatibility
.equ	PORTC5	= 5	; 
.equ	PC5	= 5	; For compatibility
.equ	PORTC6	= 6	; 
.equ	PC6	= 6	; For compatibility
.equ	PORTC7	= 7	; 
.equ	PC7	= 7	; For compatibility

; DDRC - Data Direction Register, Port C
.equ	DDC0	= 0	; 
.equ	DDC1	= 1	; 
.equ	DDC2	= 2	; 
.equ	DDC3	= 3	; 
.equ	DDC4	= 4	; 
.equ	DDC5	= 5	; 
.equ	DDC6	= 6	; 
.equ	DDC7	= 7	; 

; PINC - Port C Input Pins
.equ	PINC0	= 0	; 
.equ	PINC1	= 1	; 
.equ	PINC2	= 2	; 
.equ	PINC3	= 3	; 
.equ	PINC4	= 4	; 
.equ	PINC5	= 5	; 
.equ	PINC6	= 6	; 
.equ	PINC7	= 7	; 


; ***** PORTD ************************
; PUED - Pull-up Enable Control Register
.equ	PUED0	= 0	; 
.equ	PUED1	= 1	; 
.equ	PUED2	= 2	; 
.equ	PUED3	= 3	; 

; PORTD - Port D Data Register
.equ	PORTD0	= 0	; 
.equ	PD0	= 0	; For compatibility
.equ	PORTD1	= 1	; 
.equ	PD1	= 1	; For compatibility
.equ	PORTD2	= 2	; 
.equ	PD2	= 2	; For compatibility
.equ	PORTD3	= 3	; 
.equ	PD3	= 3	; For compatibility

; DDRD - Data Direction Register, Port D
.equ	DDD0	= 0	; 
.equ	DDD1	= 1	; 
.equ	DDD2	= 2	; 
.equ	DDD3	= 3	; 

; PIND - Port D Input Pins
.equ	PIND0	= 0	; 
.equ	PIND1	= 1	; 
.equ	PIND2	= 2	; 
.equ	PIND3	= 3	; 


; ***** CPU **************************
; SREG - Status Register
.equ	SREG_C	= 0	; Carry Flag
.equ	SREG_Z	= 1	; Zero Flag
.equ	SREG_N	= 2	; Negative Flag
.equ	SREG_V	= 3	; Two's Complement Overflow Flag
.equ	SREG_S	= 4	; Sign Bit
.equ	SREG_H	= 5	; Half Carry Flag
.equ	SREG_T	= 6	; Bit Copy Storage
.equ	SREG_I	= 7	; Global Interrupt Enable

; MCUCR - MCU Control Register
.equ	IVSEL	= 1	; Interrupt Vector Select

; MCUSR - MCU Status Register
.equ	PORF	= 0	; Power-on reset flag
.equ	EXTRF	= 1	; External Reset Flag
.equ	BORF	= 2	; Brown-out Reset Flag
.equ	WDRF	= 3	; Watchdog Reset Flag

; OSCCAL0 - Oscillator Calibration Value
.equ	CAL00	= 0	; Oscillator Calibration Value Bit0
.equ	CAL01	= 1	; Oscillator Calibration Value Bit1
.equ	CAL02	= 2	; Oscillator Calibration Value Bit2
.equ	CAL03	= 3	; Oscillator Calibration Value Bit3
.equ	CAL04	= 4	; Oscillator Calibration Value Bit4
.equ	CAL05	= 5	; Oscillator Calibration Value Bit5
.equ	CAL06	= 6	; Oscillator Calibration Value Bit6
.equ	CAL07	= 7	; Oscillator Calibration Value Bit7

; OSCCAL1 - 
.equ	CAL10	= 0	; 
.equ	CAL11	= 1	; 

; OSCTCAL0A - 
.equ	TCAL0A0	= 0	; 
.equ	TCAL0A1	= 1	; 
.equ	TCAL0A2	= 2	; 
.equ	TCAL0A3	= 3	; 
.equ	TCAL0A4	= 4	; 
.equ	TCAL0A5	= 5	; 
.equ	TCAL0A6	= 6	; 
.equ	TCAL0A7	= 7	; 

; OSCTCAL0B - 
.equ	TCAL0B0	= 0	; 
.equ	TCAL0B1	= 1	; 
.equ	TCAL0B2	= 2	; 
.equ	TCAL0B3	= 3	; 
.equ	TCAL0B4	= 4	; 
.equ	TCAL0B5	= 5	; 
.equ	TCAL0B6	= 6	; 
.equ	TCAL0B7	= 7	; 

; GPIOR2 - General Purpose I/O Register 2
.equ	GPIOR20	= 0	; 
.equ	GPIOR21	= 1	; 
.equ	GPIOR22	= 2	; 
.equ	GPIOR23	= 3	; 
.equ	GPIOR24	= 4	; 
.equ	GPIOR25	= 5	; 
.equ	GPIOR26	= 6	; 
.equ	GPIOR27	= 7	; 

; GPIOR1 - General Purpose I/O Register 1
.equ	GPIOR10	= 0	; 
.equ	GPIOR11	= 1	; 
.equ	GPIOR12	= 2	; 
.equ	GPIOR13	= 3	; 
.equ	GPIOR14	= 4	; 
.equ	GPIOR15	= 5	; 
.equ	GPIOR16	= 6	; 
.equ	GPIOR17	= 7	; 

; GPIOR0 - General Purpose I/O Register 0
.equ	GPIOR00	= 0	; 
.equ	GPIOR01	= 1	; 
.equ	GPIOR02	= 2	; 
.equ	GPIOR03	= 3	; 
.equ	GPIOR04	= 4	; 
.equ	GPIOR05	= 5	; 
.equ	GPIOR06	= 6	; 
.equ	GPIOR07	= 7	; 

; PRR - Power Reduction Register
.equ	PRADC	= 0	; Power Reduction ADC
.equ	PRUSART0	= 1	; Power Reduction USART 0
.equ	PRSPI	= 2	; Power Reduction SPI
.equ	PRTIM1	= 3	; Power Reduction Timer/Counter1
.equ	PRTIM0	= 5	; Power Reduction Timer/Counter0
.equ	PRTWI	= 7	; Power Reduction TWI

; CLKPR - Clock Prescale Register
.equ	CLKPS0	= 0	; Clock Prescaler Select Bit 0
.equ	CLKPS1	= 1	; Clock Prescaler Select Bit 1
.equ	CLKPS2	= 2	; Clock Prescaler Select Bit 2
.equ	CLKPS3	= 3	; Clock Prescaler Select Bit 3

; SMCR - Sleep Mode Control Register
.equ	SE	= 0	; Sleep Enable
.equ	SM0	= 1	; Sleep Mode Select Bit 0
.equ	SM1	= 2	; Sleep Mode Select Bit 1

; CCP - Configuration Change Protection
.equ	CCP0	= 0	; Configuration Change Protection bit 0
.equ	CCP1	= 1	; Configuration Change Protection bit 1
.equ	CCP2	= 2	; Configuration Change Protection bit 2
.equ	CCP3	= 3	; Configuration Change Protection bit 3
.equ	CCP4	= 4	; Configuration Change Protection bit 4
.equ	CCP5	= 5	; Configuration Change Protection bit 5
.equ	CCP6	= 6	; Configuration Change Protection bit 6
.equ	CCP7	= 7	; Configuration Change Protection bit 7

; SPMCSR - Store Program Memory Control and Status Register
.equ	SPMEN	= 0	; Store Program Memory Enable
.equ	PGERS	= 1	; Page Erase
.equ	PGWRT	= 2	; Page Write
.equ	RWFLB	= 3	; Read/Write Fuse and Lock Bits
.equ	RWWSRE	= 4	; Read-While-Write section read enable
.equ	RSIG	= 5	; Read Device Signature Imprint Table
.equ	RWWSB	= 6	; Read-While-Write Section Busy
.equ	SPMIE	= 7	; SPM Interrupt Enable


; ***** TIMER_COUNTER_0 **************
; TIMSK0 - Timer/Counter0 Interrupt Mask Register
.equ	TOIE0	= 0	; Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0A	= 1	; Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	OCIE0B	= 2	; Timer/Counter0 Output Compare Match B Interrupt Enable

; TIFR0 - Timer/Counter0 Interrupt Flag register
.equ	TOV0	= 0	; Timer/Counter0 Overflow Flag
.equ	OCF0A	= 1	; Timer/Counter0 Output Compare Flag 0A
.equ	OCF0B	= 2	; Timer/Counter0 Output Compare Flag 0B

; TCCR0A - Timer/Counter  Control Register A
.equ	WGM00	= 0	; Waveform Generation Mode
.equ	WGM01	= 1	; Waveform Generation Mode
.equ	COM0B0	= 4	; Compare Output Mode, Fast PWm
.equ	COM0B1	= 5	; Compare Output Mode, Fast PWm
.equ	COM0A0	= 6	; Compare Output Mode, Phase Correct PWM Mode
.equ	COM0A1	= 7	; Compare Output Mode, Phase Correct PWM Mode

; TCCR0B - Timer/Counter Control Register B
.equ	CS00	= 0	; Clock Select
.equ	CS01	= 1	; Clock Select
.equ	CS02	= 2	; Clock Select
.equ	WGM02	= 3	; 
.equ	FOC0B	= 6	; Force Output Compare B
.equ	FOC0A	= 7	; Force Output Compare A

; TCNT0 - Timer/Counter0
.equ	TCNT0_0	= 0	; 
.equ	TCNT0_1	= 1	; 
.equ	TCNT0_2	= 2	; 
.equ	TCNT0_3	= 3	; 
.equ	TCNT0_4	= 4	; 
.equ	TCNT0_5	= 5	; 
.equ	TCNT0_6	= 6	; 
.equ	TCNT0_7	= 7	; 

; OCR0A - Timer/Counter0 Output Compare Register
.equ	OCR0A_0	= 0	; 
.equ	OCR0A_1	= 1	; 
.equ	OCR0A_2	= 2	; 
.equ	OCR0A_3	= 3	; 
.equ	OCR0A_4	= 4	; 
.equ	OCR0A_5	= 5	; 
.equ	OCR0A_6	= 6	; 
.equ	OCR0A_7	= 7	; 

; OCR0B - Timer/Counter0 Output Compare Register
.equ	OCR0B_0	= 0	; 
.equ	OCR0B_1	= 1	; 
.equ	OCR0B_2	= 2	; 
.equ	OCR0B_3	= 3	; 
.equ	OCR0B_4	= 4	; 
.equ	OCR0B_5	= 5	; 
.equ	OCR0B_6	= 6	; 
.equ	OCR0B_7	= 7	; 

; GTCCR - General Timer/Counter Control Register
.equ	PSRSYNC	= 0	; Prescaler Reset Timer/Counter1 and Timer/Counter0
.equ	PSR10	= PSRSYNC	; For compatibility
.equ	TSM	= 7	; Timer/Counter Synchronization Mode


; ***** TIMER_COUNTER_1 **************
; TIMSK1 - Timer/Counter Interrupt Mask Register
.equ	TOIE1	= 0	; Timer/Counter1 Overflow Interrupt Enable
.equ	OCIE1A	= 1	; Timer/Counter1 Output CompareA Match Interrupt Enable
.equ	OCIE1B	= 2	; Timer/Counter1 Output CompareB Match Interrupt Enable
.equ	ICIE1	= 5	; Timer/Counter1 Input Capture Interrupt Enable

; TIFR1 - Timer/Counter Interrupt Flag register
.equ	TOV1	= 0	; Timer/Counter1 Overflow Flag
.equ	OCF1A	= 1	; Output Compare Flag 1A
.equ	OCF1B	= 2	; Output Compare Flag 1B
.equ	ICF1	= 5	; Input Capture Flag 1

; TCCR1A - Timer/Counter1 Control Register A
.equ	WGM10	= 0	; Waveform Generation Mode
.equ	WGM11	= 1	; Waveform Generation Mode
.equ	COM1B0	= 4	; Compare Output Mode 1B, bit 0
.equ	COM1B1	= 5	; Compare Output Mode 1B, bit 1
.equ	COM1A0	= 6	; Comparet Ouput Mode 1A, bit 0
.equ	COM1A1	= 7	; Compare Output Mode 1A, bit 1

; TCCR1B - Timer/Counter1 Control Register B
.equ	CS10	= 0	; Prescaler source of Timer/Counter 1
.equ	CS11	= 1	; Prescaler source of Timer/Counter 1
.equ	CS12	= 2	; Prescaler source of Timer/Counter 1
.equ	WGM12	= 3	; Waveform Generation Mode
.equ	WGM13	= 4	; Waveform Generation Mode
.equ	ICES1	= 6	; Input Capture 1 Edge Select
.equ	ICNC1	= 7	; Input Capture 1 Noise Canceler

; TCCR1C - Timer/Counter1 Control Register C
.equ	FOC1B	= 6	; 
.equ	FOC1A	= 7	; 

; GTCCR - General Timer/Counter Control Register
;.equ	PSRSYNC	= 0	; Prescaler Reset Timer/Counter1 and Timer/Counter0
;.equ	TSM	= 7	; Timer/Counter Synchronization Mode


; ***** TOCPM ************************
; TOCPMSA1 - Timer Output Compare Pin Mux Selection 1
.equ	TOCC4S0	= 0	; Timer Output Compare Channel 4 Selection Bit 0
.equ	TOCC4S1	= 1	; Timer Output Compare Channel 4 Selection Bit 1
.equ	TOCC5S0	= 2	; Timer Output Compare Channel 5 Selection Bit 0
.equ	TOCC5S1	= 3	; Timer Output Compare Channel 5 Selection Bit 1
.equ	TOCC6S0	= 4	; Timer Output Compare Channel 6 Selection Bit 0
.equ	TOCC6S1	= 5	; Timer Output Compare Channel 6 Selection Bit 1
.equ	TOCC7S0	= 6	; Timer Output Compare Channel 7 Selection Bit 0
.equ	TOCC7S1	= 7	; Timer Output Compare Channel 7 Selection Bit 1

; TOCPMSA0 - Timer Output Compare Pin Mux Selection 0
.equ	TOCC0S0	= 0	; Timer Output Compare Channel 0 Selection Bit 0
.equ	TOCC0S1	= 1	; Timer Output Compare Channel 0 Selection Bit 1
.equ	TOCC1S0	= 2	; Timer Output Compare Channel 1 Selection Bit 0
.equ	TOCC1S1	= 3	; Timer Output Compare Channel 1 Selection Bit 1
.equ	TOCC2S0	= 4	; Timer Output Compare Channel 2 Selection Bit 0
.equ	TOCC2S1	= 5	; Timer Output Compare Channel 2 Selection Bit 1
.equ	TOCC3S0	= 6	; Timer Output Compare Channel 3 Selection Bit 0
.equ	TOCC3S1	= 7	; Timer Output Compare Channel 3 Selection Bit 1

; TOCPMCOE - Timer Output Compare Pin Mux Channel Output Enable
.equ	TOCC0OE	= 0	; Timer Output Compare Channel 0 Output Enable
.equ	TOCC1OE	= 1	; Timer Output Compare Channel 1 Output Enable
.equ	TOCC2OE	= 2	; Timer Output Compare Channel 2 Output Enable
.equ	TOCC3OE	= 3	; Timer Output Compare Channel 3 Output Enable
.equ	TOCC4OE	= 4	; Timer Output Compare Channel 4 Output Enable
.equ	TOCC5OE	= 5	; Timer Output Compare Channel 5 Output Enable
.equ	TOCC6OE	= 6	; Timer Output Compare Channel 6 Output Enable
.equ	TOCC7OE	= 7	; Timer Output Compare Channel 7 Output Enable


; ***** AD_CONVERTER *****************
; ADMUXA - The ADC multiplexer Selection Register A
.equ	MUX0	= 0	; Analog Channel Selection Bits 4:0
.equ	MUX1	= 1	; Analog Channel Selection Bits 4:0
.equ	MUX2	= 2	; Analog Channel Selection Bits 4:0
.equ	MUX3	= 3	; Analog Channel Selection Bits 4:0
.equ	MUX4	= 4	; Analog Channel Selection Bits 4:0

; ADMUXB - The ADC multiplexer Selection Register B
.equ	MUX5	= 0	; Analog Channel Selection Bit 5
.equ	REFS	= 5	; Reference Selection Bit

; ADCSRA - The ADC Control and Status register
.equ	ADPS0	= 0	; ADC Prescaler Select Bits
.equ	ADPS1	= 1	; ADC Prescaler Select Bits
.equ	ADPS2	= 2	; ADC Prescaler Select Bits
.equ	ADIE	= 3	; ADC Interrupt Enable
.equ	ADIF	= 4	; ADC Interrupt Flag
.equ	ADATE	= 5	; ADC Auto Trigger Enable
.equ	ADSC	= 6	; ADC Start Conversion
.equ	ADEN	= 7	; ADC Enable

; ADCH - ADC Data Register High Byte
.equ	ADCH0	= 0	; ADC Data Register High Byte Bit 0
.equ	ADCH1	= 1	; ADC Data Register High Byte Bit 1
.equ	ADCH2	= 2	; ADC Data Register High Byte Bit 2
.equ	ADCH3	= 3	; ADC Data Register High Byte Bit 3
.equ	ADCH4	= 4	; ADC Data Register High Byte Bit 4
.equ	ADCH5	= 5	; ADC Data Register High Byte Bit 5
.equ	ADCH6	= 6	; ADC Data Register High Byte Bit 6
.equ	ADCH7	= 7	; ADC Data Register High Byte Bit 7

; ADCL - ADC Data Register Low Byte
.equ	ADCL0	= 0	; ADC Data Register Low Byte Bit 0
.equ	ADCL1	= 1	; ADC Data Register Low Byte Bit 1
.equ	ADCL2	= 2	; ADC Data Register Low Byte Bit 2
.equ	ADCL3	= 3	; ADC Data Register Low Byte Bit 3
.equ	ADCL4	= 4	; ADC Data Register Low Byte Bit 4
.equ	ADCL5	= 5	; ADC Data Register Low Byte Bit 5
.equ	ADCL6	= 6	; ADC Data Register Low Byte Bit 6
.equ	ADCL7	= 7	; ADC Data Register Low Byte Bit 7

; ADCSRB - ADC Control and Status Register B
.equ	ADTS0	= 0	; ADC Auto Trigger Source 0
.equ	ADTS1	= 1	; ADC Auto Trigger Source 1
.equ	ADTS2	= 2	; ADC Auto Trigger Source 2
.equ	ADLAR	= 3	; 

; DIDR3 - Digital Input Disable Register 2
.equ	ADC24D	= 0	; ADC24 Digital input Disable
.equ	ADC25D	= 1	; ADC25 Digital input Disable
.equ	ADC26D	= 2	; ADC26 Digital input Disable
.equ	ADC27D	= 3	; ADC27 Digital input Disable

; DIDR2 - Digital Input Disable Register 2
.equ	ADC16D	= 0	; ADC16 Digital input Disable
.equ	ADC17D	= 1	; ADC17 Digital input Disable
.equ	ADC18D	= 2	; ADC18 Digital input Disable
.equ	ADC19D	= 3	; ADC19 Digital input Disable
.equ	ADC20D	= 4	; ADC20 Digital input Disable
.equ	ADC21D	= 5	; ADC21 Digital input Disable
.equ	ADC22D	= 6	; ADC22 Digital input Disable
.equ	ADC23D	= 7	; ADC23 Digital input Disable

; DIDR1 - Digital Input Disable Register 1
.equ	ADC8D	= 0	; ADC8 Digital input Disable
.equ	ADC9D	= 1	; ADC9 Digital input Disable
.equ	ADC10D	= 2	; ADC10 Digital input Disable
.equ	ADC11D	= 3	; ADC11 Digital input Disable
.equ	ADC12D	= 4	; ADC12 Digital input Disable
.equ	ADC13D	= 5	; ADC13 Digital input Disable
.equ	ADC14D	= 6	; ADC14 Digital input Disable
.equ	ADC15D	= 7	; ADC15 Digital input Disable

; DIDR0 - Digital Input Disable Register 0
.equ	ADC0D	= 0	; ADC0 Digital input Disable
.equ	ADC1D	= 1	; ADC1 Digital input Disable
.equ	ADC2D	= 2	; ADC2 Digital input Disable
.equ	ADC3D	= 3	; ADC3 Digital input Disable
.equ	ADC4D	= 4	; ADC4 Digital input Disable
.equ	ADC5D	= 5	; ADC5 Digital input Disable
.equ	ADC6D	= 6	; ADC6 Digital input Disable
.equ	ADC7D	= 7	; ADC7 Digital input Disable


; ***** ANALOG_COMPARATOR ************
; ACSRA - Analog Comparator Control And Status Register A
.equ	ACIS0	= 0	; Analog Comparator Interrupt Mode Select bit 0
.equ	ACIS1	= 1	; Analog Comparator Interrupt Mode Select bit 1
.equ	ACIC	= 2	; Analog Comparator Input Capture Enable
.equ	ACIE	= 3	; Analog Comparator Interrupt Enable
.equ	ACI	= 4	; Analog Comparator Interrupt Flag
.equ	ACO	= 5	; Analog Compare Output
.equ	ACPMUX2	= 6	; Analog Comparator Positive Input Multiplexer Bit 2
.equ	ACD	= 7	; Analog Comparator Disable

; ACSRB - Analog Comparator Control And Status Register B
.equ	ACPMUX0	= 0	; Analog Comparator Positive Input Multiplexer Bits 1:0
.equ	ACPMUX1	= 1	; Analog Comparator Positive Input Multiplexer Bits 1:0
.equ	ACNMUX0	= 2	; Analog Comparator Negative Input Multiplexer
.equ	ACNMUX1	= 3	; Analog Comparator Negative Input Multiplexer
.equ	HLEV	= 6	; Hysteresis Level
.equ	HSEL	= 7	; Hysteresis Select


; ***** EXTERNAL_INTERRUPT ***********
; EICRA - External Interrupt Control Register
.equ	ISC00	= 0	; External Interrupt Sense Control 0 Bit 0
.equ	ISC01	= 1	; External Interrupt Sense Control 0 Bit 1
.equ	ISC10	= 2	; External Interrupt Sense Control 1 Bit 0
.equ	ISC11	= 3	; External Interrupt Sense Control 1 Bit 1

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0	; External Interrupt Request Enable 0
.equ	INT1	= 1	; External Interrupt Request Enable 1

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0	; External Interrupt Flag 0
.equ	INTF1	= 1	; External Interrupt Flag 1

; PCICR - Pin Change Interrupt Control Register
.equ	PCIE0	= 0	; Pin Change Interrupt Enable 0
.equ	PCIE1	= 1	; Pin Change Interrupt Enable 1
.equ	PCIE2	= 2	; Pin Change Interrupt Enable 2
.equ	PCIE3	= 3	; Pin Change Interrupt Enable 3

; PCMSK3 - Pin Change Mask Register 3
.equ	PCINT24	= 0	; Pin Change Enable Mask 24
.equ	PCINT25	= 1	; Pin Change Enable Mask 25
.equ	PCINT26	= 2	; Pin Change Enable Mask 26
.equ	PCINT27	= 3	; Pin Change Enable Mask 27

; PCMSK2 - Pin Change Mask Register 2
.equ	PCINT16	= 0	; Pin Change Enable Mask 16
.equ	PCINT17	= 1	; Pin Change Enable Mask 17
.equ	PCINT18	= 2	; Pin Change Enable Mask 18
.equ	PCINT19	= 3	; Pin Change Enable Mask 19
.equ	PCINT20	= 4	; Pin Change Enable Mask 20
.equ	PCINT21	= 5	; Pin Change Enable Mask 21
.equ	PCINT22	= 6	; Pin Change Enable Mask 22
.equ	PCINT23	= 7	; Pin Change Enable Mask 23

; PCMSK1 - Pin Change Mask Register 1
.equ	PCINT8	= 0	; Pin Change Enable Mask 8
.equ	PCINT9	= 1	; Pin Change Enable Mask 9
.equ	PCINT10	= 2	; Pin Change Enable Mask 10
.equ	PCINT11	= 3	; Pin Change Enable Mask 11
.equ	PCINT12	= 4	; Pin Change Enable Mask 12
.equ	PCINT13	= 5	; Pin Change Enable Mask 13
.equ	PCINT14	= 6	; Pin Change Enable Mask 14
.equ	PCINT15	= 7	; Pin Change Enable Mask 15

; PCMSK0 - Pin Change Mask Register 0
.equ	PCINT0	= 0	; Pin Change Enable Mask 0
.equ	PCINT1	= 1	; Pin Change Enable Mask 1
.equ	PCINT2	= 2	; Pin Change Enable Mask 2
.equ	PCINT3	= 3	; Pin Change Enable Mask 3
.equ	PCINT4	= 4	; Pin Change Enable Mask 4
.equ	PCINT5	= 5	; Pin Change Enable Mask 5
.equ	PCINT6	= 6	; Pin Change Enable Mask 6
.equ	PCINT7	= 7	; Pin Change Enable Mask 7

; PCIFR - Pin Change Interrupt Flag Register
.equ	PCIF0	= 0	; Pin Change Interrupt Flag 0
.equ	PCIF1	= 1	; Pin Change Interrupt Flag 1
.equ	PCIF2	= 2	; Pin Change Interrupt Flag 2
.equ	PCIF3	= 3	; Pin Change Interrupt Flag 3


; ***** WATCHDOG *********************
; WDTCSR - Watchdog Timer Control and Status Register
.equ	WDP0	= 0	; Watch Dog Timer Prescaler bit 0
.equ	WDP1	= 1	; Watch Dog Timer Prescaler bit 1
.equ	WDP2	= 2	; Watch Dog Timer Prescaler bit 2
.equ	WDE	= 3	; Watch Dog Enable
.equ	WDP3	= 5	; Watchdog Timer Prescaler Bit 3
.equ	WDIE	= 6	; Watchdog Timer Interrupt Enable
.equ	WDIF	= 7	; Watchdog Timer Interrupt Flag


; ***** EEPROM ***********************
; EEAR - EEPROM Read/Write Access
.equ	EEARL	= EEAR	; For compatibility
.equ	EEAR0	= 0	; EEPROM Read/Write Access bit 0
.equ	EEAR1	= 1	; EEPROM Read/Write Access bit 1
.equ	EEAR2	= 2	; EEPROM Read/Write Access bit 2
.equ	EEAR3	= 3	; EEPROM Read/Write Access bit 3
.equ	EEAR4	= 4	; EEPROM Read/Write Access bit 4
.equ	EEAR5	= 5	; EEPROM Read/Write Access bit 5
.equ	EEAR6	= 6	; EEPROM Read/Write Access bit 6
.equ	EEAR7	= 7	; EEPROM Read/Write Access bit 7

; EEDR - EEPROM Data Register
.equ	EEDR0	= 0	; EEPROM Data Register bit 0
.equ	EEDR1	= 1	; EEPROM Data Register bit 1
.equ	EEDR2	= 2	; EEPROM Data Register bit 2
.equ	EEDR3	= 3	; EEPROM Data Register bit 3
.equ	EEDR4	= 4	; EEPROM Data Register bit 4
.equ	EEDR5	= 5	; EEPROM Data Register bit 5
.equ	EEDR6	= 6	; EEPROM Data Register bit 6
.equ	EEDR7	= 7	; EEPROM Data Register bit 7

; EECR - EEPROM Control Register
.equ	EERE	= 0	; EEPROM Read Enable
.equ	EEPE	= 1	; EEPROM Write Enable
.equ	EEWE	= EEPE	; For compatibility
.equ	EEMPE	= 2	; EEPROM Master Write Enable
.equ	EEMWE	= EEMPE	; For compatibility
.equ	EERIE	= 3	; EEProm Ready Interrupt Enable
.equ	EEPM0	= 4	; EEPROM Programming Mode Bit 0
.equ	EEPM1	= 5	; EEPROM Programming Mode Bit 1


; ***** TWI **************************
; TWSCRA - TWI Slave Control Register A
.equ	TWSME	= 0	; TWI Smart Mode Enable
.equ	TWPME	= 1	; TWI Promiscuous Mode Enable
.equ	TWSIE	= 2	; TWI Stop Interrupt Enable
.equ	TWEN	= 3	; Two-Wire Interface Enable
.equ	TWASIE	= 4	; TWI Address/Stop Interrupt Enable
.equ	TWDIE	= 5	; TWI Data Interrupt Enable
.equ	TWSHE	= 7	; TWI SDA Hold Time Enable

; TWSCRB - TWI Slave Control Register B
.equ	TWCMD0	= 0	; 
.equ	TWCMD1	= 1	; 
.equ	TWAA	= 2	; TWI Acknowledge Action
.equ	TWHNM	= 3	; TWI High Noise Mode

; TWSSRA - TWI Slave Status Register A
.equ	TWAS	= 0	; TWI Address or Stop
.equ	TWDIR	= 1	; TWI Read/Write Direction
.equ	TWBE	= 2	; TWI Bus Error
.equ	TWC	= 3	; TWI Collision
.equ	TWRA	= 4	; TWI Receive Acknowledge
.equ	TWCH	= 5	; TWI Clock Hold
.equ	TWASIF	= 6	; TWI Address/Stop Interrupt Flag
.equ	TWDIF	= 7	; TWI Data Interrupt Flag.

; TWSA - TWI Slave Address Register
.equ	TWSA0	= 0	; TWI slave address bit
.equ	TWSA1	= 1	; TWI slave address bit
.equ	TWSA2	= 2	; TWI slave address bit
.equ	TWSA3	= 3	; TWI slave address bit
.equ	TWSA4	= 4	; TWI slave address bit
.equ	TWSA5	= 5	; TWI slave address bit
.equ	TWSA6	= 6	; TWI slave address bit
.equ	TWSA7	= 7	; TWI slave address bit

; TWSD - TWI Slave Data Register
.equ	TWSD0	= 0	; TWI slave data bit
.equ	TWSD1	= 1	; TWI slave data bit
.equ	TWSD2	= 2	; TWI slave data bit
.equ	TWSD3	= 3	; TWI slave data bit
.equ	TWSD4	= 4	; TWI slave data bit
.equ	TWSD5	= 5	; TWI slave data bit
.equ	TWSD6	= 6	; TWI slave data bit
.equ	TWSD7	= 7	; TWI slave data bit

; TWSAM - TWI Slave Address Mask Register
.equ	TWAE	= 0	; TWI Address Enable
.equ	TWSAM1	= 1	; TWI Address Mask Bit 1
.equ	TWSAM2	= 2	; TWI Address Mask Bit 2
.equ	TWSAM3	= 3	; TWI Address Mask Bit 3
.equ	TWSAM4	= 4	; TWI Address Mask Bit 4
.equ	TWSAM5	= 5	; TWI Address Mask Bit 5
.equ	TWSAM6	= 6	; TWI Address Mask Bit 6
.equ	TWSAM7	= 7	; TWI Address Mask Bit 7


; ***** USART ************************
; UDR - USART I/O Data Register
.equ	UDR_0	= 0	; USART I/O Data Register bit 0
.equ	UDR_1	= 1	; USART I/O Data Register bit 1
.equ	UDR_2	= 2	; USART I/O Data Register bit 2
.equ	UDR_3	= 3	; USART I/O Data Register bit 3
.equ	UDR_4	= 4	; USART I/O Data Register bit 4
.equ	UDR_5	= 5	; USART I/O Data Register bit 5
.equ	UDR_6	= 6	; USART I/O Data Register bit 6
.equ	UDR_7	= 7	; USART I/O Data Register bit 7

; UCSRA - USART Control and Status Register A
.equ	MPCM	= 0	; Multi-processor Communication Mode
.equ	U2X	= 1	; Double the USART transmission speed
.equ	UPE	= 2	; Parity Error
.equ	DOR	= 3	; Data overRun
.equ	FE	= 4	; Framing Error
.equ	UDRE	= 5	; USART Data Register Empty
.equ	TXC	= 6	; USART Transmitt Complete
.equ	RXC	= 7	; USART Receive Complete

; UCSRB - USART Control and Status Register B
.equ	TXB8	= 0	; Transmit Data Bit 8
.equ	RXB8	= 1	; Receive Data Bit 8
.equ	UCSZ2	= 2	; Character Size
.equ	TXEN	= 3	; Transmitter Enable
.equ	RXEN	= 4	; Receiver Enable
.equ	UDRIE	= 5	; USART Data register Empty Interrupt Enable
.equ	TXCIE	= 6	; TX Complete Interrupt Enable
.equ	RXCIE	= 7	; RX Complete Interrupt Enable

; UCSRC - USART Control and Status Register C
.equ	UCPOL	= 0	; Clock Polarity
.equ	UCSZ0	= 1	; Character Size
.equ	UCPHA0	= UCSZ0	; For compatibility
.equ	UCSZ1	= 2	; Character Size
.equ	UDORD0	= UCSZ1	; For compatibility
.equ	USBS	= 3	; Stop Bit Select
.equ	UPM0	= 4	; Parity Mode Bit 0
.equ	UPM1	= 5	; Parity Mode Bit 1
.equ	UMSEL0	= 6	; USART Mode Select
;.equ	UMSEL0	= UMSEL0	; For compatibility
.equ	UMSEL1	= 7	; USART Mode Select
;.equ	UMSEL1	= UMSEL1	; For compatibility

; UCSRD - USART Control and Status Register D
.equ	SFDE	= 5	; USART RX Start Frame Detection Enable
.equ	RXS	= 6	; USART RX Start Flag
;.equ	RXS	= RXS	; For compatibility
.equ	RXSIE	= 7	; USART RX Start Interrupt Enable
;.equ	RXSIE	= RXSIE	; For compatibility

; UBRRL - USART Baud Rate Register Low Byte
.equ	_UBRR0	= 0	; USART Baud Rate Register bit 0
.equ	_UBRR1	= 1	; USART Baud Rate Register bit 1
.equ	UBRR2	= 2	; USART Baud Rate Register bit 2
.equ	UBRR3	= 3	; USART Baud Rate Register bit 3
.equ	UBRR4	= 4	; USART Baud Rate Register bit 4
.equ	UBRR5	= 5	; USART Baud Rate Register bit 5
.equ	UBRR6	= 6	; USART Baud Rate Register bit 6
.equ	UBRR7	= 7	; USART Baud Rate Register bit 7



; ***** LOCKSBITS ********************************************************
.equ	LB1	= 0	; Lock bit
.equ	LB2	= 1	; Lock bit
.equ	BLB01	= 2	; Boot Lock bit
.equ	BLB02	= 3	; Boot Lock bit
.equ	BLB11	= 4	; Boot lock bit
.equ	BLB12	= 5	; Boot lock bit


; ***** FUSES ************************************************************
; LOW fuse bits
.equ	CKSEL0	= 0	; Select Clock Source
.equ	CKSEL1	= 1	; Select Clock Source
.equ	SUT0	= 4	; Select start-up time
.equ	SUT1	= 5	; Select start-up time
.equ	CKOUT	= 6	; Clock output
.equ	CKDIV8	= 7	; Divide clock by 8

; HIGH fuse bits
.equ	BODLEVEL0	= 0	; Brown-out Detector trigger level
.equ	BODLEVEL1	= 1	; Brown-out Detector trigger level
.equ	BODLEVEL2	= 2	; Brown-out Detector trigger level
.equ	EESAVE	= 3	; EEPROM memory is preserved through chip erase
.equ	WDTON	= 4	; Watchdog Timer Always On
.equ	SPIEN	= 5	; Enable Serial programming and Data Downloading
.equ	DWEN	= 6	; debugWIRE Enable
.equ	RSTDISBL	= 7	; External reset disable

; EXTENDED fuse bits
.equ	BOOTRST	= 0	; Select reset vector
.equ	BOOTSZ0	= 1	; Select boot size
.equ	BOOTSZ1	= 2	; Select boot size
.equ	BODACT0	= 4	; Brown-out detector mode
.equ	BODACT1	= 5	; Brown-out detector mode
.equ	BODPD0	= 6	; Brown-out detector mode
.equ	BODPD1	= 7	; Brown-out detector mode



; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30



; ***** DATA MEMORY DECLARATIONS *****************************************
.equ	FLASHEND	= 0x0fff	; Note: Word address
.equ	IOEND	= 0x00ff
.equ	SRAM_START	= 0x0100
.equ	SRAM_SIZE	= 512
.equ	RAMEND	= 0x02ff
.equ	XRAMEND	= 0x0000
.equ	E2END	= 0x00ff
.equ	EEPROMEND	= 0x00ff
.equ	EEADRBITS	= 8
#pragma AVRPART MEMORY PROG_FLASH 8192
#pragma AVRPART MEMORY EEPROM 256
#pragma AVRPART MEMORY INT_SRAM SIZE 512
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100



; ***** BOOTLOADER DECLARATIONS ******************************************
.equ	NRWW_START_ADDR	= 0xc00
.equ	NRWW_STOP_ADDR	= 0xfff
.equ	RWW_START_ADDR	= 0x0
.equ	RWW_STOP_ADDR	= 0xbff
.equ	PAGESIZE	= 32
.equ	FIRSTBOOTSTART	= 0xf80
.equ	SECONDBOOTSTART	= 0xf00
.equ	THIRDBOOTSTART	= 0xe00
.equ	FOURTHBOOTSTART	= 0xc00
.equ	SMALLBOOTSTART	= FIRSTBOOTSTART
.equ	LARGEBOOTSTART	= FOURTHBOOTSTART



; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	= 0x0001	; External Interrupt Request 0
.equ	INT1addr	= 0x0002	; External Interrupt Request 1
.equ	PCI0addr	= 0x0003	; Pin Change Interrupt Request 0
.equ	PCI1addr	= 0x0004	; Pin Change Interrupt Request 1
.equ	PCI2addr	= 0x0005	; Pin Change Interrupt Request 2
.equ	PCI3addr	= 0x0006	; Pin Change Interrupt Request 3
.equ	WDTaddr	= 0x0007	; Watchdog Time-out Interrupt
.equ	ICP1addr	= 0x0008	; Timer/Counter1 Capture Event
.equ	OC1Aaddr	= 0x0009	; Timer/Counter1 Compare Match A
.equ	OC1Baddr	= 0x000a	; Timer/Counter1 Compare Match B
.equ	OVF1addr	= 0x000b	; Timer/Counter1 Overflow
.equ	OC0Aaddr	= 0x000c	; Timer/Counter0 Compare Match A
.equ	OC0Baddr	= 0x000d	; Timer/Counter0 Compare Match B
.equ	OVF0addr	= 0x000e	; Timer/Counter0 Overflow
.equ	SPIaddr	= 0x000f	; SPI Serial Transfer Complete
.equ	USART__STARTaddr	= 0x0010	; USART, Start
.equ	URXCaddr	= 0x0011	; USART Rx Complete
.equ	UDREaddr	= 0x0012	; USART, Data Register Empty
.equ	UTXCaddr	= 0x0013	; USART Tx Complete
.equ	ADCCaddr	= 0x0014	; ADC Conversion Complete
.equ	ERDYaddr	= 0x0015	; EEPROM Ready
.equ	ACIaddr	= 0x0016	; Analog Comparator
.equ	TWIaddr	= 0x0017	; Two-wire Serial Interface
.equ	SPMRaddr	= 0x0018	; Store Program Memory Read
.equ	QTRIPaddr	= 0x0019	; Touch Sensing

.equ	INT_VECTORS_SIZE	= 26	; size in words

#endif  /* _TN80DEF_INC_ */

; ***** END OF FILE ******************************************************
