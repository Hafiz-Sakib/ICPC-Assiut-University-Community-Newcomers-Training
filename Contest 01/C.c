#include <stdio.h>
int main()
{
    char a, r;
    int t;
    scanf("%c", &a);
    t = a;
    if (t >= 97 && t < 122)
    {
        t = t + 1;
        printf("%c", t);
    }
    else if (t == 122)
    {
        t = 97;
        printf("%c", t);
    }
    return 0;
}