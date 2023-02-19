
/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"
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
    bool ok = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == '1' and s[i + 1] == '0' and s[i + 2] == '1') || (s[i] == '0' and s[i + 1] == '1' and s[i + 2] == '0'))
        {
            ok = 1;
        }
    }
    if (ok)
    {
        cout << "Good" << endl;
    }
    else
    {
        cout << "Bad" << endl;
    }
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
