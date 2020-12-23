#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float x1,x2,y1,y2,R1,R2,d;
    cin>>x1>>x2>>R1>>y1>>y2>>R2;
    d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    if(d==0){
        cout <<abs(R1-R2);
    } else if(abs(R1-R2)<d&&d<R1+R2){
        cout <<(d-R1-R2)/2;
    } else if(abs(R1-R2)==d||R1+R2==d){
        cout <<"0";
    } else if(d>R1+R2){
        cout <<d-R1-R2;      
    } else {
        cout <<abs(R1-R2)-d;
    }
    return 0;
}