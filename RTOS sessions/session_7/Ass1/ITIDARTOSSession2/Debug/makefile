################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include RTOS_STAck/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
ITIDARTOSSession2.lss \

FLASH_IMAGE += \
ITIDARTOSSession2.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: ITIDARTOSSession2.elf secondary-outputs

# Tool invocations
ITIDARTOSSession2.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,ITIDARTOSSession2.map -mmcu=atmega32 -o "ITIDARTOSSession2.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

ITIDARTOSSession2.lss: ITIDARTOSSession2.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S ITIDARTOSSession2.elf  >"ITIDARTOSSession2.lss"
	@echo 'Finished building: $@'
	@echo ' '

ITIDARTOSSession2.hex: ITIDARTOSSession2.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex ITIDARTOSSession2.elf  "ITIDARTOSSession2.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: ITIDARTOSSession2.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 ITIDARTOSSession2.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) ITIDARTOSSession2.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
