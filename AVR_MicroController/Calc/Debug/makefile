################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include DriversRepo/MCAL/DIO/Source/subdir.mk
-include DriversRepo/HAL/SEVSEG/Source/subdir.mk
-include DriversRepo/HAL/Lcd/Source/subdir.mk
-include DriversRepo/HAL/Kpd/Source/subdir.mk
-include DriversRepo/Debug/MCAL/DIO/Source/subdir.mk
-include DriversRepo/Debug/HAL/SEVSEG/Source/subdir.mk
-include DriversRepo/Debug/HAL/Lcd/Source/subdir.mk
-include DriversRepo/Debug/HAL/Kpd/Source/subdir.mk
-include DriversRepo/Debug/Application/subdir.mk
-include DriversRepo/Common/subdir.mk
-include DriversRepo/Application/subdir.mk
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
Calc.lss \

FLASH_IMAGE += \
Calc.hex \

EEPROM_IMAGE += \
Calc.eep \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: Calc.elf secondary-outputs

# Tool invocations
Calc.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Calc.map -mmcu=atmega32 -o "Calc.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Calc.lss: Calc.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Calc.elf  >"Calc.lss"
	@echo 'Finished building: $@'
	@echo ' '

Calc.hex: Calc.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Calc.elf  "Calc.hex"
	@echo 'Finished building: $@'
	@echo ' '

Calc.eep: Calc.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Calc.elf  "Calc.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Calc.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Calc.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: Calc.elf
	@echo 'Invoking: AVRDude'
	C:\Users\acer\Downloads\IMT_SDK_Win_64\WinAVR\bin\avrdude -pm32 -cusbasp -Uflash:w:Calc.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Calc.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
