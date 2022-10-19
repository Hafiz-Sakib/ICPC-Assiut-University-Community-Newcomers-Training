#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y, z, b, c;
    cin >> x >> y >> z;
    c = min(x, min(y, z));
    b = min((x - c) / 2, z - c);
    cout << c + b;
    return 0;
}
