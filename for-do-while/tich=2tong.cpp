#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    do{
    cout<<"nhap max n:"<<"\n";
    cin>>n;
    
    if(n<9||n>99){
        cout<<"nhap lai n"<<"\n";
    }
    }while(n<9||n>99);
    
    do{
    cout<<"nhap min m:"<<"\n";
    cin>>m;
    
    if(m>n){
        cout<<"nhap lai m:"<<"\n";
    }
    }while(m>n);

    
    
    for(int i=10;i<=n&&i>=m;i++){
        if (i>10){
            int temp=i;
            int chuso1 =temp%10;
            temp/=10;
            int chuso2 =temp%10;
            if((chuso1 * chuso2)==2*(chuso1+chuso2)){
                cout<<i<<"\n";
            }
        }
    }
    
    return 0;
}