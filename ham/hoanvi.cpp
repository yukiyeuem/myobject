#include<iostream>
using namespace std;

void hoanvi(int a,int b){
    int temp = a;
    a=b;
    b=temp;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}

int main(){
    int a,b;
    cout<<"nhap a"<<endl;
    cin>>a;
    cout<<"nhap b"<<endl;
    cin>>b;
    hoanvi(a,b);
    
}