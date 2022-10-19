#include <stdio.h>
int main()
{
    long long int a, b, r;
    scanf("%lld %lld", &a, &b);

    r = a ^ b;
    printf("%d", r);

    return 0;
}