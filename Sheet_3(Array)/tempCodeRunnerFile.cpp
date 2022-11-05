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
}