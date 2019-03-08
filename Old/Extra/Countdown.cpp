#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;
      
int main(){
int j=9;
int i;
cout << "enter time left" <<endl;
cin >> i;
system("cls");
while (i>0){
           cout << i <<endl;     
           Sleep(1000);  
           system("cls");
           i--;
           }
cout << "ITS OVER BITCHES!!!!" <<endl;
getchar();
getchar();

}
