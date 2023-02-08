#include<iostream>
using namespace std;
#define max 100

void nhapmang(int a[][max],int dong,int cot){
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

void hoanvi(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void hoanvidong(int a[][max],int cot, int dong1,int dong2 ){
    for(int j=0;j<cot;j++){
        hoanvi(a[dong1][j],a[dong2][j]);
    }
}

void themdong(int a[][max],int &dong,int cot,int b[],int vitrithemdong){
    dong++;
    for(int j=0;j<cot;j++){
        a[dong-1][j]=b[j];
    }
    for(int i=dong-1;i>vitrithemdong;i--){
        hoanvidong(a,cot,i,i-1);
    }
}

void hoanvicot(int a[][max], int dong, int cot1, int cot2 ){
    for(int i=0;i<dong;i++){
        hoanvi(a[i][cot1],a[i][cot2]);
    }
}

void themcot(int a[][max],int dong,int &cot,int b[],int vitrithem){
    cot++;
    for(int i=0;i<dong;i++){
        a[i][cot-1]=b[i];
    }
    for(int j=cot-1;j>vitrithem;j--){
        hoanvicot(a,dong,j,j-1);
    }
}

int main(){
    int a[max][max];
    int dong,cot;
    cout<<"nhap so dong"<<endl;
    cin>>dong;
    cout<<"nhap so cot"<<endl;
    cin>>cot;
    nhapmang(a,dong,cot);
    xuatmang(a,dong,cot);
    cout<<endl;
    int b[] ={2,5,8};// nếu thiếu nó sẽ điền thêm số đúng bằng số dong
    // themdong(a,dong,cot,b,2);
    // xuatmang(a,dong,cot);
    // cout<<endl;
    int c[]={2,5};// neu thieu phan tu thi no dieu them phan tu = dung so cot
    themcot(a,dong,cot,b,2);
    xuatmang(a,dong,cot);

    return 0;
}