#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"nhap n"<<endl;
    cin>>n;
    int temp=n;
    int scs =log10((double)temp);
    int sodaonguoc=0;
    while(temp!=0){
        int chuso =temp%10;
        temp/=10;
        sodaonguoc += chuso* pow(10,scs--);
    }
    cout<<sodaonguoc;
    if(sodaonguoc==n){
        cout<<"day la so doi xung"<<endl;
    }else{
        cout<<"ko phai so doi xung";
    }
}