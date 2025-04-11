#include<iostream>
using namespace std;
int main(){
int n,x,l;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x;
    l=1;
    for(int i=1;i<=x;i++)
l*=i;
cout<<l<<endl;
}
}