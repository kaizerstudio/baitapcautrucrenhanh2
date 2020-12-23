#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float x1,y1,x2,y2,a,r1,r2;
    cout <<"duong tron O1 toa do (x1,y1):"<<endl;
    cin >>x1>>y1;
    cout <<"ban kinh:"<<endl;
    cin >>r1;
    cout <<"duong tron O2 toa do (x2,y2):"<<endl;
    cin >>x2>>y2;
    cout <<"ban kinh:"<<endl;
    cin >> r2;
    a = sqrt(pow(x1-x2,2)+pow(y1-y2,2));    
    if(a == r1-r2 || a == r1+r2 ){
        cout <<"hai duong tron tiep xuc nhau";
    }else if(abs(r1-r2)<a && a<r1+r2){
        cout <<"hai duong tron cat nhau";
    } else {
        cout <<"hai duong tron khong giao nhau";
    }
    return 0;
}