#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define space ' '
#define newline "\n"
int main()
{
    Boost;

    long long int size, maxi = LONG_LONG_MAX, mini, position;
    cin >> size;
    long long int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        cout << a[i] << space;
    }

    return 0;
}