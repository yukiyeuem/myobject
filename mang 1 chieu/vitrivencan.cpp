
#include<iostream>
using namespace std;
#define max 100

void NhapMang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"nhap so phan tu a[i]"<<"\n";
        cin>>a[i];;
    }
}

void XuatMang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"\t"<<a[i]<<"\n";
    }
}

//tuần tự vén cản
// int KtraPhantu(int a[], int n,int x){
//     for(int i=0;i<n;i++){
//         if(a[i]==x){
//             return i;
//         }
//     }
//     return -1;
// }


//tuần tự lính canh
// int KtraPhantu(int a[],int n,int x){
//     a[n]=x;
//     for(int i=0;i<n;i++){
//         if(a[i]==x){
//             return i;
//         }
//     }
//     return -1;
// }


//mid
int KtraPhantu(int a[],int n,int x){
    int left = 0,right = n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(x > a[mid]){
            left = mid+1;
        }else if(x < a[mid]){
            left = mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){

    int n;
    int a[max];
    do{
        cout<<"nhap so luong phan tu:"<<"\n";
        cin>>n;
        if(n<0||n>max){
            cout<<"nhap lai so phan tu"<<"\nn";
        }
    }while(n<0||n>max);
    
    NhapMang(a,n);
    XuatMang(a,n);
    int x;
    cout<<"nhap gia tri x xem co ton tai trong mang hay ko:";
    cin>>x;
    int ktra=KtraPhantu(a,n,x);
    if(ktra==-1){
        cout<<"ko ton tai";
    }else{
        cout<<"ton tai tai vi tri:"<<ktra;
    }
}


