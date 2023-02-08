#include<iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"nhap n duong:"<<"\n";
        cin>>n;
        if(n<0){
            cout<<"nhap lai so n duong:"<<"\n";
        }
    }while(n<0);
    int temp =n;
    int CheckTang=1;
    int CheckGiam=1;
    while(temp>9){
        int chuso1=temp%10;
        temp /=10;
        int chuso2=temp%10;

        if(chuso1>=chuso2){
            CheckGiam=0;
        }
        
        if(chuso1<=chuso2){    
            CheckTang=0;
        }
    }

    if(CheckTang==1){
            cout<<"tang len";
        // }else if(CheckGiam==1){
        //     cout<<"giam xuong";
    }else if(CheckGiam==1){
            cout<<"giam xuong";
    }else{
        cout<<"khong tang khong giam";
    }

    return 0;
}