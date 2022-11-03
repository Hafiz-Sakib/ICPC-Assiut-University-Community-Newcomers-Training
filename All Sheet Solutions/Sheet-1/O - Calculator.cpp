///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  int a, b;
  char s;
  cin >> a >> s >> b;
  if (s == '+')
    cout << a + b;
  else if (s == '-')
    cout << a - b;
  else if (s == '*')
    cout << a * b;
  else if (s == '/')
    cout << a / b;
  return 0;
}
