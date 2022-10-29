#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        int mini = min(a, b);
        int maxi = max(a, b);

        for (int i = (mini + 1); i < maxi; i++)
        {

            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}