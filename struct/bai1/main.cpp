
#include<iostream>
// #include"monhoc.h"
// #include"danhsachmonhoc.h"
// #include"sinhvien.h"
#include"lophoc.h"
using namespace std;


int main(){
    // MONHOC mh;
    // // // mh = new MONHOC[100];
    // NhapMonHoc(mh);
    // XuatMonHoc(mh);
    // // delete [] mh;

    // DANHSACHMONHOC ds;
    // NhapDanhSachMonHoc(ds);
    // XuatDanhSachMon(ds);

    // delete [] ds.arr;


    // SINHVIEN sv;
    // NhapSinhVien(sv);
    // XuatSinhVien(sv);

    // float dtb = TinhDiemTrungBinh(sv);
    // cout<<"dtb:"<<dtb<<endl;
    
    // cout<<"Xep Loai:"<<XepLoai(sv);

    // delete [] sv.danhsachmon.arr;

    LOPHOC lp;
    NhapLopHoc(lp);
    XuatLopHoc(lp);
    delete []lp.arr;

}