#include <stdio.h>
#define newLine printf("\n")

int main()
{
    int a, b, c; // 3 -2  1
    scanf("%d%d%d", &a, &b, &c);

    if (a > b > c)
    {
        printf("%d\n%d\n%d\n", c, b, a);
        newLine;
        printf("%d\n%d\n%d", a, b, c);
    }
    else if (a > c > b)
    {
        printf("%d\n%d\n%d\n", b, c, a);
        newLine;
        printf("%d\n%d\n%d", a, b, c);
    }
    else if (a < c < b)
    {
        printf("%d\n%d\n%d\n", a, c, b);
        newLine;
        printf("%d\n%d\n%d", a, b, c);
    }
    else if (b > c > a)
    {
        printf("%d\n%d\n%d\n", a, c, b);
        newLine;
        printf("%d\n%d\n%d", a, b, c);
    }
    else if (c > a > b)
    {
        printf("%d\n%d\n%d\n", b, a, c);
        newLine;
        printf("%d\n%d\n%d", a, b, c);
    }
    else if (c > b > a)
    {
        printf("%d\n%d\n%d\n", a, b, c);
        newLine;
        printf("%d\n%d\n%d", a, b, c);
    }
    return 0;
}