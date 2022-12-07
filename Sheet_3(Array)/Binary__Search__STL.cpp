/// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, i;
    cin >> n >> k;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    while (k--)
    {
        int x;
        cin >> x;
        if (binary_search(arr, arr + n, x))
        {
            cout << "found" << '\n';
        }
        else
        {
            cout << "not found" << '\n';
        }
    }
}