//nguyen tac khi nhap chuỗi, phải xóa bộ nhớ đệm 
//cách xóa fflush(stdin)//xóa trống bộ nhớ đệm
//strcpy(mang1,mang2);sao chép chuỗi mang2 vao mang1
//strdup(s);//(tạo vừa đủ sao chép ko dư ko thiếu)
//strlen(mang)// in ra đo dài mang
//strlwr(s);chuyển thành chữ thường
//strupr(s):chữ hoa
//strrev(s);hàm đảo
//strcmp(s1,s2)(so sánh phân biệt hoa thường):so sánh chuỗi là so sánh từng kí tự tương ứng ko phụ thuộc vào độ dài. nếu chuỗi s1 < s2 thì trả về -1; còn s1>s2 trả về 1, nếu s1=s2 trả về 0
//stricmp(s1,s2)(so sánh ko phân biệt hoa thường)
//strcat(s1,s2): nối chuỗi s1 vào s2 yêu cầu s1 đủ bộ lớn để chứa s2, ko đủ lớn là bị lỗi
//strstr((s1,s2)): tìm xem chuỗi s2 nằm trong s1 hay ko
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    float điểm;
    cout<<"nhap diem:";
    cin>>điểm;
    fflush(stdin);
    char a[30];
    cout<<"nhap a:"<<"\n";//note: nhap chuoi ko duoc co khoang trang ko se bi mat du lieu
    //c1:in bang 
    cin>>a;
    //c2 in bang:
    gets(a);//gets(ten)// se in ra het du lieu ko de bi thieu nhu cin
    cout<<"chao ban:"<<a<<"ban duoc"<<điểm<<"diem"<<'\n';
   

    char s[] ="Visual c++";
    int len =strlen(s);
    cout<<len<<"\n";
    //duyet chuoi di vao tung ki tu ben trong
    for(int i = 0;i<len;i++){
        cout<<s[i]<<"\n";
    }
    
    char ten[30];//neu do lon ko đủ chứa, nó bị tràn bộ nhớ
    strcpy(ten,s);//sao chép chuỗi(sẽ có thể dư or thiếu)
    cout<<ten<<"\n";

    char *ten3 = strdup(s);//(tạo vừa đủ ko dư ko thiếu)
    cout<<ten3<<"\n";
    strlwr(s);//chữ thường hết
    cout<<s<<"\n";
    strupr(s);//chữ hoa hết
    cout<<s<<"\n";
    strrev(s);//hàm đảo
    cout<<s<<"\n";
}
