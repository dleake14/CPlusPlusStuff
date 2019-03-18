#include <iostream>
#include "Money.h"

 using namespace std;

int main()
{
	Money m0 = Money(0, 101);
	Money m1 = Money(2, 233);
	Money m2 = Money(31, 9);
	Money m3 = Money(51,2);

	Money mp0 = m0 + m1;	
	Money mp1 = m1 + m2;	
	Money mp2 = m2 + m3;	
	cout << "Addition1: "; mp0.print(); cout << "Addition2: "; mp1.print(); cout << "Addition3: "; mp2.print(); cout << endl;

	mp0 = m0 - m1;
	mp1 = m1 - m2;
	mp2 = m2 - m3;
	cout << "Subtraction1: "; mp0.print(); cout << "Subtraction2: "; mp1.print(); cout << "Subtraction3: "; mp2.print(); cout << endl;

	mp0 = m0 * 9;
	mp1 = m1 * 4;
	mp2 = m2 * 11;
	cout << "Multiply1: "; mp0.print(); cout << "Multiply2: "; mp1.print(); cout << "Multiply3: "; mp2.print(); cout << endl;

	mp0 = m0 / 4;
	mp1 = m1 / 6;
	mp2 = m2 / 16;
	cout << "Division1: "; mp0.print(); cout << "Division2: "; mp1.print(); cout << "Division3: "; mp2.print(); cout << endl;

	cin.get();
}
