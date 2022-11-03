///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  char ch;
  cin >> ch;
  if (ch >= 'A' && ch <= 'Z')
    {
      ch = tolower (ch);
      cout << ch;
    }
  else if (ch >= 'a' && ch <= 'z')
    {
      ch = toupper (ch);
      cout << ch;
    }
  return 0;
}
