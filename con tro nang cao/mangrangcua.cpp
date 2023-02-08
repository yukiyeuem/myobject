#include<iostream>
using namespace std;

void Nhapmangrangcua(int **a,int dong,int *cot){
    for(int i=0;i<dong;i++){
        for(int j=0;j<cot[i];j++){
            cout<<"nhap vao so phan tu cua mang"<<endl;
            cin>>a[i][j];
        }
    }
}

void Xuatmang(int **a,int dong,int *cot){
    for(int i=0;i<dong;i++){
        for(int j=0;j<cot[i];j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    int dong=3;
    int *cot = new int[dong];
    int **a = new int*[dong];
    for(int i=0;i<dong;i++){
        cout<<"ban muon tren dong " <<i<<" co bao nhieu cot"<<endl;
        cin>>cot[i];
        a[i]=new int[cot[i]];
    }
    Nhapmangrangcua(a,dong,cot);
    Xuatmang(a,dong,cot);

    for(int i=0 ;i<dong;i++){
        delete [] a[i];
    }
    delete []a;
}