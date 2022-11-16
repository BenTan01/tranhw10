#!/bin/bash
echo "Building the read_resistance application"
g++ -Wall read_resistance.cpp AnalogIn.cpp -o read_resistance
echo "Finished"
