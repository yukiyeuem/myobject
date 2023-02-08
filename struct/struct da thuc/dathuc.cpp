#include<iostream>
using namespace std;
struct DaThuc{
    int n;// bac cao nhat
    float *HeSo;

};
typedef struct DaThuc DATHUC;
void NhapDaThuc(DATHUC *x){
    do{
        cout<<"Nhap vao so bac cua da thuc"<<endl;
        cin>>x->n;

        if(x->n <1){
            cout<<"nhap lai so bac cua da thuc"<<endl;
        }

    }while(x->n <1);

    x->HeSo = new float [x->n +1];
    for(int i =0;i<=x->n;i++){
        cout<<"nhap vao he so thu i"<<endl;
        cin>>x->HeSo[i];
    }
}

void XuatDaThuc(DATHUC *x){
    for(int i=0;i<x->n;i++){
        cout<<x->HeSo[i]<<"*x^"<<i << " + ";

    }
    cout<<x->HeSo[x->n]<<"*x^"<<x->n<<endl;
}

int main(int argc, char **argv){
    DATHUC *x= new DaThuc;
    NhapDaThuc(x);
    XuatDaThuc(x);

    delete x;
    
    return 0;
}