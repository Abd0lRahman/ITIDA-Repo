#ifndef rto_private_h
#define rto_private_h


typedef struct
{
	u32 periodicity;
	u32 first_delay;
	void (*pf)(void);
	u8 TaskState;
}TCB;

#define Resumed   1
#define Suspended 2

#endif
