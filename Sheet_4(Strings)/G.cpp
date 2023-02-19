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
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if ((int)s[i] >= 65 && (int)s[i] <= 91)
        {
            s[i] = tolower(s[i]);
        }
        else if ((int)s[i] >= 97 && (int)s[i] <= 123)
        {
            s[i] = toupper(s[i]);
        }
    }
    cout << s << endl;
}

int main()
{
    Boost;

    Boom();

    return 0;
}
