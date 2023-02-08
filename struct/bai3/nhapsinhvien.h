#pragma once
#include<iostream>
#include"nhapdanhsachmonhoc.h"
using namespace std;

struct SinhVien{
    char MaSo[30];
    char TenSinhVien[30];
   
    DANHSACHMONHOC danhsachmonhoc;
};
typedef struct SinhVien SINHVIEN;
float DiemTrungBinh(SINHVIEN sv);
char *XepLoai(SINHVIEN sv);


void NhapSinhVien(SINHVIEN &sv){
    // fflush(stdin);
    // cout<<"Nhap ma so sinh vien:"<<endl;
    // cin>>sv.MaSo;

    fflush(stdin);
    cout<<"Nhap ten sinh vien:"<<endl;
    gets(sv.TenSinhVien);


    cout<<"Nhap danh sach mon hoc:"<<endl;
    NhapDanhSachMonHoc(sv.danhsachmonhoc);



}

void XuatSinhVien(SINHVIEN sv){
    cout<<"Xuat ma so sinh vien:"<<sv.MaSo<<endl;
    cout<<"Xuat Ten sinh vien:"<<sv.TenSinhVien<<endl;
    cout<<"xuat Danh sach mon hoc:"<<endl;
    XuatDanhSachMonHoc(sv.danhsachmonhoc);
    cout<<"Diem trung binh:"<<DiemTrungBinh(sv)<<endl;
    cout<<"Xep loai sinh vien:"<<XepLoai(sv)<<endl;
}

float DiemTrungBinh(SINHVIEN sv){
    float TongDiem =0;
    int TongSoTinChi=0;
    for(int i=0;i<sv.danhsachmonhoc.n;i++){
        TongDiem +=sv.danhsachmonhoc.arr[i].DiemMonHoc * sv.danhsachmonhoc.arr[i].SoTinChi;
        TongSoTinChi +=sv.danhsachmonhoc.arr[i].SoTinChi;
    }
    return TongDiem/TongSoTinChi;

}

char *XepLoai(SINHVIEN sv){
    float Dtb =DiemTrungBinh(sv);
    if(Dtb<2){
        return (char *)"Kem";
    }
    if(Dtb<5){
        return (char *)"Yeu";
    }
    if(Dtb<7){
        return (char *)"Trung binh";
    }
    if(Dtb<8){
        return (char *)"Kha";
    }
    if(Dtb<9){
        return (char *)"Gioi";
    }
    return (char *)"Xuat sac";
}