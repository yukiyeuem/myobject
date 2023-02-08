#include<iostream>
#include<Windows.h>
using namespace std;
int GiaiThua(int n){
    int result =1;
    for(int i=1;i<=n;i++){
        result *=i;
    }
    return result;
}

void Nhap(int &n){
    do{
        cout<<"nhap n>0:";
        cin>>n;
        if(n<=0){
            cout<<"Nhap lai gia tri n:";
        }
    }while(n<=0);
}

int main(){
    while (1<2){
hidro:    
    int luaChon;
    cout<<"\n-----MENU-----\n";
    cout<<"1.Nhap\n";
    cout<<"2.Thoat\n";
    cin>>luaChon;
    int result;
    
    if(luaChon!=1&&luaChon!=2){  
            cout<<"nhap lai lua chon trong MENU";
            goto hidro;
    }      
    if(luaChon==1){
        system("cls");
        int a;
        Nhap(a);
        result += GiaiThua(a);
                
    }else{
        cout<<result;
        break;
    }
}

    return 0;
}