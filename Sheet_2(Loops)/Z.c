#include <stdio.h>
int main()
{
    int k, s;
    scanf("%d %d", &k, &s);

    int i = k + s;
    while (1)
    {

        if (i % 3 == 0)
        {
            printf("%d", i);
            break;
        }
        i++;
    }

    return 0;
}