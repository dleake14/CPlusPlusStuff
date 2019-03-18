#include <iostream>
using namespace std;
int compare = 0;
int swapCount = 0;
void ShellSort(int arr[], int n)
{
     int i, temp;
     int d = n;
	 int swaps=1;
     while(swaps)      
     {
          swaps = 0;           
          d = (d+1) / 2;
          for (i = 0; i < (n - d); i++)
        { compare++;
               if (arr[i + d] < arr[i])
              {
                      temp = arr[i + d];      
                      arr[i + d] = arr[i];
                      arr[i] = temp;
                      swapCount++; 
                      swaps = 1;                
              }
         }
     }
	 for(int ind = 0; ind < n; ind++){
  cout << arr[ind] << endl;
  }
  cout << "Shell Sort \n";
  cout << "Compares: " << compare << endl;
  cout << "Swaps: " << swapCount * 6 <<endl;
}
