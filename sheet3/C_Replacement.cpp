#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const long long s = 1e3;
    long long a, arr[s];
    cin >> a;
    for (long long i = 0; i < a; i++)
    {
        cin >> arr[i];
        
    }
    for(long long i = 0; i < a; i++){
        if(arr[i]>=1)
        cout<<'1'<<" ";
        else if(arr[i]<0)
         cout<<'2'<<" ";
        else
         cout<<'0'<<" ";

    }
  
}