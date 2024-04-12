/*
 * Keypad_config.h
 *
 *  Created on: Apr 11, 2024
 *      Author: Abdelrhman
 */

#ifndef KEYPAD_CONFIG_H_
#define KEYPAD_CONFIG_H_
/*
 *  1  2  3  +
 *  4  5  6  -
 *  7  8  9  *
 *  /  0 ||  =
 */
const u8 SwitchesValue[4][4] =
{
	{
		'7', /* Row 0 Column 0 */
		'4', /* Row 1 Column 0 */
		'1', /* Row 2 Column 0 */
		'o'  /* Row 3 Column 0 */
	},
	{
		'8', /* Row 0 Column 1 */
		'5', /* Row 1 Column 1 */
		'2', /* Row 2 Column 1 */
		'0'  /* Row 3 Column 1 */
	},
	{
		'9', /* Row 0 Column 2 */
		'6', /* Row 1 Column 2 */
		'3', /* Row 2 Column 2 */
		'='  /* Row 3 Column 2 */
	},
	{
		'/', /* Row 0 Column 3 */
		'*', /* Row 1 Column 3 */
		'-', /* Row 2 Column 3 */
		'+'  /* Row 3 Column 3 */
	}
};

#define KPD_PORT    DIO_u8_PORTA // I used Port A because no interrupt in this port

#define COL_START   DIO_u8_PIN0
#define COL_END     DIO_u8_PIN3
#define ROW_START   DIO_u8_PIN4
#define ROW_END     DIO_u8_PIN7


#endif /* KEYPAD_CONFIG_H_ */
