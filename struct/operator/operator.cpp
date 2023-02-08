#include<iostream>
using namespace std;

struct PhanSo
{
    int TuSo,MauSo;

};
typedef struct PhanSo PHANSO;

void NhapPhanSo(PHANSO &ps){
    cout<<"nhap vao tu so:"<<endl;
    cin>>ps.TuSo;
    do{
        cout<<"Nhap vao mau so"<<"\t";
        cin>>ps.MauSo;
        if(ps.MauSo==0){
            cout<<"nhap lai phan so"<<endl;
        }

    }while(ps.MauSo==0);
}

PHANSO TinhTong(PHANSO ps1,PHANSO ps2){
    PHANSO Temp;
    Temp.TuSo =ps1.TuSo * ps2.MauSo +ps2.TuSo *ps1.MauSo;
    Temp.MauSo= ps1.MauSo * ps2.MauSo;
    return Temp;
}

int TimUCLN(int a,int b){
    if(a==0&&b!=0){
        return b;
    }else if(a!=0&&b==0){
        return a;
    }
    if(a<0)
    a *=-1;
    if(b<0)
    b*=-1;


    while(a!=b){
        if(a>b){
            a-=b;
        }
        else{
            b-=a;
        }
    }
    return a;
}

void RutGonPhanSo(PHANSO &ps){
    int ucln =TimUCLN(ps.TuSo,ps.MauSo);
    ps.TuSo /= ucln;
    ps.MauSo /= ucln;

}

PHANSO operator +(PHANSO ps1, PHANSO ps2 ){
    PHANSO Temp;
    Temp.TuSo =ps1.TuSo * ps2.MauSo +ps2.TuSo *ps1.MauSo;
    Temp.MauSo= ps1.MauSo * ps2.MauSo;
    return Temp;
}

void XuatPhanSo(PHANSO ps){
    cout<<ps.TuSo<< "/" <<ps.MauSo<<endl;
}

int main(){
    PHANSO ps1,ps2,ps3;
    NhapPhanSo(ps1);
    XuatPhanSo(ps1);

    NhapPhanSo(ps2);
    XuatPhanSo(ps2);
    
    NhapPhanSo(ps3);
    XuatPhanSo(ps3);

    // PHANSO Tong =TinhTong(ps1,ps2);
    PHANSO Tong = ps1 + ps2 +ps3;
    RutGonPhanSo(Tong);
    cout<<"Tong"<<endl;
    XuatPhanSo(Tong);
}