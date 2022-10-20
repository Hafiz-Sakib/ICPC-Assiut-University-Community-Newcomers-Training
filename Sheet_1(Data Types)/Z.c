#include <stdio.h>
#include <math.h>
int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if (b * log(a) > d * log(c)) // take log both side
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
