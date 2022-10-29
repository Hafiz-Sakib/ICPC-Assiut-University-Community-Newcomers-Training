#include <stdio.h>
int main()
{
    while (1)
    {

        int m, n, sum = 0, i, j;
        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0)
        {
            break;
        }

        else if (m < n)
        {
            for (i = m; i <= n; i++)
            {
                sum += i;
                printf("%d ", i);
            }
            printf("sum =%d", sum);
            printf("\n");
        }

        else
        {
            for (i = n; i <= m; i++)
            {
                sum += i;
                printf("%d ", i);
            }
            printf("sum =%d", sum);
            printf("\n");
        }
    }

    return 0;
}