///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  char ch;
  cin >> ch;
  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
      cout << "ALPHA\n";
      if (ch >= 'A' && ch <= 'Z')
	cout << "IS CAPITAL\n";
      else if (ch >= 'a' && ch <= 'z')
	cout << "IS SMALL\n";
    }
  else if (ch >= '0' && ch <= '9')
    cout << "IS DIGIT";
  return 0;
}
