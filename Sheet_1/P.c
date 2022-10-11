#include <stdio.h>
int main()
{
    int num, first;
    scanf("%d", &num);
    first = num;
    while (first > 9)
    {
        first = first / 10;
    }

    if (first % 2 != 0)
    {
        printf("ODD");
    }
    else
    {
        printf("EVEN");
    }
    return 0;
}