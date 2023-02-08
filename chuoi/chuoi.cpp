//str.erase(x,y):xoá đi y ký tự bắt đầu từ kí tự x.
//str.erase(str.begin()+x): xóa đi ký tự tại vị trí x.
//str.erase(str.begin()+x.str.begin()+y): xóa đi các ký tự từ chỉ số x đến chỉ số y-1


#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str = "abcdefghi";
    str.erase(4,3);
    cout<<"chuoi luc sau la="<<str<<endl;

    str.erase(str.begin()+5);
    cout<<"chuoi lan 2 la:"<<str<<endl;

    


}