#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;
struct MyAnimals
{
	char Ten[30];
	float VanToc;
	int KiNang;

};
typedef struct MyAnimals ANIMALS;

void ThongTinThiSInhThamGia(ANIMALS &ts) {
	cout << "nhap ten thi sinh tham gia" << endl;
	gets(ts.Ten);
	

	do {
		cout << "Van toc cua thi sinh la" << endl;
		cin >> ts.VanToc;
		if (ts.VanToc < 0) {
			cout << "vui long nhap lai van toc cua thi sinh" << endl;
		}
	} while (ts.VanToc < 0);




}

int main() {
	ifstream FileIn;
	ofstream FileOut;
	FileIn.open("input.txt", ios_base::in);
	if (!FileIn) {
		cout << "ko ton tai file" << endl;
		return 0;
	}

	FileIn.close();
	return 0;
}