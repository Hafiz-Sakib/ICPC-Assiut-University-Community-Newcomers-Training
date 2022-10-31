#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, c = 0;
        long long sum = 0;
        scanf("%d", &n);
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                c++;
            }

            n = n / 2;
        }
        for (int i = 0; i < c; i++)
        {
            sum = sum + pow(2, i);
        }
        printf("%d", sum);
    }

    return 0;
}