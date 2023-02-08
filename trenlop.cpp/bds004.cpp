#include<iostream>
#include<cmath>
using namespace std;

int sumuoc(int n,int m){
    int sum=0;
    int k=sqrt(n);
    for(int i=1;i<=k;i++){
        int value =n/i;
        if(n%i==0){
            
            if(m%i!=0&& m%value!=0){
                sum+=value+i;
            }else if(m%i==0 && m%value!=0){
                sum+=value;
            }else{
                sum+=i;
            }
        }else{
            continue;
        }
    }
    if(k*k==n){
        sum -=k;
    }
    return sum;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        int sum= sumuoc(n,m);
        cout<<sum<<endl;
    }
}