/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

void Boom()
{
    string s;
    cin >> s;
    if (s.size() <= 10)
    {
        cout << s << endl;
    }
    else
    {
        cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
    }
}

int main()
{
    Boost;
    int t;
    cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
