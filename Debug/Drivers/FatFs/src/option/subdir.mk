################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/FatFs/src/option/cc949.c \
../Drivers/FatFs/src/option/syscall.c 

OBJS += \
./Drivers/FatFs/src/option/cc949.o \
./Drivers/FatFs/src/option/syscall.o 

C_DEPS += \
./Drivers/FatFs/src/option/cc949.d \
./Drivers/FatFs/src/option/syscall.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/FatFs/src/option/%.o: ../Drivers/FatFs/src/option/%.c Drivers/FatFs/src/option/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I"../Drivers/SD_SPI" -I"../Drivers/FatFs" -I"../Drivers/bno055_stm32" -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

