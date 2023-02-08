#include<iostream>
using namespace std;

int main(){
    float pay;
    float *ptr_pay;
    pay=2313.54;
    ptr_pay=&pay;
    cout<<pay<<endl;
    cout<<*ptr_pay<<endl;
    cout<<ptr_pay<<endl;
    cout<<&pay<<endl;
}

