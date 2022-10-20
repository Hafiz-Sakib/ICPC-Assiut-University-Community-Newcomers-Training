#include <stdio.h>
int main()
{
    int a, b;
    char s;
    scanf("%d %c %d", &a, &s, &b);

    if (s == '+')
    {
        printf("%d", (a + b));
    }
    else if (s == '-')
    {
        printf("%d", (a - b));
    }
    else if (s == '*')
    {
        printf("%d", (a * b));
    }
    else if (s == '/')
    {
        printf("%d", (a / b));
    }

    /* if (s == 43)
    {
        printf("%d", (a + b));
    }
    else if (s == 45)
    {
        printf("%d", (a - b));
    }
    else if (s == 42)
    {
        printf("%d", (a * b));
    }
    else if (s == 47)
    {
        printf("%d", (a / b));
    } */

    return 0;
}