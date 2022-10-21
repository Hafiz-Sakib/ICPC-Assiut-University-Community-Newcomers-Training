#include <stdio.h>

int main()
{
    int number, i, count = 0;
    scanf("%d", &number);
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}