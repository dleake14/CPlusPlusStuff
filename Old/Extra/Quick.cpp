bool printed = false;
bool counter = false;
bool secCounter = false;
int swaps = 0;

void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
	  bool one = false;
      int r=0;
	  int tmp;
	  if (counter == false){
	  int compare =0;
	  }
	  counter = true;
      int pivot = arr[(left + right) / 2];
	  
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
					compare++;
            while (arr[j] > pivot)
                  j--;
			compare++;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
				  swaps ++;
            }
	  }      
      if (left < j){
            quickSort(arr, left, j);
            }
      if (i < right){
            quickSort(arr, i, right);     
	  }
	     while (r<19 && printed == false){
    if (arr[r] > arr[r+1]){
		one = false;
		r=0;
		break;
	} 
	else {
	r++;
	one = true;
	} 
		 }
	     if (one == true){
           for (int w=0; w<20; w++){
           cout << arr[w] << endl;
		   printed = true;
		   }
		   cout << "Quick Sort\n";
           cout << "Compares: " << compare << endl;
           cout << "Swaps: " << swaps * 6<<endl;
           cin.get();
           }

}
