#include<iostream>
using namespace std;
int main(){
    int ngay, thang, nam;
    cout<<"nhap ngay thang nam:";
    cin>>ngay>>thang>>nam;
    int ngayTruoc,thangTruoc,namTruoc;
    int ngayMai,thangSau,namSau;
    if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
        if(ngay>=2&&ngay<=30){
            ngayTruoc =ngay-1;
            ngayMai=ngay+1;
        }else if(ngay==1){
            ngayMai=ngay+1;
            ngayTruoc=ngay-1;
            if(ngayTruoc==0){
                 if(thang==1){
                    ngayTruoc=31;
                    namTruoc=nam-1;
                    thangTruoc==12;
                    cout<<ngayTruoc<<thangTruoc<<namTruoc;
                 }else{
                    ngayTruoc=
                    namTruoc=nam;
                    thangTruoc=thang-1;
                 }
            }else{

            }

        }        
    }else if(thang==4||thang==6||thang==9||thang==11){

    }else{

    }

    
    return 0;
}


