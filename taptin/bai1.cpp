/*Note:
stdout: xuat chuan : man hinh
stderr:loi chuan:man hinh
stdin: nhap chuan: ban phim
stdprn(MS-DOS): in chuan: May in(LPT1:)
stdaux(MS-DOS): phu chuan: cong noi tiep COM 1:

Xuat ra man hinh : fprintf(stdout,"hello");
Xuat ra may in: fprintf(stdprn,"hello");
Xuat ra thiet bi bao loi: fprintf(stderr,"hello");
xuat ra tap tin (stream fp): fprintf(fp,"hello");
*/


#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

void HoanVi(int& a, int& b) {
	int Temp = a;
	a = b;
	b = Temp;
}

void SapXep(vector<int> &a, char phanloai) {
	int n = a.size();
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (phanloai == 't') {
				if (a[i] > a[j]) {
					HoanVi(a[i], a[j]);
				}
			}
			else if(phanloai == 'g'){
				if (a[i] < a[j]) {
					HoanVi(a[i], a[j]);
				}
			}

		}
	}
}

int main() {
	//b1: mo file
	ifstream FileIn;// khao bao file
	FileIn.open("input.txt", ios_base::in);
	//b2: doc du lieu tu tap tin vao chuong trinh
	vector<int> arr;
	while (!FileIn.eof()) {
		int Number;
		FileIn >> Number;//doc du lieu tu file vao Number
		
		arr.push_back(Number);// them Number vao vector
	}
	//b3: dong file
	FileIn.close();

	// sap xep danh sach tang dan

	SapXep(arr, 't');

	/*
		Ghi du lieu vao output.txt
	*/
	//b1:mo file
	ofstream FileOut;
	FileOut.open("output.txt", ios_base::out);

	//b2: ghi file
	int n = arr.size();
	for (int i = 0; i < n; i++) {
		FileOut << arr[i] <<" ";
	}
	//b3:dong file
	FileOut.close();
	return 0;
}
