#include<iostream>
using namespace std;

void Nhapmang(int a[],int n){
    for(int i = 0; i<n;i++){
        cout<<"nhap cac phan tu trong mang a"<<endl;
        cin>>a[i];
    }
}

void Xuatmang(int a[],int n){
    for(int i =0;i<n;i++){
        cout<<"in ra phan tu a[i]"<<endl;
        cout<<a[i]<<endl;
    }
}


void ktra(int a[],int n){
    for(int i = 0; i<n;i++){
        if(a[i]%4==0&&a[i]%5!=0){
            cout<<"so chia het cho 4 ma ko chia het cho 5 la:"<<a[i];
        }
    }
}

int main(){
    int a[100];
    int n;
    cout<<"nhap so phan tu n"<<endl;
    cin>>n;
    Nhapmang(a,n);
    Xuatmang(a,n);
    ktra(a,n);
}