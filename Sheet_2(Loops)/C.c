#include <stdio.h>
int main()
{

    int a, b, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &b);

        if (b % 2 == 0)
        {
            even++;
        }
        if (b % 2 != 0)
        {
            odd++;
        }
        if (b > 0)
        {
            pos++;
        }
        if (b < 0)
        {
            neg++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}