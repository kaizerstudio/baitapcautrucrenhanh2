#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"chi sp dien ke thang nay: ";
    cin >>a;
    cout<<"chi so dien ke thang truoc: ";
    cin >>b;
    c= a-b;
    if(c<=60){
        cout<<c*1000;
    }else if(61<=c&&c<=120){
        cout<<60*1000+(c-60)*1200;
    }else if(121<=c&&c<=300){
        cout<<60*1000+60*1200+(c-120)*2000;
    }else{
        cout<<60*1000+60*1200+180*2000+(c-300)*4000;
    }
    return 0;
}