#include<iostream>
using namespace std;
void BienDoi(int n){
    n--;
    cout<<"in ra n trong void:"<<n<<"\n";
}
int main(){
    int n=12;
    BienDoi(n);
    cout<<"in ra n trong main:"<<n<<"\n";
    cout<<n*5;
    return 0;
}