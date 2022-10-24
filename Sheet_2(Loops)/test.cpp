

#include <iostream>
using namespace std;

int main()
{

    int i, j, primeNum;
    bool isPrim = true;

    cin >> primeNum;

    for (i = 2; i <= primeNum; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrim = false;
            }
        }

        if (isPrim == true)
        {
            cout << i << " ";
        }

        isPrim = true;
    }

    return 0;
}
