
/*cap phat con tro giai phong bo nho
có 3 cách cấp phát con trỏ C:
1 malloc
2 calloc
3 realloc
thư viện hỗ trợ: #include<stdlib.h>
*/

#include<iostream>
using namespace std;

int main(){
    int *b;
    //cap phat bo nho con tro
    b=(int *) malloc(sizeof(int));
    *b=69;          
    cout<<*b<<endl;    
    free(b);//giai phong con tro
    cout<<*b<<endl;//ko biet trc gia tri la bao nhieu

    
}