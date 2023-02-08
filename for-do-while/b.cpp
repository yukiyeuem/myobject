#include<bits/stdc++.h>
using namespace std;


int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
    int n;
    int A[10000];
    cin>>n;
    int Check = 0;
    for(int i = 0; i<n;i++){
        cin>>A[i];
    }
    int d=A[1]-A[0];
    for(int i = 1; i<n;i++){
        if(A[i]!=(A[0]+i*d)){
            Check ++;
            break;
        }
    }    
       
        if(Check == 0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    
    }
    return 0;
    
}