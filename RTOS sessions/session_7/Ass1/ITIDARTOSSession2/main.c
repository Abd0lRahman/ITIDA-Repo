#include "bit.h"
#include "type.h"
#include "interface.h"
#include <util/delay.h>
#include "RTOS_STAck\FreeRTOS.h"
#include "RTOS_STAck\task.h"
#include "RTOS_STAck\queue.h"
#include "lcd_interface.h"
#include "Keypad_int.h"

void KeyPadTask(void);
void LCDTask(void);

xQueueHandle QueueName;

int main()
{
	DIO_u8IntialDirection();
	DIO_u8IntialValue();
	Keypad_Init();
	LCD_voidInitial();

	if((QueueName = xQueueCreate(5,sizeof(u8))) == NULL)
		LCD_voidSendStr("Queue is not created");
	if(xTaskCreate(LCDTask,"N2",100,NULL,2,NULL) == NULL)
		LCD_voidSendStr("LCDTask not created");
	if(xTaskCreate(KeyPadTask,"N1",100,NULL,1,NULL) == NULL)
		LCD_voidSendStr("KeyPadTask not created");

	vTaskStartScheduler();

	while(1);
	return 0;
}

void KeyPadTask(void)
{
	while(1)
	{
		u8 Var = 0;
		Var = KeypadGetPressed();
		xQueueSendToBack(QueueName,&Var,200);
		Var = 0;
		vTaskDelay(50);
	}
}
void LCDTask(void)
{
	while(1)
	{
		u8 Var = 0;
		xQueueReceive(QueueName,&Var,200);
		if(Var == 'o')
		{
			LCD_voidClear();
			LCD_voidGoToXY(0,0);
		}
		else if(Var == 0)
		{
			continue;
		}
		else
			LCD_voidSendChar(Var);
		Var = 0;
		vTaskDelay(50);
	}
}
