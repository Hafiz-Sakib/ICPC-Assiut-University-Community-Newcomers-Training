#include <stdio.h>
#include <math.h>
int main()
{
    float a, b;
    float s1, s2, s3;
    int ro, ce, fl;
    scanf("%f%f", &a, &b);
    s1 = a / b;
    s2 = a / b;
    s3 = a / b;
    ro = round(s1);
    ce = ceil(s2);
    fl = floor(s3);
    printf("floor %d/ %d = %d\n", a, b, fl);
    printf("ceil %d / %d = %d\n", a, b, ce);
    printf("round %d / %d = %d\n", a, b, ro);

    return 0;
}