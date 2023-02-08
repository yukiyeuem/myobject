#include<conio.h>
#include<stdio.h>
#include <iostream>
#include <string.h>
#include "thuvien.h"
#define MAX 1000
using namespace std;
 
int main() {
    int key;
    char fileName[] = "data.txt";
    SV arraySV[MAX];
    int soluongSV = 0;
    int idCount = 0;
    // nhap danh sach sinh vien tu file
    soluongSV = docFile(arraySV, fileName);
    idCount = idLonNhat (arraySV, soluongSV);
 
    while(true) {
        cout << "------------CHUONG TRINH QUAN LY SINH VIEN-------------\n";
        cout << "-------------------------MENU--------------------------\n";
        cout << "--  1. Them sinh vien.                               --\n";
        cout << "--  2. Cap nhat thong tin sinh vien theo ID.         --\n";
        cout << "--  3. Xoa sinh vien boi ID.                         --\n";
        cout << "--  4. Tim kiem sinh vien theo ten.                  --\n";
        cout << "--  5. Sap xep sinh vien theo diem trung binh (GPA). --\n";
        cout << "--  6. Sap xep sinh vien theo ten.                   --\n";
        cout << "--  7. Hien thi danh sach sinh vien.                 --\n";
        cout << "--  8. Ghi danh sach sinh vien vao file.             --\n";
        cout << "--  0. Thoat                                         --\n";
        cout << "-------------------------------------------------------\n";
        cout << "Nhap yeu cau: ";
        cin >> key;
        switch(key){

            case 1:
                cout << "\nThem sinh vien.";
                idCount++;
                nhapSV(arraySV, idCount, soluongSV);
                printf("\nThem sinh vien thanh cong!");
                soluongSV++;
                pressAnyKey();
                break;

            case 2:
                if(soluongSV > 0) {
                    int id;
                    cout << "\nCap nhat thong tin sinh vien. ";
                    cout << "\n Nhap ID: "; cin >> id;
                    capNhatSV(arraySV, id, soluongSV);
                }else{
                    cout << "\nDanh sach trong!";
                }
                pressAnyKey();
                break;

            case 3:
                if(soluongSV > 0) {
                    int id;
                    cout << "\nXoa sinh vien.";
                    cout << "\n Nhap ID: "; cin >> id;
                    if (xoaTheoID(arraySV, id, soluongSV) == 1) {
                    	cout << "Xoa thanh cong!" << endl;
                        soluongSV--;
                    }
                }else{
                    cout << "\nDanh sach trong!";
                }
                pressAnyKey();
                break;

            case 4:
                if(soluongSV > 0) {
                    cout << "\nTim kiem sinh vien theo ten.";
                    char strTen[30];
                    cout << "\nNhap ten de tim kiem: "; fflush(stdin); gets(strTen);
                    timKiemTheoTen(arraySV, strTen, soluongSV);
                }else{
                    cout << "\nDanh sach trong!";
                }
                pressAnyKey();
                break;

            case 5:
                if(soluongSV > 0) {
                    cout << "\nSap xep sinh vien theo diem trung binh (GPA).";
                    char b;
                    cout<<"\nban chon sap xep tang hay giam.Neu tang ghi t. Neu giam ghi g:";
                    cin>>b;
                    if (b=='t'||b=='T'){
                        cout<<"\n sap xep sinh vien theo diem GPA tang";
                        sapxepTheoDTB(arraySV, soluongSV,'t');
                        showStudent(arraySV, soluongSV);
                    }

                    if (b=='g'||b=='G'){
                        cout<<"\n sap xep sinh vien theo diem GPA giam";
                        sapxepTheoDTB(arraySV, soluongSV,'g');
                        showStudent(arraySV, soluongSV);
                    }
                    
                }else{
                    cout << "\nDanh sach trong!";
                }
                pressAnyKey();
                break;

            case 6:
                if(soluongSV > 0) {
                    cout << "\nSap xep sinh vien theo ten.";
                    char b;
                    cout<<"\nban chon sap xep tang hay giam.Neu tang ghi t. Neu giam ghi g:";
                    cin>>b;
                    if (b=='t'||b=='T'){
                        cout<<"\n sap xep sinh vien theo ten tang";
                        sapXepTheoTen(arraySV, soluongSV,'t');
                        showStudent(arraySV, soluongSV);
                    }

                    if (b=='g'||b=='G'){
                        cout<<"\n sap xep sinh vien theo ten giam";
                        sapXepTheoTen(arraySV, soluongSV,'g');
                        showStudent(arraySV, soluongSV);
                    }
                } else {
                    cout << "\nDanh sach trong!";
                }
                pressAnyKey();
                break;

            case 7:
                if(soluongSV > 0){
                    cout << "\nHien thi danh sach sinh vien.";
                    showStudent(arraySV, soluongSV);
                }else{
                    cout << "\nDanh sach trong!";
                }
                pressAnyKey();
                break;

            case 8:
                if(soluongSV > 0){
                    cout << "\nGhi danh sach sinh vien vao file.";
                    ghiFile(arraySV, soluongSV, fileName);
                }else{
                    cout << "\nDanh sach trong!";
                }
                printf("\nGhi danh sach sinh vien vao file %s thanh cong!", fileName);
                pressAnyKey();
                break;

            case 0:
                cout << "\nBan da chon thoat chuong trinh!";
                getch();
                return 0;

            default:
                cout << "\nKhong co chuc nang nay!";
                cout << "\nHay chon chuc nang trong hop menu.";
                pressAnyKey();
                break;
        }
    }
}
