/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

int main()
{
    Boost;
    int n, cnt = 0, f = 0;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (f == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                f = 1;
                break;
            }
            else
            {
                v[i] = (v[i] / 2);
                if (i == (n - 1))
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
