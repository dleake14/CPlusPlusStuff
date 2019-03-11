#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main () {
const long size = 200000;
int r=0;
int odds=0;
int evens=0;
srand ( time(NULL));
int i=0;
int radnum[size];
while (i < size){
r = rand() % 114342;
//cout << "R is " << r << endl;
//cin.get();
radnum[i] = r;

if (radnum[i] % 2 == 0){
evens++;
}
else {odds++;}
i++;
}

cout << "Odds are " << odds <<"\n";
cout << "Evens are " << evens <<"\n";
//for (int f=0; f<size; f++){
//cout <<radnum[f] << endl;
//}
cin.get();
}


