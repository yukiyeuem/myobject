#include<iostream>
#include<cstdlib>
using namespace std;
#define max 100
void nhapmang(int *a,int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<"nhap vao a [i]"<<endl;
        cin>>a[i];
        
    }
    
}

void xuatmang(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int main(){
    int n;
    do{
        cout<<"nhap vao n"<<endl;
        cin>>n;
        if(n<0){
            cout<<"nhap lai gia tri n"<<endl;
        }
    }while(n<0);

    int *a;//khai bao
    //a =(int *)malloc(n*sizeof(int));//cap phat bo nho
    //a=(int *)calloc(n,sizeof(int));
    a=(int *)realloc(NULL,n*sizeof(int));// bao goồm tất cả cả thêm bớt phần tử, cấp phát cho bộ nhớ
// malloc mà quên giá trị nhập mảng sẽ in ra phần tử rác
//calloc mà quên giá trị nhập mảng sẽ in ra phần tử 0 bởi vì chỉ
//cần ô đầu tiên trong mangr có giá trị =0 tự khác các giá trị khác =0;
/* 
    realloc có 2 chuc năng:
    1. tạo mới một vùng nhớ
    2. từ một vùng nhớ đã có, có thể gia tăng or giảm bộ nhớ
*/ 

    nhapmang(a,n);
    xuatmang(a,n);

    //gia tăng thêm 1 ô nhớ
    a= (int *)realloc(a,(n+1) * sizeof(int));
    a[n]=69;
    cout<<a[n];

    free(a);
}