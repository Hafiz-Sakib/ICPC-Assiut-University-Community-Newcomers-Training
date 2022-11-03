#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    Boost;

    int n, r, mini = INT_MAX, counter = 0;
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
            mini = INT_MAX;
        }
    }

    return 0;
}