#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    int tstcase, i, size, j, count = 0;
    scanf("%d", &tstcase);
    for (i = 1; i <= tstcase; i++)
    {
        scanf("%d", &size);
        int a[size];
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a, a + size);
        for (i = 0; i < 1; i++)
        {
            for (j = 1; j < size; j++)
            {
                if (a[i] < a[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
        if (count == (size - 1))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}