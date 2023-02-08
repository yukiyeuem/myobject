#include<iostream>
using namespace std;



int tong(int n){
    int sum = 0;
    for(int i= 1 ; i<=n ; i++){
        sum +=i;
    }
    return sum;
}

int main(){
    int n;
    do{
        cout<<"nhap so duong n:";
        cin>>n;
        if(n<0){
            cout<<"nhap lai so duong n";
        }
    }while (n<0);
    int sum = tong(n);
    cout<<sum;    
}