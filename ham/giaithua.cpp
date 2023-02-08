#include<iostream>
using namespace std;



int giaithua(int &n){
    int giaithua= 1;
    
    if(n>=0 && n<=1){
        return 1;
    }else{
        for(int i=1;i<=n;i++){
            giaithua *=i;
            // sum += giaithua;
        }
    }  
    return giaithua ;
}



int main(){
    int n;
    do{
        cout<<"nhap n:"<<endl;
        cin>>n;
        if(n<0){
            cout<<"nhap n duong:"<<endl;
        }
    }while (n<0);
    int giaithuan=giaithua(n);
    cout<<giaithuan<<endl;
    
   
}