#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;

    long long int size;
    cin >> size;
    long long int a[size], b[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int j = 0, count = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        b[j] = a[i];
        j++;
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] == b[i])
        {
            count++;
        }
    }
    if (count == size)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}