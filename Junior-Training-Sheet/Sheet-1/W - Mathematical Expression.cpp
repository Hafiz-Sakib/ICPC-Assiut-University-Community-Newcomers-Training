///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int a, b, c;
  char s, q;
  cin >> a >> s >> b >> q >> c;
  if (s == '+' || s == '-' || s == '*')
    {
      if (s == '+' && q == '=')
	(a + b == c) ? cout << "Yes" : cout << a + b;
      else if (s == '-')
	(a - b == c) ? cout << "Yes" : cout << a - b;
      else if (s == '*')
	(a * b == c) ? cout << "Yes" : cout << a * b;
    }
  return 0;
}
