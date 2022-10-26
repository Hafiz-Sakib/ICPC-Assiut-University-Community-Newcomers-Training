#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = 10;
        vector<int> v;
        while (n != 0)
        {
            int tem = n % x;
            n = n / 10;
            v.push_back(tem);
        }
        for (auto u : v)
            cout << u << " ";
        cout << endl;
    }

    return 0;
}