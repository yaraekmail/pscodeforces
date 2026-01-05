https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/H
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b)<<" ";
    cout << lcm(a, b);
    return 0;

}
