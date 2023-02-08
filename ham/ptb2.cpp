#include<iostream>
#include<math.h>
using namespace std;

void ptb2(float a,float b,float c){
    if(a==0){
        if(b==0){
            if(c==0){
                cout<<"vo so nghiem"<<endl;

            }else{
                cout<<"pt vo nghiem"<<endl;
            }
        }else{
            cout<<"pt co nghiem"<<-c/b<<endl;
        }
    }else{
        float denta = b*b-4*a*c;
        if(denta==0){
            float x= -b/(2*a);
            cout<<"phuong trinh co nghiem kep"<<x<<endl;
        }else if(denta >0){
            float x1 =(-b-sqrt(denta))/(2*a);
            float x2 =(-b+sqrt(denta))/(2*a);
            cout<<"phuong trinh co 2 nghiem x1,x2:"<<endl;
            cout<<x1<<endl;
            cout<<x2<<endl;
        }else {
            cout<<"phuong trinh vo nghiem";
        }
    }

}

int main(){
    float a,b,c;
    cout<<"nhap 3 so a,b,c theo thu tu"<<endl;
    cin>>a>>b>>c;
    ptb2(a,b,c);

}