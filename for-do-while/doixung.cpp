#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int sodaonguoc=0;
    cout<<"nhap vao so n:";
    cin>>n;
    int temp=n;//mục đích là gán biến giá trị n cho biến temp. chỉ thay đổi trong temp mà giá trị n gốc ko bị ảnh hưởng
    int dem=log10((double)temp);
    while(temp!=0){
        int chuso=temp%10;
        temp/=10;
        sodaonguoc += chuso *pow(10,dem--);
    }
    cout<<"so dao nguoc"<<sodaonguoc<<"\n";
    if(n==sodaonguoc){
        cout<<"so doi xung"<<"\n";
    }else{
        cout<<"ko phai so doi xung";
    
    }
    return 0;
}