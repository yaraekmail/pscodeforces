#include <iostream>
using namespace std;
int main()
{
    int x;
    string s;
    cout << "enter the the word";
    cin >> s;
    cout << "choose what you want \n 1-the word  is capital letter \n 2-the word  is small letter ";
    cin >> x;
    if (x == 1)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (int(s[i]) < 97)
                s[i] = s[i];
            else
                s[i] = (int(s[i]) - 32);
        }
        cout << s;
    }
    else if (x == 2)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (int(s[i]) >= 97)
                s[i] = s[i];
            else
                s[i] = (int(s[i]) + 32);
        }
        cout << s;
    }
    else
        cout << "try again";
}