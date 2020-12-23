#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float Xa,Ya,Xb,Yb,Xc,Yc,a,b,c,cv,p,s;
    cin >>Xa>>Ya>>Xb>>Yb>>Xc>>Yc;
    a = sqrt(pow(Xb-Xc,2)+pow(Yb-Yc,2));
    b = sqrt(pow(Xa-Xc,2)+pow(Ya-Yc,2));
    c = sqrt(pow(Xa-Xb,2)+pow(Ya-Yb,2));
    if(a+b<c||a+c<b||b+c<a){
        cout <<"No";
    } else{
        cv = a+b+c;
        p = cv/2;
        s =sqrt(p*(p-a)*(p-b)*(p-c));
        cout <<cv<<endl;
        cout <<s<<endl;
    }
    return 0;
}