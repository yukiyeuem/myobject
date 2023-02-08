#include<iostream>
#include<string.h>
using namespace std;
char *ChuoiHoa(char *s){
    //tạo bản sao
    char *p = strdup(s);
    //biến đổi chuỗi in hoa
    strupr(p);
    return p;
}

char *ChuoiThuong(char *s){
    //tạo bản sao
    char *p = strdup(s);
    // biến đổi thành chuỗi thường
    strlwr(p);
    return p;
}

int main(){
    char s[] = "hoang cute";
    char p[30];
    strcpy(p,ChuoiHoa(s));
    cout<<p<<endl;

    strcpy(p,ChuoiThuong(s));
    cout<<p<<endl;


}