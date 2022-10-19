#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, k, x1 = 0;
    cin >> n >> m >> k;
    long long int x = n / 2;
    long long int a = min(x, m);
    long long int b = min(a, k);
    if (n == 0 || k == 0)
    {
        cout << 0 << endl;
        exit(0);
    }
    else if (m == 0)
    {
        cout << min((n / 2), k) << endl;
    }
    else if (b == m)
    {
        cout << min(((n - b) / 2), (k - b)) + b << endl;
    }
    else if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        while (m != 0 && k != 0 && x != 0)
        {
            long long int a = min(x, m);
            long long int b = min(a, k);
            m = m - b;
            k = k - b;
            n = n - b;
            if (m == 0)
            {
                x1 = x1 + min((n / 2), k) + b;
            }
            else
            {
                x1 += b;
            }
            if (n > (2 * x))
            {
                x = n / 2;
            }
            else
                x = n;
        }
        cout << x1 << endl;
    }

    return 0;
}