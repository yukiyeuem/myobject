#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 1000
using namespace std;




class SinhVien {
	public:
	    int id;
	    char Ten[30];
	    char gmail[25];
	    char soDT[15];
	    float gpa;
};
 
typedef SinhVien SV;

void printLine(int n);
void nhapThongTinSV(SV &sv, int id);
void nhapSV(SV a[], int id, int n);
void capNhatThongTinSV(SV &sv);
void capNhatSV(SV a[], int id, int n);
int xoaTheoID(SV a[], int id, int n);
void timKiemTheoTen(SV a[], char ten[], int n);
int idLonNhat(SV a[], int n);
void sapxepTheoDTB(SV a[], int n,char b);
void sapXepTheoTen(SV a[], int n,char b);
void showStudent(SV a[], int n);
int docFile(SV a[], char fileName[]);
void ghiFile(SV a[], int n, char fileName[]);
void pressAnyKey();


void nhapThongTinSV(SV &sv, int id) {
    cout << "\n Nhap ten: "; fflush(stdin); gets(sv.Ten);
    cout << " Nhap gmail: "; gets(sv.gmail);
    cout << " Nhap soDT: "; gets(sv.soDT);
    cout << " Nhap gpa: "; cin >> sv.gpa;
    sv.id = id;
}
 
void nhapSV(SV a[], int id, int n) {
    printLine(40);
    printf("\n Nhap sinh vien thu %d:", n + 1);
    nhapThongTinSV(a[n], id);
    printLine(40);
}
 
void capNhatThongTinSV(SV &sv) {
    cout << "\n Nhap ten: "; fflush(stdin); gets(sv.Ten);
    cout << " Nhap gmail: "; gets(sv.gmail);
    cout << " Nhap soDT: "; gets(sv.soDT);
    cout << " Nhap gpa: "; cin >> sv.gpa;
}
 
void capNhatSV(SV a[], int id, int n) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].id == id) {
            found = 1;
            printLine(40);
            cout << "\n Cap nhat thong tin sinh vien co ID = " << id;
            capNhatThongTinSV(a[i]);
            printLine(40);
            break;
        }
    }
    if (found == 0) {
        printf("\n Sinh vien co ID = %d khong ton tai.", id);
    }
}
 
int xoaTheoID(SV a[], int id, int n) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].id == id) {
            found = 1;
            printLine(40);
            for (int j = i; j < n; j++) {
                a[j] = a[j+1];
            }
            cout << "\n Da xoa SV co ID = " << id;
            printLine(40);
            break;
        }
    }
    if (found == 0) {
        printf("\n Sinh vien co ID = %d khong ton tai.", id);
        return 0;
    } else {
        return 1;
    }
}
 
void timKiemTheoTen(SV a[], char ten[], int n) {
    SV arrayFound[MAX];
    char tenSV[30];
    int found = 0;
    for(int i = 0; i < n; i++) {
        strcpy(tenSV, a[i].Ten);
        if(strstr(strupr(tenSV), strupr(ten))) {
            arrayFound[found] = a[i];
            found++;
        }
    }
    showStudent(arrayFound, found);
}
 
void showStudent(SV a[], int n) {
    printLine(100);
    cout <<"\nSTT\tID\tHo va ten\t\tgmail\t\t\tso dien thoai\tGPA";
    for(int i = 0; i < n; i++) {
        // in sinh vien thu i ra man hinh
        printf("\n %d", i + 1);
        printf("\t%d", a[i].id);
        printf("\t%s", a[i].Ten);
        printf("\t\t%s", a[i].gmail);
        printf("\t\t%s", a[i].soDT);
        printf("\t%2f", a[i].gpa);
    }
    printLine(100);
}
  
void sapxepTheoDTB(SV a[], int n,char b) {
    SV tmp;
    for(int i = 0;i < n;i++) {
        for(int j = i+1; j < n;j++) {
            if(b=='t'||b=='T'){
                if(a[i].gpa > a[j].gpa) {
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
            if(b=='g'||b=='G'){
                if(a[i].gpa < a[j].gpa) {
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
        }
    }
}

void sapXepTheoTen(SV a[], int n,char b) {
    SV tmp;
    char tenSV1[30];
    char tenSV2[30];
    for(int i = 0;i < n; i++) {
        strcpy(tenSV1, a[i].Ten);
        for(int j = i+1; j < n; j++) {
            strcpy(tenSV2, a[j].Ten);
            if(b=='t'||b=='T'){
                if(strcmp(strupr(tenSV1), strupr(tenSV2)) > 0) {
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
            if(b=='g'||b=='G'){
                if(strcmp(strupr(tenSV1), strupr(tenSV2)) < 0) {
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
            
        }
    }
}
 
int idLonNhat (SV a[], int n) {
    int idMax = 0;
    if (n > 0) {
        idMax = a[0].id;
        for(int i = 0;i < n; i++) {
            if (a[i].id > idMax) {
                idMax = a[i].id;
            }
        }
    }
    return idMax;
}
 
int docFile(SV a[], char fileName[]) {
    FILE * fp;
    int i = 0;
    fp = fopen (fileName, "r");
    // doc thong tin sinh vien
    while (fscanf(fp, "%d%30s%30s%20s%20f%\n", &a[i].id, &a[i].Ten, &a[i].gmail, &a[i].soDT, &a[i].gpa) != EOF) {
       i++;
    }
    cout << " So luong sinh vien co san trong file la: " << i << endl;
    cout << endl;
    fclose (fp);
    // tra ve so luong sinh vien duoc doc tu file
    return i;
}
 
void ghiFile(SV a[], int n, char fileName[]) {
    FILE * fp;
    fp = fopen (fileName,"w");
    for(int i = 0;i < n;i++){
        fprintf(fp, "%d%30s%30s%20s%20f%\n", a[i].id, a[i].Ten, a[i].gmail, a[i].soDT, a[i].gpa);
    }
    fclose (fp);
}
 
void printLine(int n) {
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "_";
    }
    cout << endl;
}
 
void pressAnyKey() {
    cout << "\n\nBam phim bat ky de tiep tuc...";
    getch();
    system("cls");
}   
