#include<iostream>
#include<limits.h>
using namespace std;

void nhapmang(int a[],int n){
    for(int i = 0;i<n;i++){
        cout<<"nhap vao cac phan tu trong a[]:"<<endl;
        cin>>a[i];
    }
}

void xuatmang(int a[],int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int TimDuongMin_Cach2(int a[],int n){
    int Min = INT_MAX;
    int check = 0;//kiem tra co so duong hay ko
    for(int i =0;i<n;i++){
        if(a[i]>=0){
            check=1;
                if(a[i]<Min){
                    Min=a[i];
                }
        }
    }
    if(check == 0){
        return -1;
    }
    return Min; 
}

int main(){
    int a[100];
    int n;
    cout<<"nhap vao so n"<<endl;
    cin>>n;
    nhapmang(a,n);
    xuatmang(a,n);
    int  timsoduong = TimDuongMin_Cach2(a,n);
    cout<<timsoduong;
}