#include <stdio.h>
int main()
{

    int a, t;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            t++;
        }
    }

    if (t == 0)
    {
        printf("-1");
    }

    return 0;
}