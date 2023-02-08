#include<iostream>
#include<string.h>
using namespace std;
#define Max 10000

// viet hoa ky tu day cua moi tu
void vietHoaChuCaiMoiTu(char *s){
    int length =strlen(s);
    for(int i = 0 ; i<length ; i++){
        if(s[0]!=' '){
            if(s[0]>='a'&& s[0]<='z'){
                s[0]-=32;
            }
        } 
        if(s[i]== ' '  && s[i+1] != ' '){
            if(s[i+1]>='a' && s[i+1]<='z'){
                s[i+1] -= 32 ;
            }
        }
    }
}


int main(){
    char a[Max];
    cout<<"nhap vao ki tu ="<<endl;
    gets(a);
    char p[Max];
    strcpy(p,a);
    cout<<p<<endl;

    vietHoaChuCaiMoiTu(a);
    cout<<a<<endl;
}


















































































