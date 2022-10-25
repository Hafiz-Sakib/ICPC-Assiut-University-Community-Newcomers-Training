#include <stdio.h>
int main()
{
    long long int x, y, i, ctn = 0, temp, count, digit, rem, flag;
    scanf("%lld %lld", &x, &y);

    for (i = x; i <= y; i++)
    {
        temp = i;
        count = 0, digit = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            if (rem == 4 || rem == 7)
            {
                count++;
            }

            temp /= 10;
            digit++;
        }
        if (count == digit)
        {
            printf("%lld ", i);
            ctn++;
        }
    }
    if (ctn == 0)
    {
        printf("-1");
    }

    return 0;
}
