//cap phat
#include<iostream>
using namespace std;
/*
int main(){
    int a=5;
    int *b;// khai bao con tro b
    b=&a;// cho con tro b tro toi bien a
    *b=a;
    cout<<&a<<endl;
    cout<<*b<<endl;
    cout<<b<<endl;
    cout<<&b<<endl;
}
*/
/* 
int main(){
    float a=5.6;
    void *b;// khai bao con tro vo kieu
    b= &a;
    (*(float *)b)--;// giam gia tri cua b di tru 1;
    cout<<&a<<endl;
    cout<<(*(float *)b)<<endl;
    cout<<&b<<endl;
    cout<<b<<endl;
}
*/
// ham nhap vao tham so la 2 con tro va tra ve gia tri lon nhat/ nho nhat
int TimMin(int *a , int *b){
    return *a < *b ? *a : *b;
}

int TimMax(int *a,int *b){
    return *a > *b ? *a : *b;
}

/*
có 2 cách cấp phát
- đẩy lên mức cao hơn
- tham chiếu*/

int main(){
    
    int *a,*b;
    a = new int ;
    b = new int ;
    cout<<"nhap gia tri a"<<endl;
    cin>>*a;
    cout<<"nhap gia tri b"<<endl;
    cin>>*b;

    int min =TimMin(a,b);
    int max =TimMax(a,b);
    cout<<"min la:"<<min<<endl;
    cout<<"max la:"<<max<<endl;

    delete []a;
    delete []b;


}
