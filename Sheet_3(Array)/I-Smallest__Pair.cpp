/* #include <bits/stdc++.h>
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

    int t;
    cin >> t;
    while (t--)
    {
        ll size;
        cin >> size;
        ll a[size], temp, mini;
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }

        mini = a[1] + a[2] + 2 - 1;

        for (int i = 1; i < size; i++)
        {
            for (int j = i + 1; j <= size; j++)
            {
                temp = a[i] + a[j] + j - i;
                if (temp < mini)
                {
                    mini = temp;
                }
            }
        }

        cout << mini << endl;
    }

    return 0;
} */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long int
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

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], mini, temp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        mini = a[1] + a[2] + 2 - 1;

        for (int i = 1; i < n; i++)
        {
            for (int j = (i + 1); j <= n; j++)
            {
                temp = a[i] + a[j] + j - i;

                if (temp < mini)
                {
                    mini = temp;
                }
            }
        }
        cout << mini << newline;
    }

    return 0;
}