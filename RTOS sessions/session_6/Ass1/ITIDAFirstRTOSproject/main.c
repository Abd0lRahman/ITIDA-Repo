#include "bit.h"
#include "type.h"
#include "interface.h"
#include <util/delay.h>
#include "timer_interface.h"
#include "rto_interface.h"
#include "gie_interface.h"
#include "lcd_interface.h"
#include "External_INT_Interface.h"

void Task_1(void);
void Task_2(void);
void Task_3(void);
void Task_4(void);
void Task_5(void);
void ISR_Func(void);

int main()
{
	DIO_u8IntialDirection();
	DIO_u8IntialValue();
	LCD_voidInitial();
	LCD_voidSendStr("Abdelrahman");
	TMR1_voidInit();
	TMR1_voidSetICR(19999);

	EXT_INT_Init();
	EXT_INT_SET_CONFIG();
	register_EX0(ISR_Func);

	RTO_u8CreateTask(0,1000,0,&Task_1,1);
	RTO_u8CreateTask(1,2000,0,&Task_2,1);
	RTO_u8CreateTask(2,5000,0,&Task_3,1);
	RTO_u8CreateTask(3,300,0,&Task_4,1);
	RTO_u8CreateTask(4,1000,0,&Task_5,1);
	RTO_voidStartSys();
	while(1);
	return 0;
}
void Task_1(void)
{
	static u8 flag = 0;
	if(flag == 0)
	{
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN0,DIO_u8_PIN_HIGH);
		flag = 1;
	}
	else
	{
		flag = 0;
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN0,DIO_u8_PIN_LOW);
	}
}
void Task_2(void)
{
	static u8 flag = 0;
	if(flag == 0)
	{
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN1,DIO_u8_PIN_HIGH);
		flag = 1;
	}
	else
	{
		flag = 0;
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN1,DIO_u8_PIN_LOW);
	}
}
void Task_3(void)
{
	static u8 flag = 0;
	if(flag == 0)
	{
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN2,DIO_u8_PIN_HIGH);
		flag = 1;
	}
	else
	{
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN2,DIO_u8_PIN_LOW);
		flag = 0;
	}
}
void Task_4(void)
{
	static u16 counter = 999;
	counter+=100;
	if(counter == 1999)
	{
		counter = 999;
	}
	TMR1_voidSetCompareMatch(counter);
}
void Task_5(void)
{
	static u8 counter = 0;
	counter++;
	LCD_voidShift(LCD_u8_RIGHT);
	if(counter == 6)
	{
		LCD_voidClear();
		LCD_voidGoToXY(LCD_u8_LINE0,0);
		LCD_voidSendStr("Abdelrahman");
		counter = 0;
	}
}
void ISR_Func(void)
{
	static u8 Resumed = 1;
	if(Resumed == 1)
	{
		SuspendTask(4);
		Resumed =0;
	}
	else
	{
		ResumeTask(4);
		Resumed =1;
	}
}
