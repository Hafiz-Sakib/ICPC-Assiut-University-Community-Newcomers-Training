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

    int n, r, mini = pow(10, 9), counter = 0;
    cin >> n >> r;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        mini = min(mini, val);
        counter++;
        if (counter == r || i == n)
        {
            cout << mini << " ";
            counter = 0;
            mini = pow(10, 9);
        }
    }

    return 0;
}