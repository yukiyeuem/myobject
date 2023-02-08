#include<iostream>
using namespace std;
#define max 100

void nhapmang(int a[][max],int dong ,int cot){
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

//neu tang dan tra ve 1, nguoc lai tra ve 0
int ktradongtangdan(int a[][max],int chisodong,int cot){
    for(int j=1;j<cot;j++){
        if(a[chisodong][j]<a[chisodong][j-1]){
            return 0;
        }
    }
    return 1;
}

void ktratungdong(int a[][max],int dong,int cot){
    for(int i=0;i<dong;i++){
        if(ktradongtangdan(a,i,cot)==1){
            cout<<"dong tang dan"<<"\t";
        }else{
            cout<<"dong ko tang dan";
        }
    }
}



int main(){
    int a[max][max];
    int dong,cot;
    cout<<"nhap gia tri dong,cot"<<endl;
    cin>>dong>>cot;
    nhapmang(a,dong,cot);
    xuatmang(a,dong,cot);
    ktratungdong(a,dong,cot);
}