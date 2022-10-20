#include <stdio.h>
int main()
{
    int a, b, c, max, min;
    scanf("%d%d%d", &a, &b, &c);

    // Identify Min
    if (a < b & a < c)
    {
        min = a;
    }
    else if (b < c)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    printf("%d ", min);

    // Identify Max
    if (a > b & a > c)
    {
        max = a;
    }
    else if (b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    };
    printf("%d", max);
    return 0;
}