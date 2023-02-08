#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"nhap n:";
    cin>>n;
    if(n>0){
        int a=sqrt(n);
        if(a*a==n){
            cout<<"n la so chinh phuong";
        }else{
            cout<<"n ko la so chinh phuong";
        }
    }else{
        cout<<"nhap lai so nguyen duong n:";
    }
    return 0;
}