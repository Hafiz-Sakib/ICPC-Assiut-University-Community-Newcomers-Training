#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define cY cout << "YES\n"
#define cN cout << "NO\n"
#define cy cout << "Yes\n"
#define cn cout << "No\n"
#define space ' '
#define newline "\n"
#define read3         \
    long int a, b, c; \
    cin >> a >> b >> c;
#define read2      \
    long int a, b; \
    cin >> a >> b;
#define read1   \
    long int a; \
    cin >> a;
#define write1 cout << a << newline;
#define write2 cout << a << newline << b << newline;
#define write3 cout << a << newline << b << newline << c << newline;
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
int main()
{
    Boost;

    long long int size, numbers;
    cin >> size >> numbers;
    long long int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    sort(a, a + size);

    while (numbers--)
    {

        long long int desired, first = 0, last = (size - 1), middle;
        cin >> desired;
        while (first <= last)
        {
            middle = (first + last) / 2;
            if (a[middle] == desired)
            {
                //  cout << "location is : " << middle + 1 << newline;
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
    }

    return 0;
}