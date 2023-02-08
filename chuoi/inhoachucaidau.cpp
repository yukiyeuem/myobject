#include<iostream>
#include<string.h>
using namespace std;

char *InHoaChuDau(char *n){
    char *p = strdup(n);
    int length =strlen(p);
    if(p[0] >= 'a' && p[0] <= 'z'){
        p[0] -= 32;
    }
    for (int i =0 ; i<length ; i++){
        if(p[i] == ' '&& p[i+1] != ' '){
            if(p[i+1] >= 'a' && p[i+1] <= 'z'){
                p[i+1] -=32;
            }
        }
    }
    return p;
}

void XoaKyTu(char *s, int vitrixoa){
    char *p =strdup(s);//tao ban sao
    int length = strlen(p);
    for(int i=vitrixoa+1;i<length;i++){
        s[i-1]=s[i];
    }
    s[length-1] = '\0';
}

int main(){
    char n[30];
    cout<<"nhap vao n:";
    gets(n);
    char p[30];
    strcpy(p, InHoaChuDau(n));
    // cout<<p<<"\n";
    XoaKyTu(n,1);
    cout<<n;
}