#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    while (1)
    {

        int n, m, sum = 0, i;
        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0)
        {
            break;
        }

        int mini = min(m, n);
        int maxi = max(m, n);

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