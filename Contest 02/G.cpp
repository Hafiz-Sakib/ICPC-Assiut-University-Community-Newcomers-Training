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
    long long int counter;
    long long int res[100000];
    cin >> counter;
    long long int cou = 0;
    for (int i = 0; i < counter; i++)
    {
        long long int num1, num2;
        cin >> num1 >> num2;
        if (num1 * (num1 + 1) / 2 < num2)
        {
            cout << -1;
        }
        else
        {
            long long int sum = 0;

            for (int z = num1; z >= 1; z--)
            {
                if (sum + z <= num2)
                {
                    sum += z;
                    res[cou] = z;
                    cou++;
                }
                if (sum == num2)
                {
                    break;
                }
            }
        }
        for (int x = 0; x < cou; x++)
        {
            cout << res[x] << space;
        }
        cout << newline;
        cou = 0;
    }

    return 0;
}