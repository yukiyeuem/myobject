#include<iostream>
using namespace std;

int main(){
    int *x,y=2;// chua cap bo nho cho no
    x= new int;//(phai cap phat bo nho cho no)
    *x=y;// gia tri di vs gia tri( x=2,y=2)
    
    *x+=y++;// vi ++ la hau to nên cộng sau
    // thứ tự thực hiện sẽ là
    //b1:*x+=y; với y=2; x=2; => *x=4;y=2;
    // tiếp theo là đến y++ =>*x=4;y=3;
    cout<<"x="<<*x<<endl;
    cout<<"y="<<y<<endl;
}