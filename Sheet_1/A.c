#include <stdio.h>
int main()
{
    char name[5000];
    gets(name);
    // scanf("%s", &name);
    printf("Hello, %s", name);
    return 0;
}