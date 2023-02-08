/* đề bài:THÊM:
y/c1:thêm phẩn tử có giá trị y vào chỉ số x trong mảng
y/c2:thêm y lần phần tử có giá trị z vào chỉ số x trong mảng
*/
#include<iostream>
using namespace std;

void nhapmang(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<"nhap so phan tu trong mang a"<<endl;
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
    a= new int [newsize];
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

void themphantunhieulan(int *&a,int &n,int vitrithem,int phantuthem,int solanthem){
    REALLOC(a,n,n+solanthem);
    for(int i=0;i<solanthem;i++){
        for(int i=n-1;i>=vitrithem;i--){
            a[i+1]=a[i];
        }
        a[vitrithem]=phantuthem;
        n++;
    }
    
}


int main(){
    int n;
    do{
        cout<<"nhap so luong phan tu trong mang"<<endl;
        cin>>n;
        if(n<0){
            cout<<"nhap lai so luong phan tu"<<endl;
        }

    }while(n<0);
    
    int *a;
    a= new int[n];

    nhapmang(a,n);
    xuatmang(a,n);

    cout<<endl;

    int vitrithem;
    do{
        cout<<"nhap vi tri them"<<endl;
        cin>>vitrithem;
        if(vitrithem<0||vitrithem>n){
            cout<<"nhap lai vi tri them"<<endl;
        }

    }while(vitrithem<0||vitrithem>n);

    int phantuthem;
    cout<<"nhap phan tu them"<<endl;
    cin>>phantuthem;
    
    themphantu(a,n,vitrithem,phantuthem);
    xuatmang(a,n);
    cout<<endl;

    int solanthem;
    do{
        cout<<"nhap so lan them"<<endl;
        cin>>solanthem;
        if(solanthem<0){
            cout<<"nhap lai so lan them"<<endl;
        }

    }while(solanthem<0);

    themphantunhieulan(a,n,vitrithem,phantuthem,solanthem);
    xuatmang(a,n);

    cout<<endl;

    delete[]a;
}