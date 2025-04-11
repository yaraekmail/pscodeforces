#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const long long s = 1e5;
    long long a, arr[s], sum = 0;
    cin >> a;
    for (long long i = 0; i < a; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    long long k = abs(sum);
    cout << k;
}