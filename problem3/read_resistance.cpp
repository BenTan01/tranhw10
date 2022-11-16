/* this program determine the bottom resistor in a voltage divider
*  read_resistance application don't need any argument
*  e.g. ./read_resistance
*/
#include<iostream>
#include<cmath>
#include<iomanip>
#include "AnalogIn.h"

using namespace std;

double find_resistance(int analog){
    double resistance = double(analog * 10000 * -1)/(analog - 4095);
    return resistance;

}

int main(int argc, char*argv[]){
    AnalogIn analogIn(0);
    cout << "Using AIN0 to read analog value." << endl;
    cout << "Measuring resistance ..." << endl;
    int analog = analogIn.readAdcSample();
    cout << "ADC value is: " << analog << endl;
    cout << endl;
    double resistance = find_resistance(analog);
    if (resistance >= 1000.00){
        resistance /= 1000;
        int c = (int)(resistance * 100 + 0.05);
        float b = c/100.0;
        cout << "Resistance: "  << b << "k Ohms" << endl;
    }
    else {cout << "Resistance: " << round(resistance) << "Ohms" << endl;}
    cout << endl;
    
}
