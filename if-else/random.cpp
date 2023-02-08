// keo bua bao

#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;


int main(){
    int nguoi;
    cout<<"---MENU---"<<"\n";
    cout<<"1.Keo"<<"\n";
    cout<<"2.Bua"<<"\n";
    cout<<"3.Bao"<<"\n";
    cout<<"------"<<"\n";
    cout<<"nguoi choi nhap vao lua chon"<<"\n";
    cin>>nguoi;
    if(nguoi == 1){
        cout<<"Keo"<<"\n";
    }else if(nguoi == 2){
        cout<<"Bua"<<"\n";
    }else if(nguoi == 3){
        cout<<"Bao"<<"\n";
    }

    cout<<"loading:";
    Sleep(1000);//di cung thu vien Windows.h
    cout<<".";
    Sleep(1000);//1000mili giay=1 giay
    cout<<".";
    Sleep(1000);
    cout<<"."<<"\n";

    srand(time(0));//reset lai thoi gian
    //[a,b] => a + rand() % (b-a+1)
    int may =  1+ rand () % 3;
    cout<<"may chon:"<<"\n";
    if(may == 1){
        cout<<"Keo"<<"\n";
    }else if(may == 2){
        cout<<"Bua"<<"\n";
    }else if(may == 3){
        cout<<"Bao"<<"\n";
    }

    if((nguoi == 1 && may == 1)||(nguoi == 2 && may == 2)||(nguoi == 3 && may == 3)){
        cout<<"Hoa";
    }else if((nguoi == 1 && may == 2)||(nguoi == 2 &&  may == 3)||(nguoi == 3 && may == 1)){
        cout<<"May thang";
    }else if((nguoi == 1 && may == 3)||(nguoi == 2 && may == 1)||(nguoi == 3 && may == 2)){
        cout<<"Nguoi thang";
    }
    return 0;
}