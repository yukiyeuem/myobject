#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"nhap 2 so a va b:";
    cin>>a>>b;
    if(a==0){
        if(b==0){
            cout<<"ptrinh vo so nghiem";
        }else{
            cout<<"ptrinh vo nghiem";
        }
    }else{
        cout<<"phuong trinh co nghiem"<<float(-b/a);
    }

    return 0;
}