#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"nhap so n:";
    cin>>n;
    int sochuso = log10(double(n))+1;
    cout<<"so n co"<<sochuso<<"chu so"<<"\n";
    int Max,Min;
    Max=Min=n%10;
    n/=10;
    while(n!=0){
        int chuso=n%10;
        n/=10;
        if(chuso>Max){
            Max=chuso;
        }
        if(chuso<Min){
            Min=chuso;
        }
    }
    cout<<"Max:"<<Max<<"\n";
    cout<<"Min"<<Min;


    return 0;
}
