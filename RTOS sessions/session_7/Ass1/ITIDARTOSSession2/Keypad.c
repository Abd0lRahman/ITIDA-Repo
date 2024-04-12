/*
 * Keypad_config.h
 *
 *  Created on: Apr 11, 2024
 *      Author: Abdelrhman
 */

#include "Keypad_int.h"
#include "Keypad_config.h"
#include "interface.h"
#include "util/delay.h"

void Keypad_Init()
{
	DIO_u8SetPinDirection(KPD_PORT,DIO_u8_PIN0,DIO_u8_PIN_OUTPUT);
	DIO_u8SetPinDirection(KPD_PORT,DIO_u8_PIN1,DIO_u8_PIN_OUTPUT);
	DIO_u8SetPinDirection(KPD_PORT,DIO_u8_PIN2,DIO_u8_PIN_OUTPUT);
	DIO_u8SetPinDirection(KPD_PORT,DIO_u8_PIN3,DIO_u8_PIN_OUTPUT);
	DIO_u8SetPinDirection(KPD_PORT,DIO_u8_PIN4,DIO_u8_PIN_INPUT);
	DIO_u8SetPinDirection(KPD_PORT,DIO_u8_PIN5,DIO_u8_PIN_INPUT);
	DIO_u8SetPinDirection(KPD_PORT,DIO_u8_PIN6,DIO_u8_PIN_INPUT);
	DIO_u8SetPinDirection(KPD_PORT,DIO_u8_PIN7,DIO_u8_PIN_INPUT);
	DIO_u8SetPortValue(KPD_PORT,0xff);
}
u8 KeypadGetPressed(void)
{
	u8 PressedKey = ' ';
	u8 ColumnIndex;
	u8 RowIndex;
	u8 IsKeyPreesed = FALSE;
for(ColumnIndex=COL_START;ColumnIndex<=COL_END;ColumnIndex++ )
	{
		DIO_u8SetPinValue(KPD_PORT,ColumnIndex,DIO_u8_PIN_LOW);
		for(RowIndex=ROW_START;RowIndex<=ROW_END;RowIndex++)
		{
			if(DIO_u8_PIN_LOW==DIO_u8GetPinValue(KPD_PORT,RowIndex))
			{
				PressedKey = SwitchesValue[ColumnIndex][RowIndex-ROW_START];

				/*busy wait polling until the key is released*/
				while(DIO_u8_PIN_LOW==DIO_u8GetPinValue(KPD_PORT,RowIndex));

				DIO_u8SetPinValue(KPD_PORT,ColumnIndex,DIO_u8_PIN_HIGH);
				IsKeyPreesed = TRUE;
				break;
			}
		}
		DIO_u8SetPinValue(KPD_PORT,ColumnIndex,DIO_u8_PIN_HIGH);
	}
	if(IsKeyPreesed == TRUE)
		return PressedKey;
}
