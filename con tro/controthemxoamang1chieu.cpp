#include<iostream>
using namespace std;


void nhapmang(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<"nhap so phan tu vao mang"<<endl;
        cin>>a[i];
    }
}

void xuatmang(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}

void REALLOC(int *&a,int oldsize,int newsize){
    int *b = new int[oldsize];
    for(int i=0;i<oldsize;i++){
        b[i]=a[i];
    }
    delete []a;
    a = new int[newsize];
    int min = oldsize < newsize ? oldsize : newsize;
    for(int i=0;i<min;i++){
        a[i]=b[i];
    }
    delete []b;
}

void themphantu(int *&a,int &n,int vitrithem,int phantuthem){
    REALLOC(a,n,n+1);
    for(int i=n-1;i>=vitrithem;i--){
        a[i+1]=a[i];
    }
    a[vitrithem]=phantuthem;
    n++;
}

void xoaphantu(int *&a,int &n,int vitrixoa){
    REALLOC(a,n,n-1);
    for(int i=vitrixoa+1;i<n;i++){
        a[i-1]=a[i];
    }
    n--;
}

int main(){
    
    int n;
    do{
        cout<<"nhap so phan tu trong mang"<<endl;
        cin>>n;
        if(n<0){
            cout<<"nhap lai so phan tu n"<<endl;
        }
    }while(n<0);

    int *a= new int[n];

    nhapmang(a,n);
    xuatmang(a,n);
    cout<<endl;
    int vitrithem;
    do{
        cout<<"nhap vi tri them"<<endl;
        cin>>vitrithem;
        if(vitrithem<0||vitrithem >n){
            cout<<"nhap lai vi tri them"<<endl;
        }
    }while(vitrithem<0||vitrithem >n);

    int phantuthem;
    cout<<"nhap vao phan tu them"<<endl;
    cin>>phantuthem;

    themphantu(a,n,vitrithem,phantuthem);
    xuatmang(a,n);

    cout<<endl;

    int vitrixoa;
    do{
        cout<<"nhap vi tri xoa"<<endl;
        cin>>vitrixoa;
        if(vitrixoa < 0||vitrixoa > n){
            cout<<"nhap lai vi tri xoa"<<endl;
        }
    }while(vitrixoa < 0||vitrixoa > n);

    xoaphantu(a,n,vitrixoa);
    xuatmang(a,n);

    delete []a;
}