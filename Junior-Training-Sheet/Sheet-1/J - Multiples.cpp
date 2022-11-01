///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include<stdio.h>
int
main ()
{
  int a, b;
  cin >> a >> b;
  if (a % b == 0)
    cout << "Multiples\n";
  else if (b % a == 0)
    cout << "Multiples\n";
  else
    cout << "No Multiples\n";
  return 0;
}
