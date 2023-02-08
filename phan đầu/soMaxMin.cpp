#include<iostream>
using namespace std;
int main(){
    int a ,b,c,d,Max,Min;
    cout<<"nhap so:";
    cin>>a>>b>>c>>d;
    Max = a<b ? b:a;
    Max = Max<c ? c:Max;
    Max = Max<d ? d:Max;
    cout<<Max<<"\n";
    Min = a>b  ? b : a;
    Min = Min>c ? c : Min;
    Min = Min>d ? d : Min;
    cout<<Min;
    return 0;
}