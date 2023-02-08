#include<iostream>
using namespace std;


int maxSumArr(int a[], int n){
    int maxSoFar = a[0];
    int currMax = a[0];
    for(int i = 1 ; i < n ; i++){
        currMax = max(a[i],currMax+a[i]);//max trong khoang tu a[i] den a[0]+a[i]
        maxSoFar = max(maxSoFar , currMax);
    }
    return maxSoFar;
}
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i = 0 ; i < n ; i++)
            cin>>a[i];
            cout<<maxSumArr(a,n);
        
    }
    return 0;
}