#include<iostream>
#include<cstdlib>
using namespace std;

void nhapmang(int *&a,int n){
    a= new int;
    for(int i=0;i<n;i++){
        cout<<"nhap vao cac phan tu"<<endl;
        cin>>a[i];
    }
}

void xuatmang(int *a, int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int tong(int *a,int n){
    int tong=0;
    for(int i=0;i<n;i++){
        tong +=a[i];
    }
    return tong;
}

void hoanvi(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

int timMax(int *a,int n){
    int max =a[0];
    for(int i=0;i<n;i++){
        if(a[i]>a[0]){
            max=a[i];
        }
    }
    return max;
}

int *timMin(int *a,int n){
    int *min=&a[0];
    for(int i=0; i<n;i++){
        if(a[i]<a[0]){
            *min=a[i];
        }
    }
    return min;
}

void Sapxepmang(int *a,int n,char phanloai){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(phanloai=='t'||phanloai=='T'){
                if(a[i]>a[i+1]){
                    hoanvi(&a[i],&a[i+1]);
                }
            }else if(phanloai=='g'||phanloai=='G'){
                if(a[i]<a[i+1]){
                    hoanvi(&a[i],&a[i+1]);
                }
            }
        }
    }
}

void Themphantu(int *a,int n,int vitrithem,int phantuthem){

    for(int i=n-1;i>=vitrithem;i--){
        a[i+1]=a[i];
    }
    a[vitrithem]=phantuthem;
    n++;
}

int main(){
    int n;
    do{
        cout<<"nhap gia tri n"<<endl;
        cin>>n;
        if(n<0){
            cout<<"nhap lai n duong"<<endl;
        }
    }while(n<0);

    // int *a = (int*)malloc(n*sizeof(int));
    int *a;
    a = new int[n];
    
    nhapmang(a,n);
    xuatmang(a,n);
    
    // int sum = tong(a,n);
    // cout<<sum<<endl;

    // int c=2;
    // int b=1;
    // hoanvi(&c,&b);
    // cout<<c<<b<<endl;
    
    // int maxx=timMax(a,n);
    // cout<<maxx<<endl;

    // int min =*timMin(a,n);
    // cout<<min<<endl;

    

    // char phanloai;
    // cout<<"nhap ki tu vao"<<endl;
    // cin>>phanloai;
    // if(phanloai=='t'||phanloai=='T'){
    //     Sapxepmang(a,n,phanloai);
    //     xuatmang(a,n);
    // }else{
    //     Sapxepmang(a,n,phanloai);
    //     xuatmang(a,n);
    // }
    
    Themphantu(a,n,3,4);
    xuatmang(a,n);
    
    free(a);//c1 dung cho c
    delete []a;//c2 dung cho c++ giải phóng bộ nhớ sau khi sử dụng
    
}