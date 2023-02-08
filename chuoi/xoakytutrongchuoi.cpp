#include<iostream>
#include<string.h>
using namespace std;

void Xoa(char *a, int vitrixoa){
    int n =strlen(a);
    for(int i = vitrixoa+1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]='\0';
}

void XoaKhoangTrangThua(char *s){
    
    
    int length =strlen(s);
    for(int i = 0; i<length;i++){
        if(s[i]==' '&&s[i+1]==' '){
            Xoa(s,i);
            i--;
            length--;
        }
    }
    //xoa đầu
    if(s[0]==' '){
        Xoa(s,0);
    }
    //xóa cuối 
    
}

int main()
{
    char a[30];
    cout<<"nhap vao a:"<<endl;
    gets(a);
    // Xoa(a,3);
    // cout<<a<<endl;
    XoaKhoangTrangThua(a);
    cout<<a<<endl;
}