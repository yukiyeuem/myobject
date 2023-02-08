#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream FileIn;//khai bao de doc
	ofstream FileOut;//khai bao de ghi

	// mo tap tin de doc
	FileIn.open("input.txt", ios_base::in);
	//kiem tra xem ton tai hay ko
	if (!FileIn) {
		cout << "tap tin khong ton tai";
		return 0;
	}
	//xu ly tap tin
	//doc chuoi ben c++
	//string str;
	//c1: FileIn>>str; den khoang trang bi dung
	//c2: getline(FileIn,str); doc ca khoang trang

	// vong lap doc tu dong dau den dong cuoi
	while (!FileIn.eof()) {
		string str;
		getline(FileIn, str);
		cout << str<<endl;
	}

	// dong tap tin
	FileIn.close();
}