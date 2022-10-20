#include <stdio.h>
int main()
{
    int a, r, t;
    scanf("%d", &a);
    r = a / 10;
    t = a % 10;
    /*  printf("%d\n", r);
     printf("%d", t); */

    if (t % r == 0 || r % t == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}