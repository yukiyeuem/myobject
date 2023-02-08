#include<iostream>
#include"nhaplophoc.h"
// #include"nhapsinhvien.h"
#include"themsinhvien.h"
#include"xoasinhvien.h"

using namespace std;

int main(){
    // MONHOC mh;
    // NhapMonHoc(mh);
    // XuatMonHoc(mh);
    // DANHSACHMONHOC ds;
    // NhapDanhSachMonHoc(ds);
    // XuatDanhSachMonHoc(ds);

    // SINHVIEN sv;
    // NhapSinhVien(sv);
    // XuatSinhVien(sv);

    // float Dtb =DiemTrungBinh(sv);
    // cout<<"diem trung binh"<<Dtb<<endl;

    // cout<<"xep loai:"<<XepLoai(sv)<<endl;
 
    // delete [] sv.danhsachmonhoc.arr;
    LOPHOC lh;
    NhapLopHoc(lh);
    XuatLopHoc(lh);

    // char phanloai;
    // cout<<"vui long nhap cach xep theo tang or giam: "<<endl;
    // cin>>phanloai;

    // if(phanloai =='t'|| phanloai=='T'){
    //     cout<<"Danh sach lop tang dan la:"<<endl;
    //     sapxeplophoc(lh, 't');
    //     XuatLopHoc(lh);
    // }
    // if(phanloai =='g'||phanloai=='G'){
    //     cout<<"Danh sach lop giam dan la:"<<endl;
    //     sapxeplophoc(lh, 'g');
    //     XuatLopHoc(lh);
    // }
    
    // int SoHSNhanHocBong =DemSoLuongHocBong(lh);
    // cout<<"so luong nhan hoc bong la:"<<SoHSNhanHocBong<<endl;

    
    // int dem;
    // float tien;
    // DemSoHocSinhHocLai(lh,dem,tien);

    // char MaTimKiem[30];
    // fflush(stdin);
    // cout<<"Nhap vao ma tim kiem la:"<<endl;
    // gets(MaTimKiem);

    // SINHVIEN *sv = TimKiemThongTin(lh,MaTimKiem);
    // if(sv==NULL){
    //     cout<<"ko tim thay"<<endl;
    // }
    // else{
    //     cout<<"tim thay sinh vien:"<<endl;
    //     XuatSinhVien(*sv);
    // }


    // ThemSinhVien(lh);
    // int vitrixoa;
    // do{
    //     cout<<"nhap vao vi tri xoa:"<<endl;
    //     cin>>vitrixoa;
    //     if(vitrixoa>=lh.n){
    //         cout<<"vui long nhap lai vi tri xoa:"<<endl;
    //     }
    // }while(vitrixoa>=lh.n);
    
    // XoaSinhVien(lh,vitrixoa);

    // char *MaSo;
    // MaSo = new char[30];
    // fflush(stdin);
    // cout<<"Nhap ma so xoa:"<<endl;
    // cin>>MaSo;
    // XoaSinhVienDuaTrenMaSo(lh, (char*)MaSo);


    // XuatLopHoc(lh);

    // XoaSinhVien(lh, 1);
    // REALLOC(&lh.sv,lh.n,lh.n+1);

    // XoaSinhVienDuaTrenMaSo(lh,(char*)"1");



    // delete [] MaSo;


    // XoaSinhVienBiRotMon(lh);
    // char *MaSo;
    // MaSo = new char[30];
    // fflush(stdin);
    // cout<<"Nhap ma so sinh vien can cap nhat:"<<endl;
    // cin>>MaSo;
    // CapNhatDuaTrenMaSo(lh,(char*) MaSo);
    // cout<<"Danh Sach Sau Khi Cap Nhat La:"<<endl;
    // XuatLopHoc(lh);

    float Tong=TongTienHocBong(lh);
    cout<<"Tong so tien truong cap la:"<<Tong<<endl;

    char LuaChon;
    fflush(stdin);
    cout<<"sap xep danh sach sinh vien theo muc ten or giam:"<<endl;
    cin>>LuaChon;
    SapXepLopHocTheoTenabc(lh, LuaChon);
    XuatLopHoc(lh);

    delete [] lh.sv;
}