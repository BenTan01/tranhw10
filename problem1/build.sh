#!/bin/bash
echo "Building the test_analog application"
g++ -Wall test_analog.cpp AnalogIn.cpp -o test_analog
echo "Finished"
