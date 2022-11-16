#!/bin/bash
config-pin p9.16 gpio
echo out > /sys/class/gpio/gpio60/direction
config-pin p8.16 gpio_pu
echo "Building the gpioApp application"
g++ -Wall gpioApp.cpp AnalogIn.cpp makeLEDs.cpp GPIO.cpp -o gpioApp -pthread
echo "Finished"
