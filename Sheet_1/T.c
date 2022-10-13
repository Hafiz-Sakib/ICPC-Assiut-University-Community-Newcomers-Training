#include <stdio.h>
#define newLine printf("\n")

int main()
{
    long long int x, y, z;
    scanf("%ld%ld%ld", &x, &y, &z);

    if (x < y < z)
    {
        printf("%ld\n%ld\n%ld\n", x, y, z);
        newLine;
        printf("%ld\n%ld\n%ld\n", x, y, z);
    }
    else if (x < z < y)
    {
        printf("%ld\n%ld\n%ld\n", x, z, y);
        newLine;
        printf("%ld\n%ld\n%ld\n", x, y, z);
    }
    else if (y < x < z)
    {
        printf("%ld\n%ld\n%ld\n", y, x, z);
        newLine;
        printf("%ld\n%ld\n%ld\n", x, y, z);
    }
    else if (y < z < x)
    {
        printf("%ld\n%ld\n%ld\n", y, z, x);
        newLine;
        printf("%ld\n%ld\n%ld\n", x, y, z);
    }
    else if (z < x < y)
    {
        printf("%ld\n%ld\n%ld\n", z, x, y);
        newLine;
        printf("%ld\n%ld\n%ld\n", x, y, z);
    }
    else if (z < y < x)
    {
        printf("%ld\n%ld\n%ld\n", z, y, x);
        newLine;
        printf("%ld\n%ld\n%ld\n", x, y, z);
    }
    return 0;
}