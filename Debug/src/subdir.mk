################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Ahorcado.cpp \
../src/GeneradorDePalabrasRandom.cpp \
../src/GeneradorRandom.cpp \
../src/Interfaz.cpp \
../src/Vector.cpp \
../src/tp_2_catedra_juarez.cpp 

OBJS += \
./src/Ahorcado.o \
./src/GeneradorDePalabrasRandom.o \
./src/GeneradorRandom.o \
./src/Interfaz.o \
./src/Vector.o \
./src/tp_2_catedra_juarez.o 

CPP_DEPS += \
./src/Ahorcado.d \
./src/GeneradorDePalabrasRandom.d \
./src/GeneradorRandom.d \
./src/Interfaz.d \
./src/Vector.d \
./src/tp_2_catedra_juarez.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


