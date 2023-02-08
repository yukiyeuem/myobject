#include<iostream>
using namespace std;
void HoanVi(int &a, int &b){
    a=a-b; //cho bất kì 
    b=a+b; //thanh b=a; a= a-b muốn b theo a thì b = a-b +b; hay viết lại thành b =a-b
    a=b-a;//
}
int main(){
    int a=1 , b=2;
    cout<<"in ra a,b:"<<a<<"\n"<<b<<"\n";
    HoanVi(a,b);
    cout<<"in ra a,b luc sau:"<<a<<"\n"<<b;
    return 0;
}