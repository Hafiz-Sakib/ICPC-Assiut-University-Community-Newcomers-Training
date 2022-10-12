#include <iostream>
using namespace std;
int main()
{
    int n, m, d;
    cin >> n;
    cout << (n / 365) << " years" << endl;
    m = n % 365;
    cout << (m / 30) << " months" << endl;
    d = m % 30;
    cout << d << " days" << endl;

    return 0;
}