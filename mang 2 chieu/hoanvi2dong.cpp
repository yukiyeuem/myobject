#include<iostream>
using namespace std;
#define max 100

void nhapmang(int a[][max],int dong, int cot){
    for(int i=0;i<dong;i++){
        for(int j=0;j<cot;j++){
            cout<<"nhap cac phan tu vao mang"<<endl;
            cin>>a[i][j];
        }
    }
}

void xuatmang(int a[][max],int dong,int cot){
    for(int i=0;i<dong;i++){
        for(int j=0;j<cot;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void hoanviphantu(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void hoanvidong(int a[][max],int cot , int dong1, int dong2){
    for(int j=0;j<cot;j++){
        hoanviphantu(a[dong1][j],a[dong2][j]);
    }
}

void hoanvicot(int a[][max],int dong,int cot1, int cot2){
    for(int i=0;i<dong;i++){
        hoanviphantu(a[i][cot1],a[i][cot2]);
    }
}

int main(){
    int a[max][max];
    int dong,cot;
    cout<<"nhap so dong va so cot"<<endl;
    cin>>dong>>cot;

    nhapmang(a,dong,cot);
    xuatmang(a,dong,cot);
    cout<<endl;
    hoanvidong(a,cot,0,2);
    xuatmang(a,dong,cot); 
    cout<<endl;
    hoanvicot(a,cot,0,2);
    xuatmang(a,dong,cot); 
    return 0;
}