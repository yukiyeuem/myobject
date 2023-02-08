#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"nhap so:";
    cin>>n;

    int Check = 0;
    if(n<0){
        Check = 1;
        n *= -1;
    }
    if(Check==1){
        cout<<"Am ";
    }
    int scs =log10(double(n))+1;
    if (scs==2){ 
        int hangChuc,hangDonVi;
        hangChuc=n/10;
        // if(hangChuc==1){
        //     cout<<"Muoi";
        // }else if(hangChuc==2){
        //     cout<<"Hai Muoi";
        // }else if(hangChuc==3){
        //     cout<<"Ba Muoi";
        // }else if(hangChuc==4){
        //     cout<<"Bon Muoi";
        // }else if(hangChuc==5){
        //     cout<<"Nam Muoi";
        // }else if(hangChuc==6){
        //     cout<<"Sau Muoi";
        // }else if(hangChuc==7){
        //     cout<<"Bay Muoi";
        // }else if(hangChuc==8){
        //     cout<<"Tam Muoi";
        // }else if(hangChuc==9){
        //     cout<<"Chin Muoi";
        // }
        hangDonVi=n%10;
        // if(hangDonVi==1){
        //     cout<<"\nMot";
        // }else if(hangDonVi==2){
        //     cout<<"\nHai ";
        // }else if(hangDonVi==3){
        //     cout<<"\nBa ";
        // }else if(hangDonVi==4){
        //     cout<<"\nBon ";
        // }else if(hangDonVi==5){
        //     cout<<"\nNam ";
        // }else if(hangDonVi==6){
        //     cout<<"\nSau ";
        // }else if(hangDonVi==7){
        //     cout<<"\nBay ";
        // }else if(hangDonVi==8){
        //     cout<<"\nTam ";
        // }else if(hangDonVi==9){
        //     cout<<"\nChin ";
        // }

    switch(hangChuc){
        case 1:
        {
            cout<<"Muoi";
            break;
        }
        case 2:
        {
            cout<<"Hai Muoi";
            break;
        }
        case 3:
        {
            cout<<"Ba Muoi";
            break;
        }
        case 4:
        {
            cout<<"Bon Muoi";
            break;
        }
        case 5:
        {
            cout<<"Nam Muoi";
            break;
        }
        case 6:
        {
            cout<<"Sau Muoi";
            break;
        }
        case 7:
        {
            cout<<"Bay Muoi";
            break;
        }
        case 8:
        {
            cout<<"Tam Muoi";
            break;
        }
        case 9:
        {
            cout<<"Chin Muoi";
            break;
        }
    };
    
    switch(hangDonVi){
        case 1:
        {
            cout<<" Mot";
            break;
        }
        case 2:
        {
            cout<<" Hai ";
            break;
        }
        case 3:
        {
            cout<<" Ba ";
            break;
        }
        case 4:
        {
            cout<<" Bon ";
            break;
        }
        case 5:
        {
            cout<<" Nam ";
            break;
        }
        case 6:
        {
            cout<<" Sau ";
            break;
        }
        case 7:
        {
            cout<<" Bay ";
            break;
        }
        case 8:
        {
            cout<<" Tam ";
            break;
        }
        case 9:
        {
            cout<<" Chin ";
            break;
        }
    }
    // cout<<hangChuc<<hangDonVi;
    
    }else{
        cout<<"sai";
    }
    return 0;
}