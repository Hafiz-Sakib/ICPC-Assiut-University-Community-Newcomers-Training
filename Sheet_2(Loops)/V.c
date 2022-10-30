#include <stdio.h>
int main()
{
    int t, z = 1;
    scanf("%d", &t);

    while (t--)
    {
        printf("%d %d %d PUM\n", z, z + 1, z + 2);
        z += 4;
    }
    return 0;
}
