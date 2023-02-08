// tra ve con tro ham

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


int (*tinhtoan(char pheptoan))(int ,int){
        if(pheptoan == '+'){
            return TinhTong;
        }else if(pheptoan == '-'){
            return TinhHieu;
        }else if(pheptoan == '*'){
            return TinhTich;
        }
    return TinhThuong;     
}

int main(){
    int kq;
    int a=6;
    int b=3;
    
    //tao 1 con tro ham de nhan con tro ham tra ve
    int (*pointer)(int ,int);
    while(true){
    char pheptoan;
    cout<<"nhap vao phep toan:"<<endl;
    cin>>pheptoan;
    pointer = tinhtoan(pheptoan);
    kq=pointer(a,b);
    cout<<"ket qua cua phep toan la:"<<kq<<endl;
    }
}
