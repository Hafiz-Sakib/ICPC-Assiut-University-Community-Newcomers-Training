
#include <stdio.h>

int main()
{

    int y, m, d, n;

    scanf("%d", &n);

    y = n / 365;

    m = n % 365 / 30;

    d = n % 365 % 30;

    printf("%d years\n%d months\n%d days\n", y, m, d);

    return 0;
}

// My Dumb solution Which One was accepted by codeforces 🤦‍♂️🤦‍♂️🤦‍♂️🤦‍♂️🤦‍♂️🤦‍♂️🤦‍♂️ :

/* #include <stdio.h>
int main()
{
    int n, y, m, d, temp;
    scanf("%d", &n);
    if (n > 365)
    {
        y = n / 365;
        n = n - (365 * y);
        if ((n / 30 < 12))
        {
            m = n / 30;
            n = n - (30 * m);
            d = n;
        }
        else if ((n / 30 >= 12))
        {
            y++;
            m = n - ((n / 30) * 30);
            n = n - (30 * m);
            d = n;
        }
    }
    else if (n < 365)
    {
        y = 0;
        m = n / 30;
        n = n - (m * 30);
        d = n;
    }
    else if (n == 365)
    {
        y = 1;
        m = 0;
        d = 0;
    }
    printf("%d years\n", y);
    printf("%d months\n", m);
    printf("%d days\n", d);

    return 0;
} */