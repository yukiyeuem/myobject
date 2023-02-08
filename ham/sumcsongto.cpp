#include<iostream>
#include<math.h>
using namespace std;

int sumcsngto(int n){
    int temp = n;
    int dem = 0;
    int sum = 0;
    while (temp!=0)
    {   
        int chuso =temp%10;
        temp/=10;
        for(int i =1; i<= sqrt(chuso);i++){
            if(chuso % i ==0){
                dem ++;
            }          
        }
        if(dem<2)sum += chuso;
        
    }
    return sum;

} 
int main(){
    int n;
    cout<<"nhap so n:"<<endl;
    cin>>n;
    int sumsongto =sumcsngto(n);
    cout<<sumsongto;
}