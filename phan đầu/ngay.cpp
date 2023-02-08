#include<iostream>
using namespace std;
int main(){
    int ngay,thang,nam;
    cout<<"nhap thang:";
    cin>>thang;
    cout<<"nhap nam:";
    cin>>nam;
    if(nam%400==0||nam%4==0&&nam%100!=0){
        switch(thang){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                cout<<"thang co 31 ngay";
                break;
            case 2:
                cout<<"thang co 29 ngay";
                break;
            default:
            cout<<"thang co 30 ngay";        
        }
    }else{
        switch(thang){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                cout<<"thang co 31 ngay";
                break;
            case 2:
                cout<<"thang co 28 ngay";
                break;
            default:
            cout<<"thang co 30 ngay";        
        }
    }
    
    return 0;
}