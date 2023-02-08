#include<iostream>
using namespace std;
int GiaiThua(int n){
    int result=1;
    for(int i=1;i<=n;i++){
        result *=i;
    }
    return result;
}


int main(){
    int n;
    cout<<"nhap gia tri n:";
    cin>>n;
    int result = GiaiThua(n);
    cout<<result;
    return 0;
}