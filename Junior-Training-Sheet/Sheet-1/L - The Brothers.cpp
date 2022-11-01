///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  string F1, S1, F2, S2;
  cin >> F1 >> S1 >> F2 >> S2;
  int d = S1.compare (S2);
  if (d == 0)
    cout << "ARE Brothers";
  else
    cout << "NOT";
  return 0;
}
