///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
int
main ()
{
  double A, B, C, D;
  cin >> A >> B >> C >> D;
  double i = B * log (A);
  double j = D * log (C);
  if (i > j)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
