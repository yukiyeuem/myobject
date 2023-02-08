#include<iostream>
using namespace std;
int TimMax(int a,int b,int c,int d){
    int max =c > b ? c : b;
    max = max > a ? max : a;
    max =max > d ? max :d;
    return max;
}
int TimMin(int a, int b,int c,int d){
    int min =c > b ? b : c;
    min = min > a ? a : min;
    min = min >d ? d: min;
    return min;
}
int main(){
    int a,b,c,d;
    cout<<"nhap a,b,c,d:";
    cin>>a>>b>>c>>d;
    int Max = TimMax(a,b,c,d);
    cout<<Max<<"\n";
    int Min = TimMin(a,b,c,d);
    cout<<Min<<"\n";

    return 0;
}