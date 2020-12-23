#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(a/d==b/e){
        if(b/e&&a/d!=c/f){
        cout<<"song song";
        } else {
            cout<<"trung nhau";
        }
    }else {
        cout<<fixed<<setprecision(3)<<(c*e-f*b)/(a*e-d*b)<<endl;
        cout<<fixed<<setprecision(3)<<(c*d-f*a)/(d*b-a*e)<<endl;
    }
    return 0;
}