################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DriversRepo/HAL/Kpd/Source/Kpd_Program.c 

OBJS += \
./DriversRepo/HAL/Kpd/Source/Kpd_Program.o 

C_DEPS += \
./DriversRepo/HAL/Kpd/Source/Kpd_Program.d 


# Each subdirectory must supply rules for building sources it contributes
DriversRepo/HAL/Kpd/Source/%.o: ../DriversRepo/HAL/Kpd/Source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


