#include<iostream>
using namespace std;
#define max 100
void nhapmang(int a[][max],int sodong,int socot){
    for(int i=0;i<sodong;i++){
        for(int j=0;j<socot;j++){
            cout<<"nhap so phan tu trong mang hai chieu a[]"<<"\t"<<i<<"\t"<<j<<endl;
            cin>>a[i][j];
        }
    }
}

void xuatmang(int a[][max],int sodong,int socot){
    for(int i=0;i<sodong;i++){
        for(int j=0;j<socot;j++){
            cout<<"in ra gia tri a[i][j]"<<a[i][j]<<endl;
        }
    }
}
int minmax(int a[][max],int sodong,int socot, char phanloai){
    
    int temp ;
    temp = a[0][0];
    for(int i=0;i<sodong;i++){
        for(int j=0;j<socot;j++){
            if(phanloai=1){
                if(temp<a[i][j]){
                    temp=a[i][j];
                }
            }
            if(phanloai==0){
                if(temp>a[i][j]){
                    temp=a[i][j];
                }
            }
        }
    }
    return temp;
}

int main(){
    int a[max][max];
    int sodong;
    do{
        cout<<"nhap so dong"<<endl;
        cin>>sodong;
        if(sodong<=0||sodong>max){
            cout<<"nhap lai gia  tri so dong"<<endl;
        }
    }while(sodong<=0||sodong>max);


    int socot;
    do{
        cout<<"nhap so cot"<<endl;
        cin>>socot;
        if(socot<=0||socot>max){
            cout<<"nhap lai gia  tri so dong"<<endl;
        }
    }while(socot<=0||socot>max);
    nhapmang(a,sodong,socot);
    xuatmang(a,sodong,socot);

    char phanloai;
    do{
        cout<<"nhap gia tri 0 or 1 cho phan loai:"<<endl;
        cin>>phanloai;
        if(phanloai>1||phanloai <0){
            cout<<"nhap lai gia tri cho phan loai"<<endl;
        }
    }while(phanloai>1||phanloai <0);

    int timminmax = minmax(a,sodong,socot,phanloai);
    cout<<timminmax;

}