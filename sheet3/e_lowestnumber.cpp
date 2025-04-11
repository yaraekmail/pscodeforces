#include <iostream>
using namespace std;

int main()
{
    int const a = 1e3;
    int n, arr[a];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    int l = arr[1], c = 1;
    for (int i = 1; i <= n; i++)
    {
        if (l > arr[i])
        {
            l = arr[i];
            c = i;
        }
    }
    cout << l << " " << c;
}