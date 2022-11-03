///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int
main ()
{
  float x, y;
  int z;
  cin >> x;
  z = x;
  y = x - z;
  (y != 0) ? cout << "float " << z << " " << setprecision (3) << fixed << y : cout << "int " << z;
  return 0;
}
