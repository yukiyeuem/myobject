#include<iostream>
using namespace std;

void Nhap(int&n){
    
    do{
        cout<<"nhap n:"<<"\n";
        cin>>n;
        if(n<0){
            cout<<"nhap lai n";
        }
    }while(n<0);
}

int Tong(int&n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    Nhap(n);
    int sum = Tong(n);
    cout<<sum;
    return 0;
}