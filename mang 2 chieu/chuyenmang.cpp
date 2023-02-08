#include<iostream>
using namespace std;
#define max 100

void ChuyenMang(int a[][max],int sodong,int socot,int b[]){
    int idx=0;
    for(int i =0 ;i<sodong;i++){
        for(int j=0;j<socot;j++){
            b[idx++]=a[i][j];
        }
    }
}




void lietkephanbiet(int b[],int n){
    for(int i =0;i<n;i++){
        int check =true;
        for(int j=i-1;j>=0;j--){
            if(b[i]==b[j]){//bi trung
                check =false;//cap nhap co hieu
                break;//thoat
            }
        }
        //neu ko trung
        if (check ==true){
            cout<<b[i];
        }
        
    }
}
int main(){
    int b[max];
    int sodong,socot;
    int a[max][max];
    ChuyenMang(a,sodong,socot,b);
    lietkephanbiet(b,sodong*socot);

}