#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main()
{

    ll res1, res2, a, b, c, d;

    cin >> a >> b >> c >> d;

    if ((b * log(a) < d * log(c)) || (b * log(a) == d * log(c)))
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}