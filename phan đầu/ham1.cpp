#include<iostream>
using namespace std;
float XuLyDuDieu(float a, float b, float c, char phepToan){
    if(phepToan == '+'){
        return a+b+c;
    }
    if(phepToan == '-'){
        return a-b-c;
    }
    if(phepToan =='*'){
        return a*b*c;
    }
    return b==0 ? a : a/b/c;
}
int main(){
    int a,b,c;
    cout<<"nhap a ,b,c:";
    cin>>a>>b>>c;
    int Tong = XuLyDuDieu(a,b,c,'+');
    cout<<Tong<<"\n";
    int Hieu = XuLyDuDieu(a,b,c,'-');
    cout<<Hieu<<"\n";
    int Tich = XuLyDuDieu(a,b,c,'*');
    cout<<Tich<<"\n";
    float Thuong = XuLyDuDieu(a,b,c,'/');
    cout<<Thuong<<"\n";
    return 0;
}