#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define space ' '

int main()
{
    Boost;

    int size, position = 1;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    int mini = a[0];

    for (int i = 0; i < size; i++)
    {
        if (a[i] < mini)
        {
            mini = a[i];
            position = i + 1;
        }
    }
    cout << mini << space << position;

    return 0;
}