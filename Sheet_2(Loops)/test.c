#include <math.h>
#include <stdio.h>

int main()
{
    long long i, n, num, max = 0;
    scanf("%lld", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &num);
        if (num > max)
        {
            max = num;
        }
    }
    printf("%lld\n", max);
}
