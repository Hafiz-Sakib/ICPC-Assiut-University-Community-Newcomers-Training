#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    while (1)
    {

        int n, m, sum = 0, i;
        scanf("%d %d", &n, &m);

        if (n <= 0 || m <= 0)
        {
            break;
        }

        int mini = min(n, m);
        int maxi = max(n, m);

        for (i = mini; i <= maxi; i++)
        {
            sum += i;
            printf("%d ", i);
        }
        printf("sum =%d", sum);
        printf("\n");
    }

    return 0;
}