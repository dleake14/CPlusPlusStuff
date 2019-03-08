#include <string>
#include <iostream>
using namespace std;

int main ()
{
int count=0;
     
     cout << "Where did Bob Stoops go to College?" << endl;
     string answerA="Iowa ";
     string answerB="Oklahoma ";
     string answerC="Wisconsin ";
     string answerD="Indiana ";
     cout << "A. "<<answerA <<" \nB. "<< answerB <<" \nC. "<< answerC <<" \nD. "<< answerD <<endl;
      
      begin:
     char answer;
     cin >> answer;
     
     char correct ='a';
     if (answer != correct)
                {
                cout << "\nWrong! Try Again" << endl;
                count++;
                goto begin;
                }
     else {
          count++;
          cout << "\nCorrect, the answer was " << answerA << endl;
          cout << "It took you " << count << " tries" << endl;
          
          }
    if (count < 3) {
              cout << "It took you less than 3 tries! " << endl;
              }
    if (count >= 3) {
              cout << "It took you as many or more than 3 tries! " << endl;
              }
          
     cin.get();
     cin.get();
     
     
     }
