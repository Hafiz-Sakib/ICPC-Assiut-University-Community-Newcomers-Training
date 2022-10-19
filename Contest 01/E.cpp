#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (abs(a - b) >= 2 || a == 0 || b == 0)
        cout << "NO";

    else
        cout << "YES";
    return 0;
}