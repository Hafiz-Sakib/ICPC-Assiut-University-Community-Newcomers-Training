#include <stdio.h>
int main()
{
    int a, b, t, r;
    char s, s1;
    scanf("%d %c %d %c %d", &a, &s, &b, &s1, &r);
    if (s == '+')
    {
        t = a + b;
        if (r == t)
        {

            printf("Yes");
        }
        else
        {
            printf("%d", t);
        }
    }
    else if (s == '-')
    {
        t = a - b;
        if (r == t)
        {

            printf("Yes");
        }
        else
        {
            printf("%d", t);
        }
    }

    else if (s == '*')
    {
        t = a * b;

        if (r == t)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", t);
        }
    }

    return 0;
}