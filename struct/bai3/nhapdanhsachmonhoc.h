#pragma once
#include<iostream>
#include"nhapmonhoc.h"
#define max 10000
using namespace std;

struct DanhSachMonHoc{
    int n;
    MONHOC *arr;
};
typedef struct DanhSachMonHoc DANHSACHMONHOC;

void NhapDanhSachMonHoc(DANHSACHMONHOC &ds){
    cout<<"nhap so luong mon hoc:"<<endl;
    cin>>ds.n;
    ds.arr= new MONHOC[max];
    for(int i=0;i<ds.n;i++){
        cout<<"Nhap mon hoc thu "<<i+1<<endl;
        NhapMonHoc(ds.arr[i]);
    }
}

void XuatDanhSachMonHoc(DANHSACHMONHOC ds){
    for(int i=0;i<ds.n;i++){
        cout<<"Xuat mon hoc thu "<<i+1<<endl;
        XuatMonHoc(ds.arr[i]);
    }
}

