#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <windows.h>
using namespace std;


int main() {

srand(time(0));
 int evens = 0;
 int odds = 0;
int i=0;
int f =0;
int j=1;
int game = 0;
int ecount =0;
int ocount =0;
while (j <=7){ 
while (ecount < 4 && ocount < 4){
while (i < 11)
{
    int r = rand();
    if (r % 2 == 0)
    {
    evens ++;
          }
else 
{
odds ++;
}
//system("cls");
//    cout << "Odds " << "=" << " " << odds << endl;
//     cout << "Evens " << "=" << " " << evens << endl;
//      cout << "i " << "=" << " " << i;

    
i++;
    
}
game =j;
  if (evens > odds)
      {       f = evens - odds;
                cout << "\nEvens Won " << "Game " << game << " by " << f <<endl;
                ecount ++;
             
                }
                else {
                     f = odds - evens;
                     cout << "\nOdds Won" << " Game " << game << " by " << f <<endl;
                     ocount ++;
                   
                     }
               if (odds == evens) {cout << "tie" <<endl;
                    
                    }
                    
                      j++;
                  odds=0;
                     evens =0;    
                     i=0;
                     }
                      
                                        if (ecount > ocount){
           cout << "\nEvens won series  " << ecount << " to " << ocount << endl;
           }
           else {cout << "\nOdds won series " << ocount << " to " << ecount << endl;
               
                     }
  
                }


return 0;

}
