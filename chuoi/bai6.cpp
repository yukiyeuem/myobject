#include<iostream>
#include<string.h>
using namespace std;

int ktratu(char *s){
    int dem=0;
    int length =strlen(s);
    if(s[0]!=' '){
        dem=1;
    }
    for(int i =0; i<length-1;i++){
        if(s[i] ==' '&& s[i+1]!=' '){
            dem++;
        }
    }
    return dem;
}

int main(){
    char s[100];
    cout<<"s"<<endl;
    gets(s);
    int ktra=ktratu(s);
    cout<<ktra;
}