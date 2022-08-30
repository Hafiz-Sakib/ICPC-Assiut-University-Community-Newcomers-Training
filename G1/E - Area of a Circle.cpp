#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     cout << fixed << setprecision(9);
     long double a,r;
    const double pi = 3.141592653;
    cin >> r;
    a = pi*(r*r);
    cout <<a;
    return 0; 
}
