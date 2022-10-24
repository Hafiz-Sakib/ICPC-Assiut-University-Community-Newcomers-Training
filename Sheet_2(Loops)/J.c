#include <stdio.h>
int prime(int num);
int prime(int num)
{

    int div = num / 2;
    for (int i = 2; i <= div; i++)
    {
        if (num % i == 0)
        {
            return -1;
        }
    }
    return num;
}

int main()
{

    int counter;
    scanf("%d", &counter);

    for (int i = 2; i <= counter; i++)
    {
        int result = prime(i);
        if (result != -1)
        {
            printf("%d ", result);
        }
    }

    return 0;
}