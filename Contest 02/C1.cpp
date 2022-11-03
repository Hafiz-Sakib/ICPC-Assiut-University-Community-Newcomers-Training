#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k;
    cin >> n >> k;
    while (n > 0)
    {
        vector<long long int> a(k, LLONG_MAX);
        long long int min = LLONG_MAX;
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
            }
        }
        cout << min << " ";
        n = n - k;
    }

    return 0;
}