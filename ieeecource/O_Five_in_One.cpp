#include <bits/stdc++.h>
using namespace std;
const int n = 1e3;
int palindrome_number(int arr[], int &x)
{
    int p = 0, digit, rev, top;
    for (int i = 0; i < x; i++)
    {
        rev = 0;
        top = arr[i];
        if (arr[i] >= 1 && arr[i] < 10)
            p++;
        else
        {
            while (arr[i] != 0)
            {
                digit = arr[i] % 10;
                rev = (rev * 10) + digit;
                arr[i] = arr[i] / 10;
            }
            if (top == rev)
                p++;
        }
    }
    return p;
}
int divisors_number(int s[], int &x)
{
    int num = 0, k = 0, top = 0;
 
    for (int i = 0; i < x; i++)
    {
        k = 0;
 
        for (int j = 1; j <= s[i]; j++)
        {
            if (s[i] % j == 0)
                k++;
        }
        if (k > num || (k == num && s[i] > top))
        {
            num = k;
            top = s[i];
        }
    }
    return top;
}
 
int prime_number(int arr[], int &x)
{
    int q = 0, p = 0;
    for (int i = 0; i < x; i++)
    {
        q = 0;
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
                q++;
        }
        if (arr[i] > 1 && q == 0)
        {
            p++;
        }
    }
    return p;
}
int maximum_number(int arr[], int &x)
{
    int max = arr[0];
    for (int i = 0; i < x; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int minimum_number(int arr[], int &x)
{
    int min = arr[0];
    for (int i = 0; i < x; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
int main()
{
 
    int x, arr[n], s[n], max = 0, mk = 0;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
        s[i] = arr[i];
    }
 
    cout << "The maximum number : " << maximum_number(arr, x) << endl;
    cout << "The minimum number : " << minimum_number(arr, x) << endl;
    cout << "The number of prime numbers : " << prime_number(arr, x) << endl;
    cout << "The number of palindrome numbers : " << palindrome_number(arr, x) << endl;
    cout << "The number that has the maximum number of divisors : " << divisors_number(s, x) << endl;
}