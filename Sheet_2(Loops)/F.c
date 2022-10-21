#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld", &a);
    for (int i = 1; i <= 12; i++)
    {
        printf("%lld * %lld = %lld\n", a, i, (a * i));
    }

    return 0;
}