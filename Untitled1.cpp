#include <iostream>
using namespace std;

int main () {
  int a, b, c, d, e, f, g, x, y, z;
  a = 3;
  b = 8;
  c = 10;
  d = 7;
  e = 6;
  f = 5;
  g = 6;
  x = a * b - c / d;
  y = a / d - c / e + f;
  z = (((x * y) % d) * a + c) / g;
  cout << x << " " << y << " " << z;
  cin.get();
}
