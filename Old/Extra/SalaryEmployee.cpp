#include "SalaryEmployee.h"
#include <string>
#include <iostream>

using namespace std;


void SalaryEmployee::setNet(double biweek){
	netPay = biweek;
}

void SalaryEmployee::printCheck(){
	Employee::printCheck();
	cout << "Net pay is: " << netPay << endl;

}