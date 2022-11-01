///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include<stdio.h>
int
main ()
{
  int a, i, k;
  cin >> a;
  if (a > 999 && a <= 9999)
    {
      k = a / 1000;
      (k % 2 == 0) ? cout << "EVEN\n" : cout << "ODD\n";
    }
  return 0;
}
