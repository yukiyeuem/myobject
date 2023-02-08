#include<iostream>
using namespace std;
int main(){
    int n;
    int result=1;//tai sao ko duoc vi tich se duoc cong don
    int sum=0;
    do{
        cout<<"nhap n:";
        cin>>n;
        if(n<0){
            cout<<"nhap lai n";
        }
    }while(n<0);

    // for(int i=1; i<=n;i++){
    //     int result=1;//tai sao? co đinh tich =1
    //     for(int j=1;j<=i;j++){
    //         result*=j;
    //     }
    //     sum +=result;
    // }

    for(int i=1; i<=n;i++){
        result*=i;
        sum+=result;
    }
    cout<<sum;
    return 0;
}