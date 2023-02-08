#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"nhap 2 so a,b:";
    cin>>a>>b;
    char x;
    cout<<"nhap vao ki tu x:";
    cin>>x;
    if(x=='+'){
        float tong = a + b;
        cout<<tong;
    }else if(x=='-'){
        float hieu = a - b;
        cout<<hieu;
    }else if(x=='*'){
        float tich=a*b;
        cout<<tich;
    }else if(x=='/'){
        if(b==0){
            return a;
        }else{
            float thuong =a/b;
            cout<<thuong;
        }
    }
    return 0;

}