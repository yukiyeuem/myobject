#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c;
    cout<<"nhap 3 so:";
    cin>>a>>b>>c;
    if(a!=0&&a!=0&&c==0){
        float x1 = 0;
        float x2 =-b/a;
        if(-b/a>0){
            float x3=sqrt(-b/a);
            float x4=-sqrt(-b/a);
            cout<<"in ra"<<x3<<"\n"<<x4<<"\n"<<x1;
        }else{
            cout<<"phuong trinh co 1 nghiem:x1="<<x1;
        }
    }
    else if(a==0){
        if(b==0){
            if(c==0){
                cout<<"phuong trinh co vo so nghiem";
            }else{
                cout<<"phuong trinh vo nghiem";
            }
        }else{
            float x=-c/b;
            if(x>0){
                float x1=sqrt(x);
                float x2=-sqrt(x);
                cout<<"phuong trinh co 2 nghiem:";
                cout<<x1<<"\n";
                cout<<x2;
            }else{
                cout<<"phuong trinh vo nghiem";
            }
        }
    }else{
        float delta=b*b-4*a*c;
        if(delta>0){
            float x1=(-sqrt(delta)-b)/(2*a);
            float x2=(sqrt(delta)-b)/(2*a);
                if(x1>0){
                    float x3=sqrt(x1);
                    float x4=-sqrt(x1);
                        cout<<"nghiem cua phuong trinh:"<<x3<<"\n"<<x4;
                }else{
                        cout<<"x1 am ko co nghiem";
                }
                if(x2>0){
                    float x5=sqrt(x2);
                    float x6=-sqrt(x2);
                         cout<<"nghiem cua phuong trinh:"<<x5<<"\n"<<x6;
                }else{
                        cout<<"x2 am ko co nghiem";
                } 
                
        }else if(delta==0){
            float x9=-b/(2*a);
                if(x9>0){
                    float x7=sqrt(x9);
                    float x8=-sqrt(x9);
                        cout<<"nghiem cua phuong trinh:"<<x7<<"\n"<<x8;
                }else{
                        cout<<"x9 am ko co nghiem";
                }
        }else{
                        cout<<"phuong trinh vo nghiem";
        }
    }

    return 0;
}