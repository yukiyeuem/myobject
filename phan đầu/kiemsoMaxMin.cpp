#include<iostream>
#include<math.h>
using namespace std;

int Max(int n){
    if(n==0)return 0;
    n =abs(n);
    int max =0;
    while (n>0)
    {
        int temp = n%10;
        n/=10;
       
        if( temp > max) max=temp;
    }

    return max;
}


int main(){
    int n;
    cout<<"nhap gia tri n:";
    cin>>n;
    int csc = log10(double(n))+1;
    cout<<"co "<<csc<<" chu so"<<"\n";
    cout<<"so lon nhat:"<<Max(n);

    return 0;
}