/* Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.
 */

#include <stdio.h>
int main()
{
    long long int X, Y, sum, multi, subs;
    scanf("%lld%lld", &X, &Y);
    sum = X + Y;
    multi = X * Y;
    subs = X - Y;

    printf("%lld + %lld = %lld\n", X, Y, sum);
    printf("%lld * %lld = %lld\n", X, Y, multi);
    printf("%lld - %lld = %lld\n", X, Y, subs);

    return 0;
}