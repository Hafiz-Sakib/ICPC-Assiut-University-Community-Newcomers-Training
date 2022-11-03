#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define newline "\n"
#define read2      \
    long int a, b; \
    cin >> a >> b;

int main()
{
    Boost;

    long long int t = 1;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long mini = min(a, b);
        long long maxi = max(a, b);
        mini--;
        long long r1 = mini * (mini + 1) / 2;
        long long r2 = maxi * (maxi + 1) / 2;

        cout << r2 - r1 << newline;
    }

    return 0;
}