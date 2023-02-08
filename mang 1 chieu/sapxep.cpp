#include<iostream>
using namespace std;
#define Max 50
void NhapMang(int a[],int n){
    for(int i = 0; i < n; i++)
    {
        cout<<"nhap gia tri a[i]:"<<"\n";
        cin>>a[i];
    }
    
}

void XuatMang(int a[],int n){
    for(int i= 0; i<n;i++){
        cout<<a[i]<<'\n';
    }
}

void Hoanvi(int &a,int &b){
    a=a-b;
    b=a+b;
    a=b-a;
}
void InterchangeSort(int a[],int n,char Phanbiet){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(Phanbiet=='t'){
                if(a[i]>a[j]){
                    Hoanvi(a[i],a[j]);
                }
            }else if(Phanbiet=='g'){
                if(a[i]<a[j]){
                    Hoanvi(a[i],a[j]);
                }
            }
        }
    }
}

int main(){
    int n;
    int a[Max];
    do{
        cout<<"nhap so phan tu n:"<<"\n";
        cin>>n;
        if(n<0||n>Max){
            cout<<"Nhap lai:";
        }
    }while(n<0||n>Max);
    NhapMang(a,n);
    cout<<"xuat mang luc dau:"<<"\n";
    XuatMang(a,n);
    cout<<"xuat mang sau khi thay doi tang dan:"<<"\n";
    InterchangeSort(a,n,'t');
    XuatMang(a,n);
    cout<<"xuat mang sau khi thay doi giam dan:"<<"\n";
    InterchangeSort(a,n,'g');
    XuatMang(a,n);

}