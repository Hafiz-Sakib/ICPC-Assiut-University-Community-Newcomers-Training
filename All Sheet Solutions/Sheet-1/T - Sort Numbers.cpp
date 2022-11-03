///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int temp, a, b, c, x, y, z;
  cin >> a >> b >> c;
  x = a;
  y = b;
  z = c;
  if (a > b)
    {
      temp = a;
      a = b;
      b = temp;
    }
  if (a > c)
    {
      temp = a;
      a = c;
      c = temp;
    }
  if (b > c)
    {
      temp = b;
      b = c;
      c = temp;
    }
  cout << a << endl << b << endl << c << endl << endl << x << endl << y <<
    endl << z << endl;
}
