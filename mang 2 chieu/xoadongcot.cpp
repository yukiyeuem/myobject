#include<iostream>
using namespace std;
#define max 100

void nhapmang(int a[][max],int dong,int cot){
    for(int i=0;i<dong;i++){
        for(int j=0;j<cot;j++){
            cout<<"nhap gia tri vao mang"<<endl;
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

void hoanvidong(int a[][max],int cot,int dong1,int dong2){
    for(int j=0;j<cot;j++){
        hoanviphantu(a[dong1][j],a[dong2][j]);
    }
}

void hoanvicot(int a[][max],int dong,int cot1,int cot2){
    for(int i=0;i<dong;i++){
        hoanviphantu(a[i][cot1],a[i][cot2]);
    }
}

void xoadong(int a[][max],int &dong,int cot, int vitridongxoa){
    for(int i=vitridongxoa;i<dong-1;i++){
        hoanvidong(a,cot,i,i+1);
    }
    dong--;
}

void xoacot(int a[][max],int dong,int &cot,int vitrixoa){
    for(int j=vitrixoa;j<cot-1;j++){
        hoanvicot(a,dong,j,j+1);
    }
    cot--;
}

// void themdong(int a[][max],int &dong,int cot,int b[],int vitridongthem){
//     dong++; 
//     for(int j=0;j<cot;j++){
//         a[dong-1][j]=b[j];
//     }
//     for(int i=dong-1;i>vitridongthem;i--){
//         hoanvidong(a,cot,i,i-1);
//     }
// }

int main(){
    int a[max][max];
    int dong,cot;
    cout<<"nhap dong,cot"<<endl;
    cin>>dong>>cot;
    nhapmang(a,dong,cot);
    xuatmang(a,dong,cot);
    cout<<endl;
    xoadong(a,dong,cot,1);
    xuatmang(a,dong,cot);
    cout<<endl;
    xoacot(a,dong,cot,1);
    xuatmang(a,dong,cot);
    cout<<endl;
                       
    return 0;
}