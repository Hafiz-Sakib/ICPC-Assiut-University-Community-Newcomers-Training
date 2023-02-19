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
    string s, a, b;
    cin >> s;
    if (s.size() & 1)
    {
        sort(s.begin(), s.end());
        cout << s << endl;
        return;
    }
    else
    {
        for (int i = 1; i <= s.size(); i++)
        {
            if (i <= s.size() / 2)
            {
                a += s[i];
                sort(a.begin(), a.end());
            }
            else
            {
                b += s[i];
                sort(b.begin(), b.end());
            }
        }
        s = a + b;
        cout << s << endl;
    }
}

int main()
{
    Boost;

    Boom();

    return 0;
}
