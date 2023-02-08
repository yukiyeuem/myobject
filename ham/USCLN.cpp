#include<iostream>
using namespace std;

void Nhapso(int &a,int &b){
    do{
        cout<<"nhap so a:"<<endl;
        cin>>a;
        if(a<0){
            cout<<"nhap lai so a duong:"<<endl;
        }
    }while(a<0);
    do{
        cout<<"nhap so b:"<<endl;
        cin>>b;
        if(b<0){
            cout<<"nhap lai so b duong"<<endl;
        }

    }while(b<0);
}

void UCLN(int &a,int &b){
    int Max = a>b ?a:b;
    int Min = a<b ?a:b;
    int ucln;
    if(Max%Min==0){
        ucln=Min;
    }else{
        for(int i = 1; i<=Min/2;i++){
            if(Max%i == 0 && Min%i == 0){
                ucln=i;
                break;
            }
        }
    }
    cout<<ucln;
}

int main(){
    int a,b;
    Nhapso(a,b);
    UCLN(a,b);
}