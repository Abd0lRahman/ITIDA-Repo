#ifndef rto_interface_h
#define rto_interface_h



u8 RTO_u8CreateTask(u8 Copy_u8Priority,u32 Copy_u8Priodicity,u32 Copy_u8FirstDelay,void (*Copy_voidPF)(void),u8 TaskState);


void RTO_voidScheduler(void);


void RTO_voidStartSys(void);

void SuspendTask(u8 Copy_u8Priority);

void ResumeTask(u8 Copy_u8Priority);






#endif
