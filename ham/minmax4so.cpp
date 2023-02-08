#include<iostream>
using namespace std;

float Min(float a,float b,float c,float d){
    float min;
    min = d > c ? c : min;
    min = min > b ? b : min;
    min = min > a ? a : min;
    return min;
}
int main(){
    float a,b,c,d;
    cout<<"nhap a ,b,c,d theo thu tu:"<<endl;
    cin>>a>>b>>c>>d;
    float findmin = Min(a,b,c,d);
    cout<<findmin;
}