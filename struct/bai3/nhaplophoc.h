#pragma once
#include<iostream>
#include<cstring>
#include"nhapsinhvien.h"
using namespace std;
#define Sotien1chi 120000
#define tienhocbongkha 1200000
#define tienhocbonggioi 1500000
#define tienhocbongxuatsac 2000000

struct LopHoc{
    int n;
    SINHVIEN *sv;
};
typedef struct LopHoc LOPHOC;

void NhapLopHoc(LOPHOC &lh){
    do{
        cout<<"nhap so luong sinh vien trong lop hoc:"<<endl;
        cin>>lh.n;
        if(lh.n<0){
            cout<<"Nhap lai so luong sinh vien trong lop hoc:"<<endl;
        }
    }while(lh.n<0);
    lh.sv = new SINHVIEN[max];
    
    
    for(int i=0;i<lh.n;i++){
        cout<<"Nhap sinh vien thu:"<<i+1<<endl;
        
        int check;
        do{
                fflush(stdin);
                cout<<"Nhap ma so sinh vien:"<<endl;
                gets(lh.sv[i].MaSo);
            check = 0;
            for(int j=i-1;j>=0;j--){
                if(strcmp(lh.sv[i].MaSo,lh.sv[j].MaSo)==0){
                    check =1;
                    break;
                }
            }
            if(check ==1){
                cout<<"bi trung ma so. vui long nhap ma so moi"<<endl;
            }
        }while(check==1);
        NhapSinhVien(lh.sv[i]);

    }
}

void XuatLopHoc(LOPHOC lh){
    cout<<"Xuat so luong sinh vien trong lop hoc:"<<lh.n<<endl;
    for(int i=0;i<lh.n;i++){
        cout<<"Xuat ra sinh vien thu:"<<i+1<<endl;
        XuatSinhVien(lh.sv[i]);
    }
}

void hoanvi(SINHVIEN &a, SINHVIEN &b){
    SINHVIEN temp=a;
            a = b;
            b = temp;
}

void sapxeplophoc(LOPHOC &lh, char phanloai){
   for(int i=0;i<lh.n-1;i++){
    for(int j=i+1;j<lh.n;j++){
        if(phanloai =='t'|| phanloai=='T'){
            if(DiemTrungBinh(lh.sv[i])>DiemTrungBinh(lh.sv[j])){
                hoanvi(lh.sv[i],lh.sv[j]);
            }
        }

        if(phanloai =='g'||phanloai=='G'){
            if(DiemTrungBinh(lh.sv[i])<DiemTrungBinh(lh.sv[j])){
                hoanvi(lh.sv[i],lh.sv[j]);
            }
        }
    }
   }
}
int DemSoLuongHocBong(LOPHOC lh){
    int dem = 0;
    for (int i=0;i<lh.n;i++){
       if(strcmp(XepLoai(lh.sv[i]),"Kha")==0||strcmp(XepLoai(lh.sv[i]),"Gioi")==0||strcmp(XepLoai(lh.sv[i]),"Xuat sac")==0){
        dem++;
       }
    }
    return dem;
}
float TongTienHocBong(LOPHOC lh){
    float tonghocbongkha=0;
    int dem1=0;
    float tonghocbonggioi=0;
    int dem2=0;
    float tonghocbongxuatsac=0;
    int dem3=0;
    float tonghocbongcap=0;
    for(int i=0;i<lh.n;i++){
        if(XepLoai(lh.sv[i])=="Kha"){
            dem1++;
        }
        if(XepLoai(lh.sv[i])=="Gioi"){
            dem2++;
        }
        if(XepLoai(lh.sv[i])=="Xuat sac"){
            dem3++;
        }
        tonghocbongkha = tienhocbongkha * dem1;
        tonghocbonggioi = tienhocbonggioi * dem2;
        tonghocbongxuatsac = tienhocbongxuatsac * dem3;
        tonghocbongcap = tonghocbongkha + tonghocbonggioi + tonghocbongxuatsac;
    }
    return tonghocbongcap;
}

void DemSoHocSinhHocLai(LOPHOC lh,int &dem, float &tien){
    tien = 0;
    dem=0;
    // duyet tung sinh vien trong lop hoc
    for(int i=0;i<lh.n;i++){
        int Check =0;
        for(int j=0;j<lh.sv[i].danhsachmonhoc.n;j++){
            if(lh.sv[i].danhsachmonhoc.arr[j].DiemMonHoc<5){
                Check =1;
                tien +=lh.sv[i].danhsachmonhoc.arr[j].SoTinChi *Sotien1chi;
            }
        }
        if(Check ==1){
            dem++;
        }
        
    }
    cout<<"so tien dang ki hoc lai la:"<<tien<<endl;
    cout<<"so luong hoc sinh hoc lai la:"<<dem<<endl;
    
}

SINHVIEN* TimKiemThongTin(LOPHOC lh,char *MaTimKiem){
    for(int i=0;i<lh.n;i++){
        if(strcmp(lh.sv[i].MaSo,MaTimKiem)==0){
            return &lh.sv[i];
        }
    
    }
    return NULL;
}

void CapNhatDuaTrenMaSo(LOPHOC &lh, char *MaSo){
    for(int i=0;i<lh.n;i++){
        if(strcmp(lh.sv[i].MaSo,MaSo)==0){
            SINHVIEN sv;// tao moi 1 sinh vien
            strcpy(sv.MaSo,MaSo);//gan lai ma so
            NhapSinhVien(sv);// nhap thong tin cho sinh vien
            lh.sv[i]=sv;//cap nhat lai sinh vien
            break;
        }
    }
}

void SapXepLopHocTheoTenabc(LOPHOC &lh, char PhanLoai){
    char Ten1[30],Ten2[30];
    for(int i=0;i<lh.n-1;i++){
        strcpy(Ten1,lh.sv[i].TenSinhVien);
        for(int j=i+1;j<lh.n;j++){
            strcpy(Ten2,lh.sv[j].TenSinhVien);
            if(PhanLoai=='t'||PhanLoai=='T'){   
                if(strcmp(strupr(Ten1),strupr(Ten2))== 1){
                    hoanvi(lh.sv[i],lh.sv[j]);
                }
            }
            if(PhanLoai=='G'||PhanLoai=='g'){
                if(strcmp(strupr(Ten1),strupr(Ten2))== -1){
                    hoanvi(lh.sv[i],lh.sv[j]);
                }
            }
        }
    }
}