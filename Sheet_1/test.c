#include <stdio.h>
int main()
{
    int a, s, p, t, r;
    scanf("%d", &a);
    s = a / 365; /// 1
    p = a % 365; /// 35
    t = p / 30;
    r = p % 30; /// 5
    printf("%d years\n", s);
    printf("%d months\n", t);
    printf("%d days\n", r);

    return 0;
}