#include "utility.h"

int stringToInt(string s){
   istringstream inStr(s);
   int n;
   inStr >> n;
   return n;
}
