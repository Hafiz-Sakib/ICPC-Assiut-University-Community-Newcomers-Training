#include <stdio.h>
#include <string.h>
int main()
{
    char F1[100], S1[100];
    char F2[100], S2[100];

    scanf("%s", &F1);
    scanf("%s", &S1);
    scanf("%s", &F2);
    scanf("%s", &S2);
    int result = strcmp(S1, S2);

    if (result == 0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }

    return 0;
}