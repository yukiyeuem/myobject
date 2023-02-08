#include<iostream>
// #include<string.h>

#include<string>

using namespace std;

int ktratu(string s){ ///= với char *s
    int length = s.length();//= với strlen(s)
    int dem = 0;
    if(s[0] != ' '){
        dem = 1;
    }
    for(int i = 0; i < length-1; i++){
        if(s[i] == ' '&& s[i+1] != ' '){
            dem++;
        }
    }
    return dem;
}

int main(){
    char s[100];
    cout<<"nhap chuoi s:"<<endl;
    gets(s);
    int sotu = ktratu(s);
    cout<<sotu;


}