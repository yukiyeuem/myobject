#include<iostream>
#include<math.h>
using namespace std;

void xetsongto(int a,int b){
    int dem = 0;
    
    for(int i = a; i<b;i++){
        for(int j=1;j<i;j++){
            if(i%j==0){
                dem++;
            }
        }
    if(dem>2){
        cout<<i<<"ko phai so nguyen to"<<endl;
    }else if(dem<=2){
        cout<<i<<"la so nguyen to"<<endl;
    }
    }
    
}

int main(){
    int a,b;
    do{
        cout<<"nhap so nguyen duong a"<<endl;
        cin>>a;
        if(a<0){
            cout<<"nhap lai gia a >0"<<endl;
        }
    }while(a<0);
    do{
        cout<<"nhap so b="<<endl;
        cin>>b;
        if(b<=a){
            cout<<"nhap lai gia tri b lon hon a:"<<endl;
        }
    }while(a>=b);
    xetsongto(a,b);
}