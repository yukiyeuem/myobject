#include<iostream>
using namespace std;

void Nhapso(int &n){
    do{
        cout<<"nhap so n:"<<endl;
        cin>>n;
        if(n<0){
            cout<<"nhap lai n:"<<endl;
        }
    }while(n<0);
}

int inranptu(int &n){
    int a1=1;
    int a2=1;
    int an;
    if(n==1){
        cout<<a1<<endl;
    }
    else if(n==2){
        cout<<a1<<"\n"<<a2<<"\n";
    }else{
        cout<<a1<<"\n"<<a2<<"\n";
        for(int i =1; i<=n-2;i++){
            an = a1 + a2;
            a1=a2;
            a2=an;
            cout<<an<<endl;
        }
    }
    return an;
}

int main(){
    int n;
    Nhapso(n);
    int soan= inranptu(n);
}