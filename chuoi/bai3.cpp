#include<iostream>
#include<string.h>
using namespace std;

void xoa(char *s, int vitrixoa){
    int length = strlen(s);
    for(int i =vitrixoa+1;i<length; i++){
        s[i-1]=s[i];
    }
    s[length-1]='\0';
}

void xoakhoangtrang(char *s){
    int length = strlen(s);
    for(int i =0;i<length;i++){
        if( s[i]==' '&& s[i+1]==' '){
            xoa(s,i);
            i--;
            length--;
        }
    }
    if(s[0]==' '){
        xoa(s,0);
    }
}

int main(){
    char s[30];
    cout<<"nhap gia tri s:"<<endl;
    gets(s);
    xoakhoangtrang(s);
    cout<<s<<endl;
}