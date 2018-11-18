################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Incognizable.cpp \
../src/LectureTitle.cpp \
../src/Person.cpp \
../src/Weather.cpp \
../src/main.cpp 

OBJS += \
./src/Incognizable.o \
./src/LectureTitle.o \
./src/Person.o \
./src/Weather.o \
./src/main.o 

CPP_DEPS += \
./src/Incognizable.d \
./src/LectureTitle.d \
./src/Person.d \
./src/Weather.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


