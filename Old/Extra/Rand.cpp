#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main () {
	srand (time(NULL));
	int i =0;
	while (i > 3 && i < 10000000)
	{
	int rick = (rand() % 10);	
	if (rick % 2 == 0){
	rick = 0;
	}
	else {
	rick = 1;
	}


	cout << rick;
	system("pause");
		
		//i++;
		//if (i ==3){
			//cout <<"-";
		//}
		//if (i ==6){
			//cout <<"-";
		//}
	}
	getchar();
}