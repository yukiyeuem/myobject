#include<iostream>
using namespace std;
int main(){
    int sobaodanh;
    cout<<"nhap so bao danh";
    cin>>sobaodanh;
    float toan,van,anh;
    cout<<"nhap diem 3 mon toan van anh";
    cin>>toan>>van>>anh;

    cout<<"Phieu diem"<<endl;
    cout<<sobaodanh<<endl;
    cout<<toan<<"\n"<<van<<"\n"<<anh<<endl;

    float tong;
    tong=toan + van + anh;
    cout<<"tong diem"<<tong<<endl;
    if(tong>=15){
        cout<<"ban da trung tuyen";
    }else{
        cout<<"ban da truot";
    }
    return 0;
}