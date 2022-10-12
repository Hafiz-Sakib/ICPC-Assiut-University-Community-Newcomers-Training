#include <stdio.h>
#define newLine printf("\n")

int main()
{
    long long int a, b, c;
    scanf("%ld%ld%ld", &a, &b, &c);

    if (a < b < c)
    {
        printf("%ld\n%ld\n%ld\n", a, b, c);
        newLine;
        printf("%ld\n%ld\n%ld\n", a, b, c);
    }
    else if (a < c < b)
    {
        printf("%ld\n%ld\n%ld\n", a, c, b);
        newLine;
        printf("%ld\n%ld\n%ld\n", a, b, c);
    }
    else if (b < a < c)
    {
        printf("%ld\n%ld\n%ld\n", b, a, c);
        newLine;
        printf("%ld\n%ld\n%ld\n", a, b, c);
    }
    else if (b < c < a)
    {
        printf("%ld\n%ld\n%ld\n", b, c, a);
        newLine;
        printf("%ld\n%ld\n%ld\n", a, b, c);
    }
    else if (c < a < b)
    {
        printf("%ld\n%ld\n%ld\n", c, a, b);
        newLine;
        printf("%ld\n%ld\n%ld\n", a, b, c);
    }
    else if (c < b < a)
    {
        printf("%ld\n%ld\n%ld\n", c, b, a);
        newLine;
        printf("%ld\n%ld\n%ld\n", a, b, c);
    }
    return 0;
}