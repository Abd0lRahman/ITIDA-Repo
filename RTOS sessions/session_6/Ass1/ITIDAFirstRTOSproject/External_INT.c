/*
 * External_INT.c
 *
 * Created: 2/18/2023 11:40:48 AM
 *  Author: dell
 */ 


#include "External_INT_Interface.h"
#include "External_INT_Reg.h"

/*********** External_Interrupt APIS ****************/
//sets the directions of the enabled interrupts to input
void EXT_INT_Init(void){
	if(INT.Enable_INT0_Interrupt != DISABLE_INT)
		CLEAR_BIT(DDRD, Pin_Int0);

	if(INT.Enable_INT1_Interrupt != DISABLE_INT)
		CLEAR_BIT(DDRD, Pin_Int1);
		
	if(INT.Enable_INT2_Interrupt != DISABLE_INT)
		CLEAR_BIT(DDRB, Pin_Int2);
		
}

//sets the configs of the ext. interrupts to the control registers
void EXT_INT_SET_CONFIG(void)
{	
	SET_BIT(SREG, GIE); //enable global interrupt
	
	if(INT.Enable_INT0_Interrupt != DISABLE_INT){
		SET_BIT(GICR, ENABLE_INT0); //enable INT0
		//set triggering mode
		switch(INT.INT0_Triggering_Mode){
			case LOW_LEVEL_MODE:
				CLEAR_BIT(MCUCR, 0);
				CLEAR_BIT(MCUCR, 1);
				break;
				
			case FALLING_AND_RISING_EDGE_MODE:
				SET_BIT(MCUCR, 0);
				CLEAR_BIT(MCUCR, 1);
				break;
				
			case FALLING_EDGE_MODE:
				CLEAR_BIT(MCUCR, 0);
				SET_BIT(MCUCR, 1);
				break;
				
			case RISING_EDGE_MODE:
				SET_BIT(MCUCR, 0);
				SET_BIT(MCUCR, 1);
				break;	
		}
	}

	if(INT.Enable_INT1_Interrupt != DISABLE_INT){
		SET_BIT(GICR, ENABLE_INT1); //enable INT1
		//set triggering mode
		switch(INT.INT1_Triggering_Mode){
			case LOW_LEVEL_MODE:
				CLEAR_BIT(MCUCR, 2);
				CLEAR_BIT(MCUCR, 3);
			break;
			
			case FALLING_AND_RISING_EDGE_MODE:
				SET_BIT(MCUCR, 2);
				CLEAR_BIT(MCUCR, 3);
			break;
			
			case FALLING_EDGE_MODE:
				CLEAR_BIT(MCUCR, 2);
				SET_BIT(MCUCR, 3);
			break;
			
			case RISING_EDGE_MODE:
				SET_BIT(MCUCR, 2);
				SET_BIT(MCUCR, 3);
			break;
		}
	}
	
	if(INT.Enable_INT2_Interrupt != DISABLE_INT){
		SET_BIT(GICR, ENABLE_INT2); //enable INT2
		//set triggering mode
		switch(INT.INT2_Triggering_Mode){
			case FALLING_EDGE_MODE:
				CLEAR_BIT(MCUCSR, 6);
			break;
			
			case RISING_EDGE_MODE:
				SET_BIT(MCUCSR, 6);
			break;
		}
	}
	
}


//pointers to callback functions
interrupt_callback_t INT0_callback = NULL;
interrupt_callback_t INT1_callback = NULL;
interrupt_callback_t INT2_callback = NULL;

//assigning callback functions addresses to the pointers
void external_interrupt_register_callback(interrupt_callback_t callback0, interrupt_callback_t callback1, interrupt_callback_t callback2){
	INT0_callback = callback0;
	INT1_callback = callback1;
	INT2_callback = callback2;
}

void register_EX0(interrupt_callback_t EX){
	
	INT0_callback = EX;
}

void register_EX1(interrupt_callback_t EX1)
{
	INT1_callback = EX1;
}

//interrupt service routine for INT0
ISR(EXT_INT_0){
	if(INT0_callback != NULL)
		INT0_callback();
}

//interrupt service routine for INT1
ISR(EXT_INT_1){
	if(INT1_callback != NULL)
		INT1_callback();
}

//interrupt service routine for INT2
ISR(EXT_INT_2){
	if(INT2_callback != NULL)
		INT2_callback();
}

void disable_interrupt(u8  inter){
switch (inter){
    case 0 :
    	CLEAR_BIT(GICR, ENABLE_INT0);
        break;
		
	case 1:
		CLEAR_BIT(GICR, ENABLE_INT1);
        break;
   
    case 2:
    	CLEAR_BIT(GICR, ENABLE_INT2);
      break;

}	
	
}


void enable_interrupt(u8 interupt_t){
	switch (interupt_t){
		case 0 :
			CLEAR_BIT(GICR, ENABLE_INT0);
		break;
		
		case 1:
			SET_BIT(GICR, ENABLE_INT1);
		break;
		
		case 2:
			SET_BIT(GICR, ENABLE_INT2);
		break;

	}
	
	
	
}
