#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, s[3];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> s[j];
        for (int i = 0; i < 3; i++) // sort
        {
            for (int j = 0; j < 2; j++)
                if (s[j] > s[j + 1])
                {
                    int temp = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = temp;
                }
        }
        cout << s[1] << endl;
    }
}
