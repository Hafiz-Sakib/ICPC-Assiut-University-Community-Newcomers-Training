#include <stdio.h>
int main()
{
    long long int i, r = 1, t;
    scanf("%lld", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        for (i = 1; i <= n; i++)
        {
            r = r * i;
        }
        printf("%lld\n", r);
        r = 1;
    }

    return 0;
}