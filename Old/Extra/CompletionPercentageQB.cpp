#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
 double completions;
 double percentage;
 
    cout << "Enter completions" <<endl;
    cin >> completions;
    system("cls");
    cout << "Enter attempts" <<endl;
    cin >> percentage;
    system("cls");
    percentage =completions / percentage;
    percentage = percentage * 100;
    cout <<"\n\n\n\n\n\n                         Completion Percentage is " << setprecision(3) << percentage <<"%" << endl;
    string what;
    if(percentage >= 90){
                  cout <<"\n                                  Amazing" <<endl;
                  }
    else if (percentage >= 70){
                   cout <<"\n                                  Good" <<endl;
                   }
    else if (percentage >= 60){
                    cout <<"\n                                  Decent" <<endl;
                    } 
      else if (percentage <= 60){
                    cout <<"\n                                  Bad" <<endl;
                    }

    
    
    cin.get();
    cin.get();
}
    
