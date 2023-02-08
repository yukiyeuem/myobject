#include<iostream>
using namespace std;
#define max 100

void nhapmang(int a[][max],int dong,int cot){
    for(int i=0;i<dong;i++){
        for(int j=0;j<cot;j++){
            cout<<"nhap cac so vao mang"<<endl;
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

void dongchuaphantu(int a[][max],int cot,int chisodong,int chisocot){
    for(int j=0;j<cot;j++){
        cout<<a[chisodong][j]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<cot;i++){
        cout<<a[i][chisocot]<<"\t";
    }
//     if(a[i][chisocot]==a[chisodong][j]){
//         cout<<a[i][j]<<endl;
//     }
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

    return 0;
}