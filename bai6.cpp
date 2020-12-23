#include<iostream>
using namespace std;
int main(){
    int n;
    float h,k,a;
    cin>>n>>h>>k;
    a = 2*n*h*k;
    if(1<=a&&a<=99){
        cout<<a<<"X dong";
    }else if(100<=a&&a<=200){
        cout<<a<<"Y dong";
    }else {
        cout<<a<<"Z dong";
    }
    return 0;
}