#include <stdio.h>
int main()
{
    double n, k, a, r;
    scanf("%lf%lf%lf", &n, &k, &a);

    r = (n * k) / a;

    long long int temp = r;
    double myRes = r - temp;

    if (myRes > 0)
    {
        printf("Double");
        }
    else if (temp <= 2147483647)
    {
        printf("int");
    }

    else
    {
        printf("long long");
    }

    return 0;
}