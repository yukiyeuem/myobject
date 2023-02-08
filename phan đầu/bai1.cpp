#include<iostream>
using namespace std;
int main(){
    int Min,Max;
    int a,b,c;
    cout<<"nhap 2 so nguyen a , b , c:";
    cin>>a>>b;
    Min = a < b ? a : b;
    Min = Min <c ? Min :c;
    Max = a > b ? a : b;
    Max =Max > c ? Max :c;
    cout<<"Min="<<Min<<"\n";
    cout<<"Max="<<Max;

    return 0;
}