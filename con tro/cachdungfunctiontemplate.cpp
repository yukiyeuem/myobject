#include<iostream>
using namespace std;

template<typename hoangcute>
void hoanvi(hoangcute &a, hoangcute &b){
    hoangcute Temp =a;
    a=b;
    b=Temp;

}


int main(){
    float a=1.2;
    float b=2.4;
    hoanvi(a,b);

    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}