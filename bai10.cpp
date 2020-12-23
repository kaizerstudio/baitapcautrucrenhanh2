#include<iostream>
using namespace std;
int main(){
    float n,a;
    cin>>n;
    if(n<=100){
        a = n*550;
        cout <<a+a/10;
    }else if(101<=n&&n<=150){
        a = 100*550+(n-100)*1100;
        cout <<a+a/10;
    }else if(151<=n&&n<=200){
        a = 100*550+50*1100+(n-150)*1470;
        cout<<a+a/10;
    }else {
        a = 100*550+50*1100+50*1470+(n-200)*1600;
        cout<<a+a/10;
    }
    return 0;
}