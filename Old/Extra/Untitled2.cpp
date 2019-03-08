#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main () {
    string name;
    string lastname;
    string phoneNumber;
    string line;
    ifstream myfile ("info.txt");
    if (myfile.is_open())
          { cout << "File Accessed\n\n\n" << endl;

      
    while (getline(myfile,line))
      {
          getline (myfile,line);
      cout << line << endl;


          
            cout << name << lastname << phoneNumber << endl;
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 
  cout << "\n\n\nInformation Acquired" << endl;
  cin.get();

return 0;
}
