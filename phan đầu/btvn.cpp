#include<iostream>
using namespace std;
int main(){
    float a,b,c,d,e,f;
    cout<<"nhap cac soL:";
    cin>>a>>b>>c>>d>>e>>f;
    if((d*b-e*a)!=0){
        float y = (c*d-f*a)/(d*b-e*a);
        float x = (c-b*y)/a;
        cout<<x<<"\n"<<y;
    }else{
        cout<<"vo nghiem";
    }

    return 0;
}
