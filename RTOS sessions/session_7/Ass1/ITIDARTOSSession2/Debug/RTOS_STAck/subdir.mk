################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTOS_STAck/croutine.c \
../RTOS_STAck/heap_1.c \
../RTOS_STAck/list.c \
../RTOS_STAck/port.c \
../RTOS_STAck/queue.c \
../RTOS_STAck/tasks.c \
../RTOS_STAck/timers.c 

OBJS += \
./RTOS_STAck/croutine.o \
./RTOS_STAck/heap_1.o \
./RTOS_STAck/list.o \
./RTOS_STAck/port.o \
./RTOS_STAck/queue.o \
./RTOS_STAck/tasks.o \
./RTOS_STAck/timers.o 

C_DEPS += \
./RTOS_STAck/croutine.d \
./RTOS_STAck/heap_1.d \
./RTOS_STAck/list.d \
./RTOS_STAck/port.d \
./RTOS_STAck/queue.d \
./RTOS_STAck/tasks.d \
./RTOS_STAck/timers.d 


# Each subdirectory must supply rules for building sources it contributes
RTOS_STAck/%.o: ../RTOS_STAck/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


