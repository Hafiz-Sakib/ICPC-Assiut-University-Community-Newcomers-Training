#include <stdio.h>
int main()
{
    char symbol;
    int a;
    scanf("%c %d", &symbol, &a);
    int temp;
    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);
        while (b--)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}