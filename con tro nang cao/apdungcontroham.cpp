#include<iostream>
using namespace std;

int TinhTong(int a,int b){
    return a+b;
}

int TinhHieu(int a,int b){
    return a-b;
}

int TinhTich(int a,int b){
    return a*b;
}

int TinhThuong(int a,int b){
    return a/b;
}
int main(){
    int a=6;
    int b=3;
    int (*Pointer)(int ,int);// tao con tro ham
    Pointer =TinhTong; // tro toi ham tinh tong
    
    //lay ket qua xuat ra man hinh
    int kq = Pointer(a,b);
    cout<<"tong la:"<<kq<<endl;

    Pointer =TinhHieu;
    int kq2 =Pointer(a,b);
    cout<<"Hieu la:"<<kq2;

}