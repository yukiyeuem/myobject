#include<iostream>
using namespace std;


int main(){
    int t;
    int  n, ans, temp;
    cin >>t;
    while(t--){
    cin >> n;
    temp=2; ans=0;
    while(n/temp!=0){
        ans+=n/temp;
        temp*=2;
    }
    cout<<ans<<'\n';
  }
return 0;
}
