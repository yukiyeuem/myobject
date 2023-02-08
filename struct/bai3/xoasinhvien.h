#pragma once
#include<iostream>
#include"nhaplophoc.h"
// #include"thuvienrealloc.h"
using namespace std;

void XoaSinhVien(LopHoc &lh,int vitrixoa){
    for(int i=vitrixoa+1;i<lh.n;i++){
        lh.sv[i-1]=lh.sv[i];
    }
    lh.n--;
    int *LOPHOC= new int[lh.n-1];
    cout<<"danh sach lop hoc sau khi xoa la:"<<endl;
    XuatLopHoc(lh);

}

void XoaSinhVienDuaTrenMaSo(LOPHOC &lh,char *MaSo){
    for(int i=0;i<lh.n;i++){
        if(strcmp(lh.sv[i].MaSo,MaSo)==0){
            XoaSinhVien(lh,i);
            break;
        }
    }
}

int KiemTraBiRotMon(SINHVIEN sv){
    for(int i=0;i<sv.danhsachmonhoc.n;i++){
        if(sv.danhsachmonhoc.arr[i].DiemMonHoc<5){
            return 1;
        }
    }
    return 0;
}

void XoaSinhVienBiRotMon(LOPHOC &lh){
    for(int i=0;i<lh.n;i++){
        if(KiemTraBiRotMon(lh.sv[i])==1){
            XoaSinhVien(lh,i);
            i--;
        }
    }
}