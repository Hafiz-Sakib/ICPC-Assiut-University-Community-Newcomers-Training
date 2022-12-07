#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define space ' '
#define newline "\n"

int main()
{
    Boost;

    long long int size, counter = 0;
    cin >> size;
    long long int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    sort(a, a + size);

    long long int desired, first = 0, last = (size - 1), middle;
    cin >> desired;
    while (first <= last)
    {
        middle = (first + last) / 2;
        if (a[middle] == desired)
        {
            cout << "found" << newline;
            break;
        }
        else if (a[middle] < desired)
        {
            first = middle + 1;
        }
        else
        {
            last = middle - 1;
        }
    }

    if (first > last)
    {
        cout << "not found" << newline;
    }

    return 0;
}