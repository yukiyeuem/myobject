#include<iostream>
#include<math.h>
using namespace std;

int tongmu2(int n){
    int sum = 0;
    for(int i =1;i<=n;i++){
        sum +=pow(i,2);
    }
    return sum;
}

int main(){
    int n;
    do{
        cout<<"nhap so n:"<<endl;
        cin>>n;
        if(n<0){
            cout<<"nhap n duong"<<endl;
        }
    }while(n<0);
    int summu= tongmu2(n);
    cout<<summu;
}