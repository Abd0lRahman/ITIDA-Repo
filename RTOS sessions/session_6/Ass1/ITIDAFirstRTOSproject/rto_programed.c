#include "bit.h"
#include "type.h"
#include "timer_interface.h"
#include "gie_interface.h"
#include "rto_private.h"
#include "rto_config.h"
#include "rto_interface.h"

TCB RTO_aTCBNumberOfTasks[RTO_u8_MAX_PRIORITY];

u8 RTO_u8CreateTask(u8 Copy_u8Priority,u32 Copy_u8Priodicity,u32 Copy_u8FirstDelay,void (*Copy_voidPF)(void),u8 Copy_u8TaskState)
{
	u8 Local_u8ReturnedState=OK;
	if(Copy_u8Priority < RTO_u8_MAX_PRIORITY)
	{
		RTO_aTCBNumberOfTasks[Copy_u8Priority].periodicity=Copy_u8Priodicity;
		RTO_aTCBNumberOfTasks[Copy_u8Priority].first_delay=Copy_u8FirstDelay;
		RTO_aTCBNumberOfTasks[Copy_u8Priority].pf=Copy_voidPF;
		RTO_aTCBNumberOfTasks[Copy_u8Priority].TaskState=Copy_u8TaskState;
	}
    else
    {
	    Local_u8ReturnedState=NOT_OK;
    }
    return Local_u8ReturnedState;   
}
void RTO_voidScheduler(void)
{
	u8 SchedulerCounter;
	for(SchedulerCounter=0;SchedulerCounter<RTO_u8_MAX_PRIORITY;SchedulerCounter++)
	{
		if(RTO_aTCBNumberOfTasks[SchedulerCounter].first_delay == 0)
		{
			if(RTO_aTCBNumberOfTasks[SchedulerCounter].TaskState == Resumed)
				{
				RTO_aTCBNumberOfTasks[SchedulerCounter].first_delay = RTO_aTCBNumberOfTasks[SchedulerCounter].periodicity-1;
				RTO_aTCBNumberOfTasks[SchedulerCounter].pf();
				}
			else
			{
				//Task suspended
			}
		}
		else
		{
			RTO_aTCBNumberOfTasks[SchedulerCounter].first_delay--;
		}
	}
}

void RTO_voidStartSys(void)
{
	EXTI_voidControlGIE(GIE_u8_ON);
	TMR0_voidInit();
	TMR0_voidSetCallBack(TMR0_u8_NORMAL,&RTO_voidScheduler);
	TMR0_voidEnablePIE(TMR0_u8_OVERFLOW);
}

void SuspendTask(u8 Copy_u8Priority)
{
	RTO_aTCBNumberOfTasks[Copy_u8Priority].TaskState = Suspended;
}

void ResumeTask(u8 Copy_u8Priority)
{
	RTO_aTCBNumberOfTasks[Copy_u8Priority].TaskState = Resumed;
}
