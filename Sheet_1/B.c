#include <stdio.h>
int main()
{
    int a;
    long long b;
    char c[500];
    float d;
    double e;

    scanf("%i%lld", &a, &b);
    gets(c);
    scanf("%f%lf", &d, &e);
    printf("%i\n,%lld\n,%c\n,%f\n,%lf\n", a, b, c, d, e);

    return 0;
}
