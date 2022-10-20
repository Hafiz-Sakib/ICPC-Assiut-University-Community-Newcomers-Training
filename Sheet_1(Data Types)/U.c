#include <stdio.h>
#include <math.h>

int main()
{
    float a, decpart;
    int intpart;
    scanf("%f", &a);

    int x = ceil(a);
    if (x == a)
    {
        printf("int %d", x);
    }
    else
    {
        intpart = floor(a);
        decpart = a - intpart;
        printf("float %d %.3f", intpart, decpart);
    }

    return 0;
}