#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 1; j--)
        {
            cout << " ";
        }
        for (int j = 0; j < x; j++)
        {
            cout << "*";
        }
        x += 2;
        cout << endl;
    }
    x -= 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 0; j < x; j++)
        {
            cout << "*";
        }
        x -= 2;
        cout << endl;
    }
    return 0;
}