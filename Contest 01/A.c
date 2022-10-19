#include <stdio.h>
int main()
{

    int p, fakePrice;
    float realPrice;
    scanf("%d %d", &p, &fakePrice);

    realPrice = ((100 * 1.0 * fakePrice) / (100 - p));

    printf("%.2f", realPrice);

    return 0;
}