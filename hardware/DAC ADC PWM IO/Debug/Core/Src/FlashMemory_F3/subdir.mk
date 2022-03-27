################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/FlashMemory_F3/ReadWrite.c 

OBJS += \
./Core/Src/FlashMemory_F3/ReadWrite.o 

C_DEPS += \
./Core/Src/FlashMemory_F3/ReadWrite.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/FlashMemory_F3/ReadWrite.o: ../Core/Src/FlashMemory_F3/ReadWrite.c Core/Src/FlashMemory_F3/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F373xC -DDEBUG -c -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/FlashMemory_F3/ReadWrite.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

