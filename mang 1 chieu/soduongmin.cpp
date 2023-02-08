#include<iostream>
using namespace std;
#define max 100

void NhapMang(int a[max],int n){
    for(int i=0;i<n;i++){
        cout<<"nhap vao so luong mang"<<endl;
        cin>>a[i];
    }
}

void XuatMang(int a[max],int n){
    for(int i=0;i<n;i++){
        cout<<"in ra phan tu "<<i<<":"<<a[i]<<endl;
    }
}

int duongmin(int a[max],int n){
    int min;
    for(int i=0;i<n;i++){
        if (a[i]>0)
        {
            for(int j=i+1;j<n-1;j++){
                if(a[j]>0){
                    if(a[i]<a[j]){
                        min=a[i];
                    }
                }
               
            }
        }
        
    }
    return min;
}

int main(){
    int a[max];
    int n;
    cout<<"nhap so luong phan tu"<<endl;
    cin>>n;
    NhapMang(a,n);
    XuatMang(a,n);

    int min =duongmin(a,n);
    cout<<"min duong la"<<min;
}