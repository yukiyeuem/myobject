#include<iostream>
#include<math.h>
using namespace std;
#define max 100

void NhapMang(int a[],int n){

    for(int i=0;i<n;i++){
        cout<<"Nhap phan tu trong mang:"<<endl;
        cin>>a[i];
    }
}
void XuatMang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"Xuat phan tu trong mang:"<<a[i]<<endl;
    }
}

int tong(int a[],int n){
    int tong=0;
    for(int i=0;i<n;i++){
        tong+=a[i];
    }
    return tong;
}

// chia het 4 va ko chia het cho 5

int chiaHet(int a[],int n){
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]%4==0 && a[i]%5!=0){
            dem++;
        }       
    }
    return dem;
}

int  Tongsongto(int a[],int n){
    int tong = 0;
    for(int i=0;i<n;i++){
        if(a[i]==1||a[i]==2){
            cout<<a[i];
        }
        int dem =0;
        for(int j=2;j<=sqrt(a[i]);j++){
            if(a[i]%j==0){
                dem++;
            }
        }
        if(dem<1){
            cout<<a[i];
        }
        tong+=a[i];
    }
    return tong;
}



int main(){
    int a[max];
    int n;

    do{
        cout<<"nhap n:"<<endl;
        cin>>n;
        if(n<0){
            cout<<"Nhap lai so luong phan tu:"<<endl;
            cin>>n;
        }
    }while(n<0);

    NhapMang(a,n);
    XuatMang(a,n);
    
    int tong= Tongsongto(a,n);
    cout<<tong<<endl;
}




