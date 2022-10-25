#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n1, n2, t1, t2, rem;
    scanf("%d%d", &n1, &n2);
    t1 = n1;
    t2 = n2;

    rem = __gcd(n1, n2);

    cout << rem << endl;

    return 0;
}