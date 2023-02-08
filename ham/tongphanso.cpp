#include<iostream>
using namespace std;

double tongphanso(double n){
    float sum = 0;
    for(int i =1;i<=n;i++){
        sum += 1.0/i;
    }
    return sum;
}

int main(){
    double n;
    do{
        cout<<"nhap n duong:"<<endl;
        cin>>n;
        if(n<0){
            cout<<"nhap lai n:"<<endl;
        }
    }while(n<0);

    float sum = tongphanso(n);
    cout<<sum;
}