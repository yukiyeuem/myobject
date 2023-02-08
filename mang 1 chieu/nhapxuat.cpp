#include<iostream>
#include<math.h>
using namespace std;
#define max 100
void NhapMang(int a[],int n){
    for(int i=0; i<n;i++){
        cout<<"nhap so phan tu a[i]:";
        cin>>a[i];
    }
}

void XuatMang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}

int maxarr(int a[],int n){
    int maxarr =a[0];
    for(int i = 1;i<n;i++){
        if(maxarr<a[i]){
            maxarr=a[i];
        }
    }
    return maxarr;
}

void Ktramangchan(int a[],int n){
    for(int i = 0;i<n;i++){
        if(a[i]%2==0){
            cout<<a[i]<<"\n";
        }
    }

}

void Mangtang(int a[],int n){
    for(int i =0; i<n;i++){
        for(int j=i+1;i<n-1;j++){
            if(a[i]<a[j]){
                cout<<"tang dan";
            }else{
                cout<<"ko phai tang dan";
            }
        }
    }
}


int main(){
    int a[max];
    int n;
    cout<<"nhap so phan tu n:"<<"\n";
    cin>>n;
    NhapMang(a,n);
    XuatMang(a,n);
    int maxmang= maxarr(a,n);
    cout<<"in ra max mang:"<<maxmang;
    cout<<"in so chan mang ra:"<<"\n";
    Ktramangchan(a,n);
    cout<<"ktra xem mang tang hay ko"<<"\n";
    Mangtang(a,n);

}