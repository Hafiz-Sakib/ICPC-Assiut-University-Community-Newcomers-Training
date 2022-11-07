#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b, c = 0;
  cin >> a >> b;
  string s;
  cin >> s;
  for (int i = 0; i < (a + b + 1); i++)
  {
    if (s[i] == '-')
    {
      c = i + 1;
    }
  }
  if (c == (a + 1))
  {

    cout << "Yes";
  }
  else
  {
    cout << "No";
  }
}