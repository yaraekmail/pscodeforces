
#include <iostream>
using namespace std;
int main()
{
    long long n, k, c[10000], con = 0;
    cin >> n;
    cout << " ";
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        if (c[i] > 0)
            con++;
    }

    if (con)
    {
        con = 0;

        for (int d = 0; d < n; d++)
        {

            if (c[d] > 0 && c[d] >= c[k - 1])
                con++;
        }
        cout << con;
    }
    else
        cout << 0;
}