#include <stdio.h>
#include <string.h>
int main()
{
    int frnd, taka, i, tstcase, t;
    scanf("%d", &tstcase);
    for (i = 1; i <= tstcase; i++)
    {
        scanf("%d%d", &taka, &frnd);
        if ((1000 * frnd) <= taka)
        {
            printf("Case %d: VIP\n", i);
        }
        else if ((800 * frnd) <= taka)
        {
            printf("Case %d: Regular\n", i);
        }
        else if ((500 * frnd) <= taka)
        {
            printf("Case %d: Local\n", i);
        }
        else
        {
            printf("Case %d: Aske amar mon valo nei :(\n", i);
        }
    }
    return 0;
}