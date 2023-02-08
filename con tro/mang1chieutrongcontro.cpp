#include<iostream>
using namespace std;


void nhapmang(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<"nhap vao cac phan tu trong mang"<<endl;
        cin>>a[i];
    }
}

void xuatmang(int *a,int n){
    for(int i =0;i<n;i++){
         cout<<a[i]<<"\t";
    }    
}

int sum(int *a,int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    return sum;
}

int main(){
    int *a= new int;
    int n;
    do{
        cout<<"nhap vao so phan tu trong mang"<<endl;
        cin>>n;
        if(n<0){
            cout<<"nhap lai so phan tu n"<<endl;
        }
    }while(n<0);
    nhapmang(a,n);
    xuatmang(a,n);
    cout<<endl;
    int tongmang =sum(a,n);
    cout<<"tong mang la:"<<tongmang;

    delete []a;
}