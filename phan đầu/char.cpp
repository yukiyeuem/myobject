#include<iostream>
#include<Windows.h>
#include<conio.h>
using namespace std;
int main(){
    int n;
    hidro:
    cout<<"nhap n:";
    cin>>n;
    if(n>=5){
        cout<<"qua mon"<<"\n";
    }else{
        cout<<"hoc lai"<<"\n";
    }
    char x;
    fflush(stdin);//xoá hết các kí tự trc đẻ kể cả enter
    cout<<"ban co muon chay lai chuong trinh.chon y/n"<<"\n";
    // cin>>x;
    x=getch();//getch() nằm trong thư viện conio.h
    //cách dùng:Hàm getch() bản chất nó là một lệnh bắt vào 1 ký tự phím nhấn từ bộ nhớ đệm,
    //  và thực hiện luôn khi bắt được phím.
    if( x == 'y'|| x == 'Y'){
        system("cls");//xoá các thứ đã xấu hiện ở phía trước đi cùng thư viện Windows.h
        goto hidro;
    }
    return 0;
}