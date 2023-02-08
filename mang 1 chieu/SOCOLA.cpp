#include<iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int x,y,m;
        cin>>x>>y>>m;
        int lanDau=m/x;
        int vo=lanDau;
        while(vo>=y){
            int lanHai = vo/y;
            lanDau += lanHai;
            vo -= lanHai*y;
            vo += lanHai;
        }
        cout<<lanDau;
    }
}