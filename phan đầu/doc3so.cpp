#include<iostream>
#include<math.h>

using namespace std;
int main(){
    
    int n;
    cout<<"nhap so:";
    cin>>n;
    int Check =0;
    if(n<0){
        Check=1;
        n *=-1;
    };
    if(Check==1){
        cout<<"am ";
    };
    int csc= log10(double(n))+1;
    if(csc==3){
        int hangDonVi,hangChuc,hangTram;
        hangTram=n/100;
        hangDonVi=n%10;
        switch(hangTram){
            case 1:
                cout<<" mot tram";
                break;
            case 2:
                cout<<" hai tram";
                break;
            case 3:
                cout<<" ba tram";
                break;
            case 4:
                cout<<" bon tram";
                break;
            case 5:
                cout<<" nam tram";
                break;
            case 6:
                cout<<" sau tram";
                break;
            case 7:
                cout<<" bay tram";
                break;
            case 8:
                cout<<" tam tram";
                break;
            case 9:
                cout<<" chin tram";
                break;    
        };
        n=n/10;
        hangChuc=n%10;
        switch(hangChuc){
            case 1:
                cout<<" muoi";
                break;
            case 2:
                cout<<" hai muoi";
                break;
            case 3:
                cout<<" ba muoi";
                break;
            case 4:
                cout<<" bon muoi";
                break;
            case 5:
                cout<<" nam muoi";
                break;
            case 6:
                cout<<" sau muoi";
                break;
            case 7:
                cout<<" bay muoi";
                break;
            case 8:
                cout<<" tam muoi";
                break;
            case 9:
                cout<<" chin muoi";
                break;    
        };
        
        switch(hangDonVi){
            case 1:
                cout<<" mot";
                break;
            case 2:
                cout<<" hai";
                break;
            case 3:
                cout<<" ba";
                break;
            case 4:
                cout<<" bon";
                break;
            case 5:
                cout<<" nam";
                break;
            case 6:
                cout<<" sau";
                break;
            case 7:
                cout<<" bay";
                break;
            case 8:
                cout<<" tam";
                break;
            case 9:
                cout<<" chin";
                break;    
        }
       
        
        
    }else{
        cout<<"nhap lai so co 3 chu so";
    }
    return 0;

}