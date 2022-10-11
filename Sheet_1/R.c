#include <stdio.h>
int main()
{
    int n, y, m, d;
    scanf("%d", &n);
    if (n > 365)
    {
        y = n / 365;
        n = n - 365;
        m = n / 30;
        if (m <= 11)
        {
            n = n - (m * 30);
        }
        else
        {
            y++;
        }
        if (n <= 30)
        {
            d = n;
        }
        else
        {
        }
    }
    else if (n < 365)
    {
        y = 0;
        m = n / 30;
        n = n - (m * 30);
        d = n;
    }
    printf("%d years\n", y);
    printf("%d months\n", m);
    printf("%d days\n", d);

    return 0;
}