#include<iostream>
#include"thuvienrealloc.h"
using namespace std;

void nhapmang(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<"nhap mang"<<endl;
        cin>>*(a+i);
    }
}

void xuatmang(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<endl;
    }
}

// void REALLOC(int *&a,int oldsize,int newsize){
//     int *b = new int(oldsize);
//     for(int i=0;i<oldsize;i++){
//         b[i]=a[i];
//     }
//     delete []a;
//     a = new int(newsize);

//     int min = oldsize<newsize ? oldsize:newsize;
//     for(int i=0;i<min;i++){
//         a[i]=b[i];
//     }
//     delete []b;
// }

void themphantu(int *&a,int &n, int vitrithem,int phantuthem){
    REALLOC(a,n,n+1);
    for(int i=n-1;i>=vitrithem;i--){
        a[i+1]=a[i];
    }
    a[vitrithem]=phantuthem;
    n++;
}

int main(){
    int n;
    cin>>n;
    int *a= new int[n];

    nhapmang(a,n);
    xuatmang(a,n);

    themphantu(a,n,3,8);
    xuatmang(a,n);

    delete []a;   
    
    
}


//tao realloc trong c++
// mực đích vừa để gia tăng vừa để để giảm bớt
// void REALLOC    (int *&a, int oldsize, int newsize){
    
//     //b1: tao 1 mang moi la ban sao cua mang cu roi do du lieu sang
//     int *b=  new int [oldsize];
//     for(int i=0;i<oldsize;i++){
//         b[i]=a[i];
//     }

//     //b2: xoa mảng cũ đi
//     delete []a;
//     a= new int [newsize];

//     //b3: đổ dữ liệu từ mảng tạm sang mảng mới
//     int Min =oldsize < newsize ? oldsize:newsize;
//     for(int i=0;i<Min;i++){
//         a[i]=b[i];
//     }
//     //b4: xoa mang tam di
//     delete []b;
// } 