#include<iostream>
using namespace std;
int main(){
    int a= 650000;
    int b,c,d,e,f;
    b = a*4.5/100+a;
    c = b*4.5/100+b;
    d = c*4.5/100+c;
    e = d*4.5/100+d;
    f = e*4.5/100+e;
    cout <<"nam thu nhat: "<<b<<endl;
    cout <<"nam thu hai: "<<c<<endl;
    cout <<"nam thu ba: "<<d<<endl;
    cout <<"nam thu tu: "<<e<<endl;
    cout <<"nam thu nam: "<<f<<endl;
    return 0;
}