################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../MessageStruct/MoneyInsatence/MoneyInsatence.pb.cc 

OBJS += \
./MessageStruct/MoneyInsatence/MoneyInsatence.pb.o 

CC_DEPS += \
./MessageStruct/MoneyInsatence/MoneyInsatence.pb.d 


# Each subdirectory must supply rules for building sources it contributes
MessageStruct/MoneyInsatence/%.o: ../MessageStruct/MoneyInsatence/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -DUSE_MEMORY_POOL -DUSE_MEMORY_LEAKS -I../../../Common/include -I/usr/local/protobuf/include -I"/data/game/cx/Server/ybtx/Server_Mob/Dependence/MessageStruct" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

