#include<iostream>
#include<string.h>
using namespace std;

char *SubStr(char *s, int Start, int End){
    char p[100];
    int idx = 0;
    for(int i=Start ;i<=End;i++){
        p[idx++]=s[i];
    }
    p[idx]= '\0';
    // return p;
}

void XuatCacTu(char*s){
    int Start,End;
    int length =strlen(s);
    for(int i =0; i<length;i++){
        if(s[i]!= ' '){
            Start = i;
            for(int j =Start+1; j<=length;j++){
                if(s[j]==' '||s[j] == '\0'){
                    End = j-1;
                    char p[100];
                    strcpy(p,SubStr(s,Start,End));
                    cout<<p<<endl;
                    i=j;//cap nhat vi tri chay
                    break;
                }
            }
        }
    }
}

int main(){
    // char p[100];
    char s[] = "huy hoang";
    // strcpy(p, SubStr(s,2,4));
    XuatCacTu(s);

}