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
#define write1 \
    cout << a << newline;
#define write2 \
    cout << a << newline << b << newline;
#define write3 \
    cout << a << newline << b << newline << c << newline;
int main()
{
    Boost;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == j && i != a / 2 && j != a / 2)
            {
                cout << "\\";
            }
            else if (i == a / 2 && j == a / 2)
            {
                cout << "X";
            }
            else if (j != a / 2 && i == ((a - 1) - j))
            {
                cout << "/";
            }
            else
            {
                cout << "*";
            }
        }
        cout << newline;
    }

    return 0;
}