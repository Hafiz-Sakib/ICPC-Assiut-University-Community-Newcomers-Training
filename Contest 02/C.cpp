#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    Boost;

    int n, k, mini = INT_MAX, counter = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        mini = min(mini, val);
        counter++;
        if (counter == k || i == n)
        {
            cout << mini << " ";
            counter = 0;
            mini = INT_MAX;
        }
    }

    return 0;
}