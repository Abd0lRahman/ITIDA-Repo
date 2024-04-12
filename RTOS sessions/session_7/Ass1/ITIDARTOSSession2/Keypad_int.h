/*
 * Keypad_config.h
 *
 *  Created on: Apr 11, 2024
 *      Author: Abdelrhman
 */
#ifndef KEYPAD_INT_H_
#define KEYPAD_INT_H_


#include "type.h"
#include "bit.h"
#include "interface.h"


#define KEY_NOT_PRESSED   255

#define TRUE    1
#define FALSE   0



void Keypad_Init();
u8 KeypadGetPressed();


#endif /* KEYPAD_INT_H_ */
