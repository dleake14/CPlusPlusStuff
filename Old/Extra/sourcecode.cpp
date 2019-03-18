#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <iomanip>

using namespace std;

struct coach
  {
    string name;
    string jobTitle;
    int age;
    coach() {age=0;}
  };
    
int main ()
  {
    string line;
    coach x[5];
    int i=0;
    while (getline(cin,line))
      {
        cout << line << endl;

        x[i].name = line.substr(0,10); 
        cout << '|' << x[i].name << '|' << endl;

        x[i].jobTitle = line.substr(10,10); 
        cout << '|' << x[i].jobTitle << '|' << endl;

        x[i].age = atoi(line.substr(20,2).c_str()); 
        cout << '|' << x[i].age << '|' << endl;
        i++;    
      }
    int n = sizeof(x)/sizeof(coach);

    int swaps = 1;
    while (swaps)
      {
        swaps = 0;
        for (i=0; i < n-1; i++)
          if (x[i].age > x[i+1].age)
            {
              swap(x[i].age, x[i++].age);
	      swaps = 1;
        
	    }
     	}
		

		for (i=0; i < n; i++)
		cout << x[i].name << " " << x[i].jobTitle << " " << x[i].age << " " << endl;
	 


	int m = sizeof(x)/sizeof(coach);

    int swaps2 = 1;
    while (swaps2)
      {
        swaps2 = 0;
        for (i=0; i < m-1; i++)
          if (x[i].jobTitle > x[i+1].jobTitle)
            {
              swap(x[i].jobTitle, x[i++].jobTitle);
              swaps2 = 1;

            }
        }


                for (i=0; i < m; i++)
                cout << x[i].name << " " << x[i].jobTitle << " " << x[i].age << " " << endl;





 }
