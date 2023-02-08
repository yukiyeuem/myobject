#pragma once
#include<iostream>
#include"nhaplophoc.h"
// #include"thuvienrealloc.h"
using namespace std;

void ThemSinhVien(LOPHOC lh){
    SINHVIEN them;
    //nhap thong tin sinh vien can them;
    fflush(stdin);
    cout<<"Nhap ma so:"<<endl;
    gets(them.MaSo);
    NhapSinhVien(them);

    int *LOPHOC = new int[lh.n+1];// cap phat lai bo nho de them sinh vien
    

    lh.sv[lh.n]=them;// dua thong tin sinh vien them vao cuoi cung
    lh.n++;// tang so luong sinh vien

    cout<<"danh sach lop hoc sau khi them la:"<<endl;
    XuatLopHoc(lh);
}
    
   