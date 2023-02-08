#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    float sum=0;
    cout<<"nhap n:";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     sum +=float(1.0/i);
    // }
    // cout<<sum;
    // int i=1;
    // while (i<=n)
    // {
    //     sum += float(1.0/i);
    //     i++;
    // }
    // cout<<sum;
    int i=1;
    do{
        sum+=1;
        i++;
    }while(i<=n);
    cout<<sum;
    
    return 0;
}