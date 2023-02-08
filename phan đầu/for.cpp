#include<iostream>
using namespace std;
int main(){
    int n;
    int sum =0;
    cout<<"nhap n:";
    cin>>n;
  
    // ex:for
    // for(int i=0;i<=n;i++){
    //     sum += i;
    // }
    // cout<<sum;

    //while
    // int i=0;
    // while(i<=n){
        
    //     sum +=i;
    //     i++;
        
    // }
    // cout<<sum;

    // ex:do-while
    int i=0;
    do{
        
        sum+=i;
        i++ ;
        
    }while(i<=n);
    cout<<sum;
    return 0;
}