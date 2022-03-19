################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/SD_SPI/Src/fatfs.c \
../Drivers/SD_SPI/Src/fatfs_sd.c \
../Drivers/SD_SPI/Src/user_diskio.c 

OBJS += \
./Drivers/SD_SPI/Src/fatfs.o \
./Drivers/SD_SPI/Src/fatfs_sd.o \
./Drivers/SD_SPI/Src/user_diskio.o 

C_DEPS += \
./Drivers/SD_SPI/Src/fatfs.d \
./Drivers/SD_SPI/Src/fatfs_sd.d \
./Drivers/SD_SPI/Src/user_diskio.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/SD_SPI/Src/%.o: ../Drivers/SD_SPI/Src/%.c Drivers/SD_SPI/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I"../Drivers/SD_SPI" -I"../Drivers/FatFs" -I"../Drivers/bno055_stm32" -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

