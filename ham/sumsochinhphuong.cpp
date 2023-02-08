#include<iostream>
#include<math.h>
using namespace std;

int sumcschinhphuong(int n){
    int sum = 0;
    int temp = n;
    int scs = log10((double)temp)+1;
    while(temp!=0){
        int chuso = temp%10;
        temp /=10;
        int a = sqrt(chuso);
        if(a*a == chuso){
            sum += chuso;
            }
    }
    
    return sum;
}
int main(){
    int n;
    cout<< "nhap n" <<endl;
    cin>>n;
    int sumchinhphuonga=sumcschinhphuong(n);
    cout<<"sum="<<sumchinhphuonga;
}