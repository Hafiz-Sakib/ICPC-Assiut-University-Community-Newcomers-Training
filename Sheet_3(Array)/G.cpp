#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define cY cout << "YES\n"
#define cN cout << "NO\n"
#define cy cout << "Yes\n"
#define cn cout << "No\n"
#define space ' '
#define newline "\n"
#define read3         \
    long int a, b, c; \
    cin >> a >> b >> c;
#define read2      \
    long int a, b; \
    cin >> a >> b;
#define read1   \
    long int a; \
    cin >> a;
#define write1 cout << a << newline;
#define write2 cout << a << newline << b << newline;
#define write3 cout << a << newline << b << newline << c << newline;
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
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
        cY;
    }
    else
    {
        cN;
    }

    return 0;
}