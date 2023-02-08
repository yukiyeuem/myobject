#include<iostream>
using namespace std;
int main(){

    int a[]={1,2,3,4,5,6,7};
    int n = sizeof(a)/sizeof(a[0]);// tim duoc so phan tu trong mang a
    for(int i=0; i<n;i++){
        cout<<a[i];
    }
    return 0;
}