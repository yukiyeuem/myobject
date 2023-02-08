#include<iostream>
using namespace std;
#define max 100

void hoanvi(int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
}

void nhapmang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"nhap cac gia tri trong mang a[]"<<endl;
        cin>>a[i];
    }
}

void xuatmang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"in ra gia tri trong mang"<<a[i]<<endl;
    }
}

void giamdan(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            hoanvi(a[i],a[j]);
            }
        }
    }
}


void saochepmang(int a[],int n,int b[]){
    for(int i =0;i<n;i++){
        if(a[i]>0){
            b[i]=a[i];
        }
    }
}

int main(){
    int a[max];
    int b[max];
    int n;
    do{
        cout<<"nhap gia tri n >0"<<endl;
        cin>>n;
        if(n<0||n>max){
            cout<<"nhap lai gia tri n"<<endl;
        }
    }while(n>max||n<0);
    nhapmang(a,n);
    xuatmang(a,n);
    cout<<"mang xep lai:"<<endl;
    giamdan(a,n);
    xuatmang(a,n);

    saochepmang(a,n,b);
    cout<<b<<endl;
}