#pragma once
#include<iostream>

#include"danhsachmonhoc.h"
using namespace std;

struct SinhVien{
    char MaSo[10];
    char Ten[50];
    DANHSACHMONHOC danhsachmon;
};
typedef struct SinhVien SINHVIEN;

void NhapSinhVien(SINHVIEN &sv){
//    fflush(stdin);
//    cout<<"nhap vao ma so:"<<endl;
//    gets(sv.MaSo);

   fflush(stdin);
   cout<<"Nhap vao ten sinh vien:"<<endl;
   gets(sv.Ten);

   cout<<"Nhap vao danh sach mon hoc:"<<endl;
   NhapDanhSachMonHoc(sv.danhsachmon);
}

void XuatSinhVien(SINHVIEN sv){
    cout<<"Xuat ra ma so:"<<"\t"<<sv.MaSo<<endl;
    cout<<"Xuat ra tern sinh vien"<<"\t"<<sv.Ten<<endl;
    cout<<"Xuat ra danh sach mon hoc:"<<endl;
    XuatDanhSachMon(sv.danhsachmon);
}


float TinhDiemTrungBinh(SINHVIEN sv){
    float TongDiem =0;
    int TongChi=0;
    for(int i=0;i<sv.danhsachmon.n;i++){
        TongDiem += (sv.danhsachmon.arr[i].SoDiem * sv.danhsachmon.arr[i].SoChi);
        TongChi += sv.danhsachmon.arr[i].SoChi;
    }
    return TongDiem / TongChi;
     
}

char* XepLoai(SINHVIEN sv){
    float Dtb = TinhDiemTrungBinh(sv);
    if(Dtb<2)
    {
        return (char*)"Kem";
    }
    if(Dtb<5)
    {
        return (char*)"Yeu";
    }
    if(Dtb<7)
    {
        return (char*)"Trung Binh";
    }
    if(Dtb<8){
        return (char*)"Kha";
    }
    if(Dtb<9)
    {
        return (char*)"Gioi";
    }
    return (char*)"Xuat sac";
}