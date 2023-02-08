#include<iostream>
using namespace std;
int GiaiThua(int n){
    int result =1;
    for(int i=1; i<=n;i++){
        result *=i;
    }
    return result;
}

void Nhap(int &a){
    
    do{
        cout<<"nhap gia tri n>0:";
        cin>>a;
        if(a<=0){
            cout<<"Nhap lai gia tri a:";
        }
    }while (a<=0);
}

int main(){
    int d,b,c;
    Nhap(d);
    Nhap(b);
    Nhap(c);
    int sum =GiaiThua(d)+GiaiThua(b)+GiaiThua(c);
    cout<<sum;
    return 0;
}