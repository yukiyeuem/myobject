#include<iostream>

using namespace std;

void nhapmang(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<"nhap vao phan tu mang"<<endl;
        cin>>a[i];
    }
}

void xuatmang(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}


void hoanvi(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

bool lonhon(int a,int b){
    return a>b;
}

bool nhohon(int a,int b){
    return a<b;
}

void sapxep(int *a,int n,bool(*sosanh)(int ,int)){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(sosanh(a[i],a[j])==true){
                hoanvi(a[i],a[j]);
            }
        }
    }
}

int Timphantuthoamanyeucau(int *a,int n,bool(*sosanh)(int ,int)){
    int x=a[0];
    for(int i=1;i<n;i++){
            if(sosanh(a[i],x)==true){
                x=a[i];
            
        }
    }
    return x;
}

int main(){
    int *a;
    int n=5;
    a= new int[5];
    nhapmang(a,n);
    xuatmang(a,n);
    cout<<endl;
    cout<<"phan tu tang dan la"<<endl;
    sapxep(a,n,lonhon);
    xuatmang(a,n);
    cout<<endl;
    cout<<"phan tu giam dan la"<<endl;
    sapxep(a,n,nhohon);
    xuatmang(a,n);
    cout<<endl;
    cout<<"phan tu lon nhat trong mang la:"<<endl;
    int max = Timphantuthoamanyeucau(a,n,lonhon);
    cout<<"max ="<<max<<endl;

    cout<<"phan tu nho nhat trong mang la"<<endl;
    int min = Timphantuthoamanyeucau(a,n,nhohon);
    cout<<"Min="<<min<<endl;
    delete []a;
}