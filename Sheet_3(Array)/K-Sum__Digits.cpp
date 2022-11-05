#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long int
#define space ' '
#define newline "\n"
int main()
{
    Boost;

    int size;
    cin >> size;
    string value;
    cin >> value;
    ll sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + value[i] - '0';
    }
    cout << sum << newline;

    return 0;
}