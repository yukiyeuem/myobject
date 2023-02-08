#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
#define MAX 1000    

void Xuatmang(int a[],int n){
    for(int i = 0;i<n;i++){
        cout<<"in ra gia tri a[i]"<<a[i]<<endl;
    }
}

int KiemTraNgto(int n){
    int dem = 0;
    for(int i =0; i<sqrt(n);i++){
        if(n%i==0){
            dem++;           
        }
    }
    if(dem>=2)
        return 0;
    else
        return 1;
}

void TachSoNguyenTo(int a[],int n,int b[],int &m){
    m=0;
    for(int i =0;i<n;i++){
        if(KiemTraNgto(a[i])==1){
            b[m++] = a[i];
        }
    }
}

int main(){
    int a[MAX];
    int n;
    do{ 
        cout<<"nhap vao gia tri n:"<<endl;
        cin>>n;
        if(n<0||n>MAX){
            cout<<"so luong ko hop le vui long nhap lai";
        }
    }while(n<0||n>MAX);
//random yeu cau
//thư viên: stdlib.h và time.h
//srand(time(0));
//a+rand()%(b-a+1)
//(ramdom trong đoạn từ -20 --> 30)
    srand(time(0));
    for(int i=0;i<n;i++){
       
        a[i]=- 20 + rand() %51;
    }
    Xuatmang(a,n);

    cout<<"mang b chua cac ng to trong mang a la:"<<endl;
    int b[MAX] , m;
    TachSoNguyenTo(a,n,b,m);
    Xuatmang(b,m);
}