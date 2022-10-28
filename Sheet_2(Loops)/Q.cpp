#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int t;
    scanf("%lld", &t);
    while (t--)
    {

        string x;
        cin >> x;
        for (int i = x.size() - 1; i >= 0; i--)
        {
            cout << x[i] << " ";
        }
        cout << endl;
    }
    return 0;
}