#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,n;
    int result=1;
    cout<<"nhap x:";
    cin>>x;
    float sum=0;
    do{ 
        cout<<"nhap n:";
        cin>>n;
        if(n<=0){
            cout<<"nhap lai gia tri n:";
        }
   
    }while(n<=0);
    for(int i=1;i<=n;i++){
       if(i%2==0){
        continue;
       }
        result *= i ;
        sum +=(pow(x,i))/result;
    }
        cout<<sum;

    return 0;
}