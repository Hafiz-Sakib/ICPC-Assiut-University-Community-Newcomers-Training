#include <iostream>
using namespace std;
int main()
{
    int x, y, counter = 0;
    cin >> x >> y;
    for (int i = x; i <= y; i++)
    {
        int n = i;
        bool s = 0;
        while (n != 0)
        {

            short m = n % 10;
            n /= 10;
            if (m != 4 && m != 7)
            {
                s = 1;
            }
        }
        if (s == 0)
        {
            cout << i << " ";
            counter++;
        }
    }
    if (counter == 0)

        cout << "-1";

    return 0;
}