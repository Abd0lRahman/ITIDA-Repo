/*
 * External_INT_Reg.h
 *
 * Created: 2/18/2023 11:45:38 AM
 *  Author: dell
 */ 


#ifndef EXTERNAL_INT_REG_H_
#define EXTERNAL_INT_REG_H_

#define SREG (*(volatile u8*)(0x5F))
#define GICR (*(volatile u8*)(0x5B))
#define GIFR (*(volatile u8*)(0x5A))
#define MCUCR (*(volatile u8*)(0x55))
#define MCUCSR (*(volatile u8*)(0x54))
#define DDRB (*(volatile u8*)(0x37))
#define DDRD (*(volatile u8*)(0x31))

#endif /* EXTERNAL_INT_REG_H_ */
