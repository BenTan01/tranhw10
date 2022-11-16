/* This program take no arguments
this program take anlog conver to digital
e.g. ./test_analog
*/
#include "AnalogIn.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    AnalogIn analogIn(0);
    analogIn.getNumber();
    cout << "ADC Sample: " <<  analogIn.readAdcSample() << endl;

}
