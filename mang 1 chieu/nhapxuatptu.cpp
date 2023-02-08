#include<iostream>
using namespace std;
#define MAX 50
void NhapMang(int a[MAX],int n){
    //nhap mang
    for(int i = 0; i<n;i++){
        cout<<"nhap vao a[i]"<<"\n";
        cin>>a[i];
    }
}
void XuatMang(int a[MAX],int n){
    cout<<"mang la:"<<"\n";
    for(int i = 0; i<n;i++){
        cout<<a[i];
    }
}
int main(){
    int n;//so luong phan tu trong mang do
    int a[MAX];
    do{
        cout<<"nhap n:"<<"\n";
        cin>>n;
        if(n<0||n>MAX){
            cout<<"nhap lai n duong:"<<"\n";
        }
    }while(n<0||n>MAX);
    NhapMang(a,n);
    XuatMang(a,n);

}