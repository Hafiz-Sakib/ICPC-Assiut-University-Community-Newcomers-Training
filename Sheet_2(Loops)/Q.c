#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, rem;
        scanf("%d", &a);
        int i = 0;
        while (a > 0)
        {
            rem = a % 10;
            printf("%d ", rem);
            a = a / 10;
        }

        printf("\n");
    }
    return 0;
}