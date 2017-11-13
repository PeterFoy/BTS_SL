################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include emlib/subdir.mk
-include CMSIS/EFM32WG/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Blink2_BTS.axf

# Tool invocations
Blink2_BTS.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m4 -mthumb -T "Blink2_BTS.ld" -Xlinker --gc-sections -Xlinker -Map="Blink2_BTS.map" -mfpu=fpv4-sp-d16 -mfloat-abi=softfp --specs=nano.specs -o Blink2_BTS.axf "./CMSIS/EFM32WG/startup_efm32wg.o" "./CMSIS/EFM32WG/system_efm32wg.o" "./emlib/em_cmu.o" "./emlib/em_emu.o" "./emlib/em_gpio.o" "./emlib/em_system.o" "./src/main.o" -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: Blink2_BTS.hex'
	arm-none-eabi-objcopy -O ihex "Blink2_BTS.axf" "Blink2_BTS.hex"
	@echo ' '

	@echo 'Building bin file: Blink2_BTS.bin'
	arm-none-eabi-objcopy -O binary "Blink2_BTS.axf" "Blink2_BTS.bin"
	@echo ' '

	@echo 'Building s37 file: Blink2_BTS.s37'
	arm-none-eabi-objcopy -O srec "Blink2_BTS.axf" "Blink2_BTS.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "Blink2_BTS.axf"
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) Blink2_BTS.axf
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
