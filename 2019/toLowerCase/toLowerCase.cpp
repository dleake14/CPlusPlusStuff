#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

//Solution as a class instead of just a method

class Solution {
public:
	string toLowerCase(string str) {
		int i;
		for (i = 0; i < str.length(); i++) {
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
		}
		return str;
	}
};


string toLowerCase(string input) {
	char swap[150];
	strcpy_s(swap, input.c_str());
	int c = -1;
	for (int i = 0; i < strlen(swap); i++) {
		c = swap[i];
		if (c >= 65 && c <= 90) {
			c += 32;
			swap[i] = c;
		}	
	}
	string output = swap;
	return output;
}

int main() {
	string input;
	Solution one;
	cout << "Program started" << endl;
	cout << "enter string: ";
	getline(cin, input, '\n');
	cout << "input is: " << input << endl;
	string output = one.toLowerCase(input);
	cout << "Output is now: " << output << endl;
}


