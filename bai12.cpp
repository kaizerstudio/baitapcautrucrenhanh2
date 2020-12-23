#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double n,a,b;
    cin>>n;
    a = n*10/11;
    b = n/11;
    cout<<fixed<<setprecision(2)<<a;
    cout<<fixed<<setprecision(2)<<" "<<b;
    return 0;
}