
#include <bits/stdc++.h>
#define yes printf("YES");
#define no printf("NO");
using namespace std;
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if (((a + b) * c) == d)
    {
        yes;
    }
    else if ((a + (b * c) == d))
    {
        yes;
    }

    else if ((a * b) + c == d)
    {
        yes;
    }

    else if ((a * (b + c) == d))
    {
        yes;
    }

    else if ((a * b) - c == d)
    {
        yes;
    }

    else if ((a * (b - c) == d))
    {
        yes;
    }

    else if ((a - (b * c) == d))
    {
        yes;
    }

    else if ((a * (b - c) == d))
    {
        yes;
    }

    else if ((a + b - c) == d)
    {
        yes;
    }

    else if ((a - b + c) == d)
    {
        yes;
    }

    else
    {
        no;
    }

    return 0;
}

// 805743163 -181176136 454376774 1441296073