#include<iostream>
using namespace std;
#define Max 50

void ThemPhanTu(int a[],int &n, int vitrithem,int phantuthem){
    for(int i = n-1 ; i>=vitrithem ; i--){
        a[i+1]=a[i];
    }
    a[vitrithem]=phantuthem;
    n++;
}

void XoaPhanTu(int a[],int &n,int vitrixoa){
    for(int i=vitrixoa+1;i<n;i++){
        a[i-1]=a[i];
    }
    n--;
}

void XoaCacSoChan(int a[],int &n){
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            XoaPhanTu(a,n,i);
            
        }
    }
}

void ThemSauTatCaSoLe(int a[],int&n){
    for(int i =0;i<n;i++){
        if(a[i]%2!=0){
            ThemPhanTu(a,n,i+1,0);
        }
    }
}

void NhapMang(int a[],int n){
    for(int i = 0; i<n;i++){
        cout<<"nhap a[i]:"<<"\n";
        cin>>a[i];
    }
}

void XuatMang(int a[] , int n ){
    for(int i =0;i < n;i++){
        cout<<a[i]<<"\n";
    }
}

int main(){
    int a[Max];
    int n;
    do{
        cout<<"nhap so luong phan tu n:"<<"\n";
        cin>>n;
        if(n<0||n>Max){
            cout<<"nhap lai n duong:"<<"\n";
        }
    }while(n<0||n>Max);
    cout<<"mang ban dau la:"<<"\n";
    NhapMang(a,n);
    // XuatMang(a,n);
    // ThemPhanTu(a,n,0,69);
    // XuatMang(a,n);
    // XoaPhanTu(a,n,3);
    // XuatMang(a,n);
    XoaCacSoChan(a,n);
    XuatMang(a,n);
    ThemSauTatCaSoLe(a,n);
    XuatMang(a,n);
}
