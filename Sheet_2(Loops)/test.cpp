using namespace std;
#include <bits/stdc++.h>
int main()
{

    int x, y;
    cin >> x >> y;
    int check = 0;
    for (int i = x; i <= y; i++)
    {
        int temp = i;
        int flag = 1;
        while (temp > 0)
        {
            int digit = temp % 10;
            temp /= 10;
            if (digit == 4 || digit == 7)
                continue;
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << i << " ";
            check = 1;
        }
    }
    if (!check)
        cout << -1 << "\n";

    return 0;
}