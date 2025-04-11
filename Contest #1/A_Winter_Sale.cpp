#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double x,p,c;
cin>>x>>p;
c=p/(1-(x/100));
cout<<fixed<<setprecision(2)<<c;
}