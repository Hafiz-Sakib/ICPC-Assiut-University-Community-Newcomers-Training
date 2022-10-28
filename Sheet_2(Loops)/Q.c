#include <stdio.h>
int main()
{
    long long int t;
    scanf("%lld", &t);
    while (t--)
    {
        long long int a, rem;
        scanf("%lld", &a);
        long long int i = 0;
        while (a > 0)
        {
            rem = a % 10;
            printf("%lld ", rem);
            a = a / 10;
        }

        printf("\n");
    }
    return 0;
}