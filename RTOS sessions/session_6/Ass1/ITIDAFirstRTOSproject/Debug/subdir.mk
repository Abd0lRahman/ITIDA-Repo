################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../External_INT.c \
../gie_programme.c \
../lcd_programme.c \
../main.c \
../programme\ file.c \
../rto_programed.c \
../timer_programme.c 

OBJS += \
./External_INT.o \
./gie_programme.o \
./lcd_programme.o \
./main.o \
./programme\ file.o \
./rto_programed.o \
./timer_programme.o 

C_DEPS += \
./External_INT.d \
./gie_programme.d \
./lcd_programme.d \
./main.d \
./programme\ file.d \
./rto_programed.d \
./timer_programme.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

programme\ file.o: ../programme\ file.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"programme file.d" -MT"programme\ file.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


