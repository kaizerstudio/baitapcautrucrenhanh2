#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,x,y,t,r;
    cout <<"tam O toa do (a,b):"<<endl;
    cin >> a>>b;
    cout <<"ban kinh ="<<endl;
    cin >> r;
    cout <<"diem A toa do (x,y):"<<endl;
    cin >> x>>y;
    t = sqrt(pow(a-x,2)+pow(b-y,2));
    if(t>r){
        cout <<"A khong thuoc duong tron";
    } else {
        cout <<"A thuoc duong tron";
    }
    return 0;
}