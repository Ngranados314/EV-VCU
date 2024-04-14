################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Program/Src/Inverter/inverter.cpp 

OBJS += \
./Program/Src/Inverter/inverter.o 

CPP_DEPS += \
./Program/Src/Inverter/inverter.d 


# Each subdirectory must supply rules for building sources it contributes
Program/Src/Inverter/%.o Program/Src/Inverter/%.su Program/Src/Inverter/%.cyclo: ../Program/Src/Inverter/%.cpp Program/Src/Inverter/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F303x8 -c -I../Core/Inc -I../Program -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Nico/Documents/DFREV/Embedded/EV-VCU/vcu/Program" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Program-2f-Src-2f-Inverter

clean-Program-2f-Src-2f-Inverter:
	-$(RM) ./Program/Src/Inverter/inverter.cyclo ./Program/Src/Inverter/inverter.d ./Program/Src/Inverter/inverter.o ./Program/Src/Inverter/inverter.su

.PHONY: clean-Program-2f-Src-2f-Inverter

