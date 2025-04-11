#include <iostream>
using namespace std;
int main()
{
    const int i = 1e3;
    int a, count = 1;
    int s[i];
    cin >> a;
    for (int i = 0; i < a; i++)
        cin >> s[i];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - 1; j++)
            if (s[j] > s[j + 1])
            {
                int temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
    }
    for (int i = 1; i < a; i++)

        if (s[i] != s[i - 1])
        {
            count++;
        }

    cout << count;
}
