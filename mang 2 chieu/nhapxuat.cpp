//cần nhớ
// 1.duyệt mảng
// 2.tìm kiếm 
// 3.xóa/thêm /sửa
// 4.sắp xếp

#include<iostream>
using namespace std;
#define Max 100

void Nhapmang(int a[Max][Max],int sodong, int socot){
    for(int i =0; i<sodong;i++){
        for(int j =0; j<socot;j++){
            cout<<"nhap cac so vao mang 2 chieu"<<"\t"<<i<<"\t"<<j<<endl;;
            cin>>a[i][j];
        }
    }
}

void Xuatmang(int a[Max][Max], int sodong , int socot){
    for(int i =0; i<sodong;i++){
        for(int j= 0;j<socot;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

int main(){
    //khai bao truc tiep
    // int a[5]={1,2,3,4,5};
    // int b[2][3]={{1,2,3},{4,5,6}};
    // for(int i =0;i<2;i++){
    //     for(int j =0;j<3;j++){
    //         cout<<b[i][j]<<"\t";
    //     }
    //     cout<<"\n";
    // }
    int a[Max][Max];
    int sodong,socot;
    do{
        cout<<"nhap so dong"<<endl;
        cin>>sodong;
        if(sodong<1||sodong>Max){
            cout<<"nhap lai so dong"<<endl;
        }
    }while(sodong<1||sodong>Max);


    do{
        cout<<"nhap so cot"<<endl;
        cin>>socot;
        if(socot<1||socot>Max){
            cout<<"Nhap lai so cot"<<endl;
        }
    }while(socot<1||socot>Max);
    Nhapmang(a,sodong,socot);
    Xuatmang(a,sodong,socot);
}