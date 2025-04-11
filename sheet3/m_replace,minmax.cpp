#include <iostream>
using namespace std;

int main()
{
    int const a = 1e3;
    int n, arr[a];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    int ma = arr[1], ma1 = 1, mi = arr[1], mi1 = 1;
    for (int i = 1; i <= n; i++)
    {
        if (mi > arr[i])
        {
            mi = arr[i];
            mi1 = i;
        }
        else if (ma < arr[i])
        {
            ma = arr[i];
            ma1 = i;
        }
    }
    arr[ma1] = mi;
    arr[mi1] = ma;
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
}