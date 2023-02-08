#include<iostream>
using namespace std;

void hoanvic1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}


void hoanvic2(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=1,b=2;
    
    int *c,*d;
    c=&a;
    d=&b;
    // hoanvic1(*c,*d);
    hoanvic2(c,d);// gia tri di voi gia tri, dia chi di voi dia chi
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    free(c);
    free(d);
}