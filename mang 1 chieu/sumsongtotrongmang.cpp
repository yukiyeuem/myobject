#include<iostream>
#include<math.h>
using namespace std;

void Nhapmang(int a[],int n){
    for(int i =0; i<n;i++){
        cout<<"nhap so vao mang"<<endl;
        cin>>a[i];
    }
}

void Xuatmang(int a[],int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int ktarsonguyento(int n){
    int dem =0;
    for(int i = 1;i<=sqrt(n);i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem>=2)  
            return 0;
        else
            return 1;
        
}

// vị trí số nguyên tố đầu tiên trong mảng nếu có
int TimViTriNguyenToDautien(int a[],int n){
    for(int i = 0;i<n;i++){
        if(ktarsonguyento(a[i])==1){
            return i;
        }
    }
    return -1;
}

int sum(int a[],int n){
    int sum = 0;
    for(int i =0;i<n;i++){
        if(ktarsonguyento(a[i])==1){
            sum += a[i];
        }
    }
    return sum;
}

//tim min duong trong mang
int TimduongMin(int a[],int n){
    int vitriduongdautien = -1;
    for(int i =0;i<n;i++){
        if(a[i]>=0){
            vitriduongdautien = i;
            break;
        }
    }
    if(vitriduongdautien==-1){
        return vitriduongdautien ;
    }
    int Min = a[vitriduongdautien];
    for(int i= vitriduongdautien+1;i<n;i++){
        if(a[i]>=0&&a[i]<Min){
           Min=a[i];
        }
    }
    return Min;
}






int main(){
    int n;
    cout<<"nhap so n"<<endl;
    cin>>n;
    int a[100];
    Nhapmang(a,n);
    Xuatmang(a,n);
    int sumsongto= sum(a,n);
    cout<<"sum="<<sumsongto<<endl;;

    int vitrisonguyen = TimViTriNguyenToDautien(a,n);
    cout<<"vi tri"<<vitrisonguyen<<endl;
   
    int min = TimduongMin(a,n);
    cout<<min;
}