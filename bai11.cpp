#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    unsigned short n;
    float a;
    cin>>n;
    if(1<=n&&n<=5){
        a = n*6500;
        cout<<fixed<<setprecision(2)<<a<<endl;
        cout<<fixed<<setprecision(2)<<a*12/100<<endl;
        cout<<fixed<<setprecision(2)<<a+a*12/100;
    }else if(6<=n&&n<=15){
        a = 5*6500+(n-5)*7800;
        cout<<fixed<<setprecision(2)<<a<<endl;
        cout<<fixed<<setprecision(2)<<a*12/100<<endl;
        cout<<fixed<<setprecision(2)<<a+a*12/100;
    }else if(16<=n&&n<=25){
        a = 5*6500+10*7800+(n-15)*9200;
        cout<<fixed<<setprecision(2)<<a<<endl;
        cout<<fixed<<setprecision(2)<<a*12/100<<endl;
        cout<<fixed<<setprecision(2)<<a+a*12/100;
    }else {
        a = 5*6500+10+7800+10*9200+(n-25)*10300;
        cout<<fixed<<setprecision(2)<<a<<endl;
        cout<<fixed<<setprecision(2)<<a*12/100<<endl;
        cout<<fixed<<setprecision(2)<<a+a*12/100;
    }
    return 0;
}