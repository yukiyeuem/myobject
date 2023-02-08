#include<iostream>
#include"thuvienrealloc.h"
using namespace std;

void nhapmang(int *&a,int&n){
    for(int i=0;i<n;i++){
        cout<<"nhap phan tu"<<endl;
        cin>>a[i];
    }
}

void xuatmang(int *&a,int&n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}

void xoaphantumang(int *&a,int&n,int vitrixoa){
    REALLOC(a,n,n-1);
    for(int i=vitrixoa;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
}

int main(){
    int n;
    cout<<"n"<<endl;
    cin>>n;
    int *a =new int [n];
    nhapmang(a,n);
    xuatmang(a,n);

    cout<<endl;
    xoaphantumang(a,n,2);
    xuatmang(a,n);
    delete []a;
}
