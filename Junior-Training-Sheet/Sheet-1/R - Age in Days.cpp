///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  int a, x, y, z;
  cin >> a;
  cout << a / 365 << " years\n";
  x = a % 365;
  a = x;
  y = a % 30;
  a = y;
  cout << x / 30 << " months\n";
  cout << y << " days\n";
  return 0;
}
