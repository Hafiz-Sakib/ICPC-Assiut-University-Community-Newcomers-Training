#include <stdio.h>
int main()
{
    long long int i, a, sum = 0;
    scanf("%lld", &a);
    sum = (a * (a + 1)) / 2; // due to time limit,coudn't used the loop
    printf("%lld", sum);
    return 0;
}