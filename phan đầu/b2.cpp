#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c;
    cout<<"nhap 3 so a,b,c:";
    cin>>a>>b>>c;
    if(a==0){
        if(b==0){
            if(c==0){
                cout<<"phuong trinh vo so nghiem";
            }else{
                cout<<"phuong trinh vo nghiem";
            }
        }else{

            cout<<"phuong trinh co nghiem:"<<-c/b;
        }
    }else{
        float delta = b*b-4*a*c;
        if(delta<0){
            cout<<"phuong trinh vo nghiem";
        }else if(delta>0){
            float x1=(sqrt(delta)-b)/(2*a);
            float x2=(-sqrt(delta)-b)/(2*a);
            cout<<"phuong trinh co 2 nghiem phan biet:";
            cout<<x1<<"\n";
            cout<<x2;
        }else{
            float x=-b/(2*a);
            cout<<"phuong trinh co nghiem kep:"<<x;
        }
    }
    return 0;
}