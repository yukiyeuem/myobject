/*XÓA:
xóa phần tử có chỉ số x trong mảng
xóa phần từ từ chỉ số x đến chỉ số y-1 trong mảng
*/

#include<iostream> 
using namespace std;

void nhapmmang(int *&a, int &n){
    for(int i=0;i<n;i++){
        cout<<"nhap so phan tu vo mang"<<endl;
        cin>>a[i];
    }
}

void xuatmang(int *&a,int &n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}

void REALLOC(int *&a,int oldsize,int newsize){
    int *b= new int[oldsize];
    for(int i=0;i<oldsize;i++){
        b[i]=a[i];
    }
    delete []a;
    a= new int[newsize];
    int min = oldsize < newsize ? oldsize : newsize;
    for(int i=0;i<min;i++){
        a[i]=b[i];
    }
    delete []b;
}

void xoaphantumang(int *&a,int &n,int vitrixoa){
    REALLOC(a,n,n-1);
    for(int i=vitrixoa;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
}

void xoanhieuphantu(int *&a,int &n,int vitrixoa1, int sophantuxoa){
    // REALLOC(a,n,n-sophantuxoa);
    for(int m = 0 ; m < sophantuxoa ; m++){
    // for(int i=vitrixoa1;i<n;i++){
    //          a[i]=a[i+1];
    //         }
    //         n--;
        xoaphantumang(a,n,vitrixoa1);
    }
    
}  
    


int main(){
    int n;
    do{
        cout<<"nhap so luong phan tu trong mang"<<endl;
        cin>>n;
        if(n<0){
            cout<<"nhap lai so luong phan tu trong mang"<<endl;
        }
    }while(n<0);
    int *a = new int[n];
    nhapmmang(a,n);
    xuatmang(a,n);
    cout<<endl;

    // int vitrixoa;
    // do{
    //     cout<<"nhap vao vi tri xoa"<<endl;
    //     cin>>vitrixoa;
    //     if(vitrixoa<0||vitrixoa>n-1){
    //         cout<<"nhap lai vi tri xoa"<<endl;
    //     }
    // }while(vitrixoa<0||vitrixoa>n-1);

    // xoaphantumang(a,n,vitrixoa);
    // xuatmang(a,n);


    xoanhieuphantu(a,n,2,3);    
    xuatmang(a,n);

    delete []a;
}