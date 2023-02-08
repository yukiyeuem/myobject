#include<iostream>
#include<string.h>
using namespace std;

void ThemKyTuVaoChuoi(char *s,char kytuthem , int vitrithem){
    int length =strlen(s);
    for(int i = length -1; i>=vitrithem;i--){
        s[i+1]=s[i];
    }
    s[vitrithem]=kytuthem;
    s[length+1]='\0';
}

int main(){
    // char s[100]="12";
    // ThemKyTuVaoChuoi(s,'0',0);
    // cout<<s;

    char s1[30]="123456";
    char s2[30]="789";

    int length_s1 = strlen(s1);
    int length_s2 = strlen(s2);

    int Min = length_s1 > length_s2 ? length_s2 : length_s1;
    int Max = length_s2 > length_s1 ? length_s2 : length_s1;
//----------------------------Buoc 1:-----------------------------
    if(Min == length_s1){
        for( int i =1; i<=Max - Min;i++){
            ThemKyTuVaoChuoi(s1,'0',0);
        }
    }else if(Min == length_s2){
        for(int i =1; i<= Max - Min;i++){
            ThemKyTuVaoChuoi(s2,'0',0);
        }
    }
    // cout<<s1<<endl;
    // cout<<s2<<endl;
    //doi ki tu sang so -48;

    char ketqua[30];
    int idx = 0 ;
    int nho =0;
    for(int i = Max -1;i>=0;i--){
        int so = (s1[i]-48)+(s2[i]-48)+ nho;
        nho = so/10;
        so %= 10;
        ketqua[idx++]=so+48;
    }
    if(nho!=0){
        ketqua[idx++] = nho+48;
    }
    ketqua[idx]='\0';
    strrev(ketqua);//dao lai 
    cout<<ketqua;

}
