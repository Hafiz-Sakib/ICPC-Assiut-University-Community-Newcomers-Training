#include <stdio.h>
#include <limits.h>
int main()
{
    long long int a, b, m = INT_MIN;
    scanf("%lld", &a);
    for (int i = 0; i < a; i++)
    {

        scanf("%lld", &b);

        if (b > m)
        {
            m = b;
        }
    }
    printf("%lld", m);

    return 0;
}