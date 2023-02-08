#include<iostream>
#include<math.h>
using namespace std;
int main(){ 
    int n;
    cout<<"nhap n:";
    cin>>n;
    int i;
    int count=0;
    if(i==1){
        cout<<"ko phai so nguyen to";
        return 0;
    }
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>=1){
        cout<<"ko phai so nguyen to";
    }else{
        cout<<"so nguyen to";
    }

    return 0;
}