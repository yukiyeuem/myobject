#include<iostream>
using namespace std;

void nhapmang(int a[],int n){
    for(int i =0;i<n;i++){
        cout<<"nhap so cac phan tu trong mang a[]:"<<endl;
        cin>>a[i];
    }
}

void xuatmang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"in ra cac phan tu trong a[]:"<<a[i]<<endl;
    }
}

int vitricuoicung(int a[],int n,int x){
    for(int i = 0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    
    int a[100];
    int n;
    cout<<"nhap vao so luong phan tu trong a[]"<<endl;
    cin>>n;
    nhapmang(a,n);
    xuatmang(a,n);

    int x;
    cout<<"nhap vao ki tu x:"<<endl;
    cin>>x;
    int vitricuoi= vitricuoicung(a,n,x);
    cout<<vitricuoi;
}