#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;
    n++;
    while (n--)
    {
        int x = n, d_sum = 0;
        while (x != 0)
        {
            int r = x % 10;
            x = x / 10;
            d_sum += r;
        }
        if (d_sum >= a && d_sum <= b)
            sum += n;
    }
    cout << sum;
    return 0;
}