#include <stdio.h>
int main()
{
    long long int a, b, t1, t2;
    scanf("%lld%lld", &a, &b);
    t1 = a % 10;
    t2 = b % 10;
    printf("%lld", (t1 + t2));

    return 0;
}