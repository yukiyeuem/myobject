#include<iostream>
using namespace std;
#define MAX 50
void NhapMang(double a[],int n){
    for(int i = 0; i<n ; i++){
        cout<<"Nhap vao a[]:"<<"\n";
        cin>>a[i];
    }
}
void XuatMang(double a[],int n){
    for(int i =0 ; i<n; i++){
        cout<<a[i]<<"\n";
    }
}
double TimMax(double a[],int n){
    double Max=a[0];
    for(int i =1; i<n;i++){
        if(Max<a[i]){
            Max=a[i];
        }
    }
    return Max;
}

double TimMin(double a[],int n){
    double Min=a[0];
    for(int i =1; i<n;i++){
        if(Min>a[i]){
            Min=a[i];
        }
    }
    return Min;
}

double Tong(double a[],int n){
    double result =0;
    for(int i =0; i<n;i++){
        result += a[i];
    }
    return result;
}

int Soluongdiemlonnhat(double a[],int n,int Max){
    int dem =0;
    for(int i =0; i<n;i++){
        if(a[i]==Max){
            dem++;
        }
    }
    return dem;
}

int main(){
    int n;
    double a[MAX];
    do{
        cout<<"nhao n so:"<<"\n";
        cin>>n;
        if(n<0||n>MAX){
            cout<<"nhap lai n duong:";
        }
    }while(n<0||n>MAX);
    NhapMang(a,n);
    XuatMang(a,n);
    double max=TimMax(a,n);
    cout<<"max trong mang la:"<<max<<"\n";
    double min=TimMin(a,n);
    cout<<"min trong mang la:"<<min<<"\n";
    double result =Tong(a,n);
    cout<<"tong mang la:"<<result<<"\n";

    int dem=Soluongdiemlonnhat(a,n,max);
    cout<<"so luong diem lon nhat"<<dem<<"\n";
}