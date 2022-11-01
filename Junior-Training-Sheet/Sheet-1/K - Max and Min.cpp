///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  int a, b, c, temp;
  cin >> a >> b >> c;
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
  cout << a << " " << c << endl;
  return 0;
}
