#include<iostream>
using namespace std;

template<class hoang>// khai bao kieu tuy y
void hoanvi(hoang &a,hoang &b){
    hoang temp=b;
    b=a;
    a=temp;
}

int main(){
    int a=1,b=2;
    hoanvi(a,b);
    //c2:hoanvi<int>(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
}