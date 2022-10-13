
#include <stdio.h>

int main()
{
    int n1, n2, n3;

    // ask the user for the 3 numbers
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // we'll store the numbers according to their order in these variables
    int lowest, middle, highest;

    // n1 is the lowest number
    if (n1 <= n2 && n1 <= n3)
    {
        lowest = n1;

        // figure out the remaining order between n2 and n3
        if (n2 <= n3)
        {
            middle = n2;
            highest = n3;
        }
        else
        {
            middle = n3;
            highest = n2;
        }
    }
    // n2 is the lowest number
    else if (n2 <= n1 && n2 <= n3)
    {
        lowest = n2;

        // figure out the remaining order between n1 and n3
        if (n1 <= n3)
        {
            middle = n1;
            highest = n3;
        }
        else
        {
            middle = n3;
            highest = n1;
        }
    }
    // n3 is the lowest number
    else
    {
        lowest = n3;

        // figure out the remaining order between n1 and n2
        if (n1 <= n2)
        {
            middle = n1;
            highest = n2;
        }
        else
        {
            middle = n2;
            highest = n1;
        }
    }

    printf("\n\n");

    // output the numbers in ascending and descending order
    printf("%d\n%d\n%d\n\n", lowest, middle, highest);
    printf("%d\n%d\n%d\n\n", n1, n2, n3);

    return 0;
}