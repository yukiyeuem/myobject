#pragma once
#include<iostream>
using namespace std;

struct MonHoc{
    char TenMonHoc[30];
    float DiemMonHoc;
    int SoTinChi;
};
typedef struct MonHoc MONHOC;

void NhapMonHoc(MONHOC &mh){
    cout<<"nhap ten mon hoc:"<<endl;
    cin>>mh.TenMonHoc;

    do{
        cout<<"Nhap diem cua mon hoc:"<<endl;
        cin>>mh.DiemMonHoc;
        if(mh.DiemMonHoc<0||mh.DiemMonHoc>10){
            cout<<"Nhap lai so diem cua mon hoc:"<<endl;
        }

    }while(mh.DiemMonHoc<0||mh.DiemMonHoc>10);


    do{
        cout<<"Nhap so tin chi:"<<endl;
        cin>>mh.SoTinChi;
        if(mh.SoTinChi<0){
            cout<<"Nhap lai so tin chi"<<endl;
        }

    }while(mh.SoTinChi<0);
}

void XuatMonHoc(MONHOC mh){
    cout<<"Ten mon hoc:"<<mh.TenMonHoc<<endl;
    cout<<"So Diem :"<<mh.DiemMonHoc<<endl;
    cout<<"So tin chi:"<<mh.SoTinChi<<endl;
}