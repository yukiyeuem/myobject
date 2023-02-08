#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int a,b,c;
    cout<<"nhap 3 do dai ba canh:";
    cin>>a>>b>>c;
    if((a+b)>c){
        cout<<"day la 3 canh cua mot tam giac";
        if(a==b&&b==c){
            cout<<" deu";
        }else if(a==b||b==c||c==a){
            cout<<"tam giac can";
        }else if((pow(a,2)==pow(b,2)+pow(c,2))||(pow(b,2)==pow(a,2)+pow(c,2))||(pow(c,2)==pow(b,2)+pow(a,2))){
            cout<<" vuong";
        }else if(a==b==c){
            cout<<" deu";
        }else{
            cout<<" thuong";
        }
    }else{
        cout<<"nhap lai 3 canh";
    }

    return 0;
}