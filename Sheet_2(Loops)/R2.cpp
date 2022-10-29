#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    while (1)
    {

        int m, n, sum = 0, i;
        cin >> m >> n;

        if (m <= 0 || n <= 0)
        {
            break;
        }

        else
        {
            int mini = min(m, n);
            int maxi = max(m, n);

            for (i = mini; i <= maxi; i++)
            {
                sum += i;
                cout << i << " ";
            }

            cout << "sum =" << sum;
        }
        cout << endl;
    }

    return 0;
}