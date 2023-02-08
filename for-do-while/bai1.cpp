#include<iostream>
#include<math.h>
using namespace std;
void soChinhPhuong(int &n){

    int a=sqrt(n);
    if(a*a==n){
        cout<<"so chinh phuong";
    }else{
        cout<<"so nay ko phai so chinh phuong";
    }
}

int main(){
    int n;
    cout<<"nhap vao so n:";
    cin>>n;
    soChinhPhuong(n);
    return 0;
}
