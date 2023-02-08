#include<iostream>
using namespace std;

int ngayMai, ngayTruoc;
int thangSau,thangTruoc;
int namSau,namTruoc;

void  KiemTraNgay(int &ngay, int &thang, int &nam ){
    if(nam%400==0||(nam%4==0&&nam%100!=0)){
        if(ngay>0&&ngay<=31&&(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12)){
            cout<<"co ngay do";
        }else if(ngay>0&&ngay<=30&&(thang==4||thang==6||thang==9||thang==11)){
            cout<<"co ngay do";
        }else if(ngay>0&&ngay<=29&&thang==2){
            cout<<"co ngay do";
        }else{
            cout<<"ko ton tai ngay do";
        }
    }else{
        if(ngay>0&&ngay<=31&&(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12)){
            cout<<"co ngay do";
        }else if(ngay>0&&ngay<=30&&(thang==4||thang==6||thang==9||thang==11)){
            cout<<"co ngay do";
        }else if(ngay>0&&ngay<=28&&thang==2){
            cout<<"co ngay do";
        }else{
            cout<<"ko ton tai ngay do";
            exit(0);
        }
    }
}



void homSau(int &ngay, int &thang, int &nam){
   if(ngay>=1&&ngay<30&&(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12)){
    ngayMai=ngay+1;
    thangSau=thang;
    namSau=nam;
    cout<<"\n"<<ngayMai<<"\n"<<thangSau<<"\n"<<namSau<<"\n";
   }else if(ngay==31&thang==12){
    ngayMai=ngay-30;
    thangSau=thang-11;
    namSau=nam+1;
    cout<<"\n"<<ngayMai<<"\n"<<thangSau<<"\n"<<namSau<<"\n";
   }

   if(ngay>=1&&ngay<29&&(thang==4||thang==6||thang==9||thang==11)){
    ngayMai=ngay+1;
    thangSau=thang;
    namSau=nam;
    cout<<"\n"<<ngayMai<<"\n"<<thangSau<<"\n"<<namSau<<"\n";
   }else if(ngay==30){
    ngayMai=ngay-29;
    thangSau=thang+1;
    namSau=nam;
    cout<<"\n"<<ngayMai<<"\n"<<thangSau<<"\n"<<namSau<<"\n";
   }

    if(nam%400==0&&(nam%4==0||nam%100!=0)){
        if(ngay>=1&&ngay<29&&thang==2){
            ngayMai=ngay+1;
            thangSau=thang;
            namSau=nam;
            cout<<"\n"<<ngayMai<<"\n"<<thangSau<<"\n"<<namSau<<"\n";
        }else if(ngay==29&&thang==2){
            ngayMai=ngay-28;
            thangSau=thang+1;
            namSau=nam;
            cout<<"\n"<<ngayMai<<"\n"<<thangSau<<"\n"<<namSau<<"\n";
        }
    }else{
        if(ngay>=1&&ngay<28&&thang==2){
            ngayMai=ngay+1;
            thangSau=thang;
            namSau=nam;
            cout<<"\n"<<ngayMai<<"\n"<<thangSau<<"\n"<<namSau<<"\n";
        }else if(ngay==28&&thang==2){
            ngayMai=ngay-27;
            thangSau=thang+1;
            namSau=nam;
            cout<<"\n"<<ngayMai<<"\n"<<thangSau<<"\n"<<namSau<<"\n";
        }
    }
   
}

void homQua(int &ngay, int &thang, int &nam){
    if(ngay>1&&ngay<=31&&(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12)){
        ngayTruoc=ngay-1;
        thangTruoc=thang;
        namTruoc=nam;
        cout<<"\n"<<ngayTruoc<<"\n"<<thangTruoc<<"\n"<<namTruoc<<"\n";
    }else if(ngay==1&&thang==1){
            ngayTruoc=ngay+30;
            thangTruoc=thang+11;
            namTruoc=nam-1;
            cout<<"\n"<<ngayTruoc<<"\n"<<thangTruoc<<"\n"<<namTruoc<<"\n";
    }else if(ngay==1&&thang==3){
        if(nam%400==0||(nam%4==0&&nam%100!=0)){
            ngayTruoc=ngay+28;
            thangTruoc=thang-1;
            namTruoc=nam;
            cout<<"\n"<<ngayTruoc<<"\n"<<thangTruoc<<"\n"<<namTruoc<<"\n";
        }else{
            ngayTruoc=ngay+27;
            thangTruoc=thang-1;
            namTruoc=nam;
            cout<<"\n"<<ngayTruoc<<"\n"<<thangTruoc<<"\n"<<namTruoc<<"\n";
        }
    }else if(ngay==1&&(thang==5||thang==7||thang==8||thang==10)){
            ngayTruoc=ngay+29;
            thangTruoc=thang-1;
            namTruoc=nam;
            cout<<"\n"<<ngayTruoc<<"\n"<<thangTruoc<<"\n"<<namTruoc<<"\n";
    }
    if(ngay>1&&ngay<=30&&(thang==4||thang==6||thang==9||thang==11)){
        ngayTruoc=ngay-1;
        thangTruoc=thang;
        namTruoc=nam;
        cout<<"\n"<<ngayTruoc<<"\n"<<thangTruoc<<"\n"<<namTruoc<<"\n";
    }else if(ngay==1){
        ngayTruoc=ngay+30;
        thangTruoc=thang-1;
        namTruoc=nam;
        cout<<"\n"<<ngayTruoc<<"\n"<<thangTruoc<<"\n"<<namTruoc<<"\n";
    }
    if(nam%400==0||(nam%4==0&nam%100!=0)){
        if(ngay>1&&thang==2){
            ngayTruoc=ngay-1;
            thangTruoc=thang;
            namTruoc=nam;
            cout<<"\n"<<ngayTruoc<<"\n"<<thangTruoc<<"\n"<<namTruoc<<"\n";
        }else if(ngay==1){
            ngayTruoc=ngay+30;
            thangTruoc=thang-1;
            namTruoc=nam;
            cout<<"\n"<<ngayTruoc<<"\n"<<thangTruoc<<"\n"<<namTruoc<<"\n";
        }
    }else{
        if(ngay>1&&thang==2){
            ngayTruoc=ngay-1;
            thangTruoc=thang;
            namTruoc=nam;
            cout<<"\n"<<ngayTruoc<<"\n"<<thangTruoc<<"\n"<<namTruoc<<"\n";
        }else if(ngay==1){
            ngayTruoc=ngay+30;
            thangTruoc=thang-1;
            namTruoc=nam;
            cout<<"\n"<<ngayTruoc<<"\n"<<thangTruoc<<"\n"<<namTruoc<<"\n";
        }
    }
}


int main(){
    int ngay, thang, nam;
    cout<<"nhap vao ngay thang nam:";
    cin>>ngay>>thang>>nam;
    KiemTraNgay(ngay, thang, nam);
    // homSau(ngay,thang,nam);
    homQua(ngay,thang,nam);
    

    

    return 0;
}