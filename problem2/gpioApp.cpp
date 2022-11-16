/*
This program take no arguments
This program design to perform sequence of tasks
e.g. ./gpioApp.cpp
*/
#include "AnalogIn.h"
#include "GPIO.h"
#include "makeLEDs.h"
#include <iostream>

using namespace std;
using namespace exploringBB;

int main(int argc, char* argv[]){
  LED led1(1);
  LED led3(3);
  led1.turnOn();
  led3.turnOn();
  
  LED led2(2);
  led2.blink(3);

  AnalogIn analogIn(0);
  cout << "Adc Sample: " << analogIn.readAdcSample() << endl;

  GPIO gpio46(46);
  cout << "Value of P8.16: " << gpio46.getValue() << endl;

  GPIO gpio60(60);
  if (gpio46.getValue() == 0){
      gpio60.setValue(HIGH);
  }
  else gpio60.setValue(LOW);
}
