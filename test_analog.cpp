#include "analogin.h"
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
	Analogin AIN(0);
	cout << "Using AIN " << AIN.getNumber() << endl;
	cout << "The ADC value is " << AIN.readADCsample() << endl;
}
