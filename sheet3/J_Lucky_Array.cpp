#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int s = 1e5;
    int n, a[s], con = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[0])
            con++;
    }
    if (con == 0)
        cout << "Lucky";
    else if (con % 2 != 0)
        cout << "Lucky";
    else
        cout << "Unlucky";
}