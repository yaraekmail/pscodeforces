#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int s = 1e3;
    int n, a[s];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
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

   for (int i = 0; i < n; i++)
   cout<< a[i]<<" ";
}