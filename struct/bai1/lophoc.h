#pragma once
#include<iostream>
#include"sinhvien.h"
#include<cstring>
using namespace std;


struct LopHoc {
    int n;
    SINHVIEN *arr;
};
typedef struct LopHoc LOPHOC;

void NhapLopHoc(LOPHOC &lh){
    do{
        cout<<"nhap vao so luong sinh vien trong lop hoc:"<<endl;
        cin>>lh.n;
        if(lh.n<0){
            cout<<"nhap lai so luong sinh vien trong lop hoc"<<endl;
        }
    }while(lh.n<0);
    lh.arr = new SINHVIEN[MAX];

    for (int i=0;i<lh.n;i++){
        cout<<"Nhap Sinh Vien thu "<<i+1<<":"<<endl;
        int check ;
        do{
            check = 0;//reset
            fflush(stdin);
            cout<<"nhap vao ma so:"<<endl;
            gets(lh.arr[i].MaSo);
            // NhapSinhVien(lh.arr[i]);
            for(int j =i-1;j>=0;j--){
                if(strcmp(lh.arr[i].MaSo,lh.arr[j].MaSo)==0){
                    check =1;
                    break;// thoat ra
                }
            }
            if(check ==1){
                cout<<"Thong tin bi trung vui long nhap lai thong tin"<<endl;
            }

        }while(check ==1);
        NhapSinhVien(lh.arr[i]);
    }
}


void XuatLopHoc(LOPHOC lh){
    for (int i=0;i<lh.n;i++){
        cout<<"Xuat sinh vien thu"<<i+1<<":"<<endl;
        XuatSinhVien(lh.arr[i]);
    }
}

