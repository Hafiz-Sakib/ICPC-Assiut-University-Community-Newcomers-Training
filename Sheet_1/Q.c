#include <stdio.h>
int main()
{
    float q1, q2;
    scanf("%f%f", &q1, &q2);

    if (q1 > 0 && q2 > 0)
    {
        printf("Q1");
    }
    else if (q1 < 0 && q2 > 0)
    {
        printf("Q2");
    }
    else if (q1 < 0 && q2 < 0)
    {
        printf("Q3");
    }
    else if (q1 > 0 && q2 < 0)
    {
        printf("Q4");
    }
    else if (q1 == 0 && q2 == 0)
    {
        printf("Origem");
    }
    else if ((q1 > 0 && q2 == 0) || ((q1 < 0 && q2 == 0)))
    {
        printf("Eixo X");
    }
    else if ((q1 == 0 && q2 > 0) || (q1 == 0 && q2 < 0))
    {
        printf("Eixo Y");
    }
    return 0;
}