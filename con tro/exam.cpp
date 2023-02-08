#include<iostream>
using namespace std;




int main(){
    int a=6;// la bien binh thuong
    int *b;// b la 1 con tro
    //địa chỉ=địa chỉ
    // toán tử=toán tử
    b=&a;

    
    cout<<"gia tri cua a la"<<a<<endl;
    cout<<"dia chi cua a la:"<<&a<<endl;
    cout<<"gia tri cua con tro la:"<<*b<<endl;//*b giup mk lay duoc gia tri con tro ra
    cout<<" dia chi that su cua con tro b la:"<<&b<<endl;// dia chi cua con tro b

    (*b)+=5;
    cout<<" gia tri cua a luc sau la"<<a<<endl;

    int *c;
    c=b;//con trỏ trỏ tới con trỏ khác;
    
    cout<<"gia tri cua c la"<<c<<endl;
    cout<<"dia chi cua c la:"<<&c<<endl;
    cout<<"gia tri cua con tro la:"<<*c<<endl;//*b giup mk lay duoc gia tri con tro ra
    cout<<" dia chi that su cua con tro b la:"<<c<<endl;// dia chi cua con tro b

    (*c)+=6;
    cout<<" gia tri cua a luc sau la:"<<a<<endl;
    
    double z;
    cout<<sizeof(z)<<endl ;
    free(c);
    
    free(b);
    
   

    
}
