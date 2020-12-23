#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3,a,b,c,p,s,r;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    b = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    c = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    if(a+b>c&&b+c>a&&a+c>b)
    {
        p = (a+b+c)/2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        r = a*b*c/(4*s);
        cout#include<iostream>
#include<iomanip>
using namespace std;
int main(){<<r;
    } else {
        cout<<"No";
    }
    return 0;
}