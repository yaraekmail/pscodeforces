#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int w = 1e6;
    int n, sum = 0;
    cin >> n;
    string arr;
    cin >> arr;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i] - '0';
    }
    cout << sum;
}