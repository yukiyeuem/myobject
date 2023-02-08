#pragma once
#include<iostream>
using namespace std;

struct MonHoc
{
    char TenMon[30];
    float SoDiem;
    int SoChi;

};
typedef struct MonHoc MONHOC;


void NhapMonHoc(MONHOC &mh){
    fflush(stdin);// xoa bo nho dem
    cout<<"Nhap ten mon hoc:"<<endl;
    gets(mh.TenMon);


    do{
        cout<<"nhap so diem mon hoc:"<<endl;
        cin>>mh.SoDiem;
        if(mh.SoDiem<0||mh.SoDiem>10){
            cout<<"So diem can nhap lai:"<<endl;
        }

    }while(mh.SoDiem<0||mh.SoDiem>10);

    do{
        cout<<"Nhap vao so chi:"<<endl;
        cin>>mh.SoChi;
        if(mh.SoChi<0){
            cout<<"So chi can nhap lai:"<<endl;
        }

    }while(mh.SoChi<0);
}

void XuatMonHoc(MONHOC mh){
    cout<<"Ten mon hoc: "<<mh.TenMon<<endl;
    cout<<"So diem cua mon hoc: "<<mh.SoDiem<<endl;
    cout<<"So tin chi cua mon hoc: "<<mh.SoChi<<endl;
}
