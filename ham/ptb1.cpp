#include<iostream>
using namespace std;

void ptb1(float a, float b){
    if(a==0){
        if (b==0)
        {
            cout<<"ptrinh vo so nghiem"<<endl;
    
        }else{
            cout<<"ptrinh vo nghiem"<<endl;
        }
        
    }else{
        cout<<"phuong trinh co nghiem"<<-b/a<<endl;
    }
}

int main(){
    int a,b;
    cout<<"nhap a,b"<<endl;
    cin>>a>>b;

    ptb1(a,b);
    
}
