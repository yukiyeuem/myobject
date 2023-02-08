#pragma once
#include<iostream>
#include"monhoc.h"
#define MAX 10000
using namespace std;

struct DanhSachMonHoc{
    int n;
    MONHOC *arr;
};
typedef struct DanhSachMonHoc DANHSACHMONHOC;


 

void NhapDanhSachMonHoc(DANHSACHMONHOC &ds){
    do{
        cout<<"Nhap so luong mon hoc:"<<endl;
        cin>>ds.n;
        if(ds.n<0){
            cout<<"Nhap lai so luong mon hoc:"<<endl;
        }
    }while(ds.n<0);

    // CAP PHAT BO NHO
    ds.arr= new MONHOC[MAX];
    for(int i=0;i<ds.n;i++){
        cout<<"Nhap mon hoc thu "<<i+1<<endl;
        NhapMonHoc(ds.arr[i]);
    }
} 

void XuatDanhSachMon(DANHSACHMONHOC &ds){
    // CAP PHAT BO NHO
    // ds.arr= new MONHOC[MAX];
    for(int i=0;i<ds.n;i++){
        
        XuatMonHoc(ds.arr[i]);
    }
}

