#include <iostream>

using namespace std;

int main()
{
    long long t_size, n_limit, s_sum, sum, j, sub;
    cin >> t_size;
    for (int i = 0; i < t_size; i++)
    {
        cin >> n_limit >> s_sum;
        j = n_limit;
        sum = s_sum;
        if (n_limit * (n_limit + 1) < s_sum) // print -1 if imposible
            cout << -1 << endl;
        else
        {
            for (int j = n_limit; j > 0; j--)
            {
                if (sum - j >= 0)
                {
                    if (0 <= sum)
                    {
                        cout << j << " ";
                        sum -= j;
                    }
                }
                if (0 == sum)
                    break;
            }
        }
        cout << endl;
    }
}
