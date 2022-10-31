#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        long long sum = 0;
        cin >> n;
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                c++;
            }
            n = n / 2;
        }
        for (int i = 0; i < c; i++)
        {
            sum = sum + pow(2, i);
        }
        cout << sum << endl;
    }

    return 0;
}