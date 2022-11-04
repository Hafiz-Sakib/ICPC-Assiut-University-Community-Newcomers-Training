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
    long long int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    long long int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = (i + 1); j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}