#include<iostream>
using namespace std;
void nhapSo(int &m,int &n){
    
    do{
        cout<<"nhap so m:"<<"\n";
        cin>>m;
        if(m<0){
            cout<<"nhap lai m >0:"<<endl;
        }
    }while(m<0);
    do{
        cout<<"nhap so n:"<<"\n";
        cin>>n;
    if(n<0){
        cout<<"nhap so n>0:"<<endl;
    }
    }while(n<0);
}

void UCLN(int &m,int &n){
    int Max = m > n ? m:n;
    int Min = m < n ? m:n;
    int ucln;
    if(Max % Min == 0){
        ucln = Min;
    }else{
        for(int i = Min/2; i>=1;i--){
            if(Max%i==0 && Min%i==0){
                ucln = i;
                break;
            }
        }
    }
    cout<<"uoc chung lon nhat:"<<ucln;
}

//c2:

int main()
{
    int m,n;
    nhapSo(m,n);
    UCLN(m,n);
}
    
    

