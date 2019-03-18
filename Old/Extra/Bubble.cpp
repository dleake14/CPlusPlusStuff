#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
      bool swapped = true;
      int j = 0;
int compare = 0;
int swap = 0;
int tmp;
      while (swapped) {
            swapped = false;
            j++;
            for (int i = 0; i < n - j; i++) {
                compare++;
                  if (arr[i] > arr[i + 1]) {
                        tmp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = tmp;
                        swapped = true;
                        swap ++;
                  }
            }
      }
	  for(int ind = 0; ind < n; ind++){
  cout << arr[ind] << endl;
  }
  cout << "Bubble Sort\n";
  cout << "Compares: " << compare << endl;
  cout << "Swaps: " << swap * 6<<endl;
}
