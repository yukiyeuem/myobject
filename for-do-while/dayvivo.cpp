#include<iostream>
using namespace std;

int main(){
    int n;
    do{
        cout<<"nhap n"<<endl;
        cin>>n;
        if(n<1){
            cout<<"nhap lai gia tri n:"<<endl;
        }
    }while(n<1);
    
    int a1= 1;
    int a2 =1;
    
    if(n==1){
        cout<<a1;
    }else if(n==2){
        cout<<a1<<endl<<a2<<endl;
    }else{  
        cout<<a1<<endl<<a2<<endl;
        for(int i = 1; i<=n-2;i++){
            int an = a1 + a2;
            a1=a2;
            a2=an;
            cout<<an<<endl;
        }
    }
}