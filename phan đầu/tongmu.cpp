#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"nhap n:";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     sum += pow(i,2);
    // }
    // cout<<sum;


    // int i=0;
    // while(i<=n){
    //     sum += pow(i,2);
    //     i++;
    // }
    // cout<<sum;

    int i =0;
    do{
        sum+=i;
        i++;
    }while(i<=n);
    cout<<sum;
    return 0;
}