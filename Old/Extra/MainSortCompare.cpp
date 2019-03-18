/*David Leake
Programming II
Due: September 6, 2012
Comparing Sort Routines
This program generates 20 random numbers to be sorted and compared in effiecentcy by 3 different sorts.
*/
#if __INCLUDE_LEVEL__ < 1
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Bubble.cpp"
#include "Shell.cpp"
#include "Quick.cpp"
using namespace std;
#endif
int main () {
const int size=20;
srand ( time(NULL) );
int i = 0;
int r;
int randNum[size];
while(i < size)
{
r = rand() % 101;
randNum[i] = r;
i++;
}
int randNumShell[size];
for (int b =0; b < size; b++)
{
randNumShell[b] = randNum[b];
}
int randNumQuick[size];
for (int q = 0; q < size; q++)
{
randNumQuick[q] = randNum[q];
}
bubbleSort(randNum, size);
ShellSort(randNumShell, size);
quickSort(randNumQuick, -1, 19); 
}

