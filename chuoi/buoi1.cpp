//atoi: đổi chuỗi về số nguyên
//atof: đổi chuỗi về số thập phân
//itoa: đổi về hệ thập nhị lục phân
//strtok: hỗ trợ cắt chuỗi
#include<iostream>
#include<string.h>
using namespace std;

void XoaKyTu(char chuoi[],int vitrixoa){
    int length =strlen(chuoi);
    for(int i =0; i<length;i++){
        chuoi[i-1]=chuoi[i];
    }
    chuoi[length-1]='\0';
}

int main(){
    int s1=250;
    char s[]="6";
    double so =atoi(s);
    cout<<so<<'\n';
    itoa(s1,s,16);  
    cout<<s<<endl;
    char danhsach [5][40]{
        "Pham Huy Hoang",
        "hoang huy pham",
        "hoang pham huy",
        "huy hoang pham",
        "huy pham hoang",
    };
    for(int i =0;i<5;i++){
        cout<<danhsach[i]<<endl;
    }

    //cach dung strtok
    char chuoi[]="hoang,huy,pham";
    char *substr=strtok(chuoi, ",");// tức là đến dấu phẩy sẽ bị cắt chuỗi và in ra màn hình phía trước đó
    cout<<substr<<endl;

    substr=strtok(NULL, ",");// lấy chuỗi sau khi chuỗi đã bị cắt và tiếp tục cắt 
    cout<<substr<<endl;
    XoaKyTu(chuoi,3);
}

/*cách chuyển về hệ 2:
250:2=123 dư 0
125:2=62 dư 1
62:2=31 dư 0
31:2=15 dư 1
15:2=7 dư 1
7:2=3 dư 1
3:2=1 dư 1
1:2 =0 dư 1
khi trả về 0 đọc các giá trị dư ngược lại từ dưới lên ta được 11111010
*/