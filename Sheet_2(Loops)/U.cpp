#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        int x = i, s = 0;
        while (x > 0)
        {
            int z = x % 10;
            s += z;
            x /= 10;
        }
        if (s >= a && s <= b)
        {
            sum += i;
        }
    }
    cout << sum;

    return 0;
}