#include <stdio.h>
#include <math.h>
int main()
{
    long long a, b, c, d, mul = 0;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    mul = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;
    if (mul < 10)
        printf("0%lld", mul);
    else
        printf("%lld", mul);
    return 0;
}