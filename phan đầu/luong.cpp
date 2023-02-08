#include<iostream>
using namespace std;
#define luongGoc 65000
int main(){
    int n;
    float heSo;


    cout<<"nhap n:";
    cin>>n;
    if(n<12){
        heSo=1.92;
        cout<<"luong nhan duoc:"<<heSo*luongGoc;
    }else if(n>=12&&n<36){
        heSo=2.34;
        cout<<"luong nhan duoc:"<<heSo*luongGoc;
    }else if(n>=36&&n<60){
        heSo=3;
        cout<<"luong nhan duoc:"<<heSo*luongGoc;
    }else{
        heSo=4.5;
        cout<<"luong nhan duoc:"<<heSo*luongGoc;
    }

    return 0;
}