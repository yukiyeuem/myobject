#include<iostream>
#include<math.h>
using namespace std;
#define max 100

void nhapmang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"nhap vao so luong phan tu trong mang"<<endl;
        cin>>a[i];
    }
}

void xuatmang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int ktrasongto(int n){
    int dem = 0;
    for(int i= 1; i<=sqrt(n);i++){
        if(n%i==0){
            dem++;
        } 
    }
    if(dem<2){
        return 0;
    }
    return 1;
}

int tongsonggto(int a[],int n){
    int tong =0;
    for(int i=0;i<n;i++){
        if(ktrasongto(a[i])==0){
            tong+=a[i];
        }
    }
    return tong;
}

int timvitriphantuxuathienlandau(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[max];
    int n;
    cin>>n;
    nhapmang(a,n);
    xuatmang(a,n);
    int tongngto = tongsonggto(a,n);
    cout<<tongngto;
    int x;
    cout<<"nhap phan tu x"<<endl;
    cin>>x;
    int vitricuoi =timvitriphantuxuathienlandau(a,n,x);
    cout<<vitricuoi;
}