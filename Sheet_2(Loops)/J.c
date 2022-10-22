#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    if (n > 1)
    {
        for (int i = 2; i < n; i++)
        {
            if (i % (temp - 1) != 0)
            {
                printf("%d ", i);
            }
            temp--;
        }
    }
    else
    {
        printf("0");
    }
    return 0;
}