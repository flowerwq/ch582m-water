################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Main.c \
../src/adc.c \
../src/oled.c 

OBJS += \
./src/Main.o \
./src/adc.o \
./src/oled.o 

C_DEPS += \
./src/Main.d \
./src/adc.d \
./src/oled.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -mcmodel=medany -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -DDEBUG=1 -I"../StdPeriphDriver/inc" -I"D:\work\CH582M_water-level\head" -I"../RVMSIS" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

