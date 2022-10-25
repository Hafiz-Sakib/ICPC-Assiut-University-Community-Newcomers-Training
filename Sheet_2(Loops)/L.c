#include <stdio.h>
int main()
{
    int n1, n2, t1, t2, rem;
    scanf("%d%d", &n1, &n2);
    t1 = n1;
    t2 = n2;

    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    printf("%d", n1);

    return 0;
}