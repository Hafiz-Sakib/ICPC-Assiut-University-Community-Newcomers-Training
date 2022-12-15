/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

int main()
{
    Boost;

    string str1, str2;
    cin >> str1 >> str2;
    if (str1.compare(str2) < 0)
    {
        cout << str1;
    }
    else if (str1.compare(str2) == 0)
    {
        cout << str1;
    }
    else if (str1.compare(str2) > 0)
    {
        cout << str2;
    }
    return 0;
}
