#include "HourlyEmployee.h"
#include <string>
#include <iostream>

using namespace std;

void const HourlyEmployee::setNet(double wage, double hours){
	netPay = wage * hours;
}

void HourlyEmployee::printCheck(){
	Employee::printCheck();
	cout << "Net pay is: " << netPay << endl;

}