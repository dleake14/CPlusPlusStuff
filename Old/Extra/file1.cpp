#include "Template.h"
#include "Template.cpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Template<int> test0;
	cout << "Test Case One: 1 , 2 , 3; the largest is: " << test0.max(1, 2, 3) << endl << endl;
	cout << "Test Case Two: 3 , 8 , 1; the smallest is: " << test0.min(3, 8, 1) << endl << endl;

	Template<char> test1;
	cout << "Test Case Three: a , b , c; the largest is: " << test1.max('a', 'b', 'c') << endl << endl;
	cout << "Test Case Four: T , Q , R; the smallest is: " << test1.min('T', 'Q', 'R') << endl << endl;

	Template<string> test2;
	cout << "Test Case Five: Apple, Orange, Hamburger; the largest is: " << test02.max("Apple", "Orange", "Hamburger") << endl << endl;
	cout << "Test Case Six: Cheese, Wine, Yogurt; the smallest is: " << test02.max("Cheese", "Wine", "Yogurt") << endl << endl;

	Template<double> test3;
	cout << "Test Case Seven: 8.0 , 2.0; the sum is: " << test3.sum(8.0, 2.0) << endl << endl;
	cout << "Test Case Eight: 3.0 , 8.0 , -1.0; the sum is: " << test3.sum(3.0, 8.0, -1.0) << endl << endl;

	// Using test1 - the char Template
	cout << "Test Case Nine: a, b; the sum is: " << test3.sum('a', 'b') << endl << endl;
	cout << "Test Case Ten: s, v , d; the sum is: " << test3.sum('s', 'v', 'd') << endl << endl;
}
