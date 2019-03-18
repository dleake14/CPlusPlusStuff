/* David Leake
   Programming 1
   Due: September 19th, 2011
   USPS Program 3
   This program will check the accuracy of given USPS codes and print results
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
string line;
ifstream ifile ("uspsinput.dat"); 
int sum=0;
if (ifile.is_open()) {
	while (getline (ifile,line)) {
		sum=0;
		for (int i=0; i < 12; i++){
			int beg=2;
			string chunk = line.substr(beg,5);
			if (chunk =="00011") sum +=1;
			if (chunk =="00101") sum +=2;
			if (chunk =="00110") sum +=3;
			if (chunk =="01001") sum +=4;
			if (chunk =="01010") sum +=5;
			if (chunk =="01100") sum +=6;
			if (chunk =="10001") sum +=7;
			if (chunk =="10010") sum +=8;
			if (chunk =="10100") sum +=9;
			if (chunk =="11000") sum +=0;
			beg+6;
		} 
		
		// cout << sum <<endl;
		if (sum % 10 ==0)cout << line << " Good Code" << endl;
		if (sum % 10!=0)cout <<line << " Error "<<endl;

}
ifile.close(); 
}
else
{
cout << "Unable to open file" << endl;
}
system ("pause");



	
return 0;

}
