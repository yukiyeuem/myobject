#include<iostream>
using namespace std;

//in độ dài chuỗi
int STRLEN(char *s){
    int dem = 0;
    while(s[dem++] != '\0'){}
    return dem-1;
}

//sao chép chuỗi ( yêu cầu s1 phải dư bộ nhớ để sao chép s2)
void STRCPY(char *s1,char *s2){
    int length_s2 = STRLEN(s2);
    for(int i =0; i<length_s2;i++){
        s1[i]=s2[i];
    }
}


//sao chép chép chuỗi vừa đủ cho bộ nhớ ( ko thừa thiếu)
char *STRDUP(char *s){
    int length =STRLEN(s);
    char *p = (char *)malloc(length+1);
    STRCPY(p,s);
    return p;
}

// chuỗi thường
void STRLWR(char *s){
    int length = STRLEN(s);
    for(int i =0; i<length;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]+=32;
        }
    }
}


//chuỗi in hoa
void STRUPR(char *s){
    int length = STRLEN(s);
    for(int i =0; i<length;i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }
}

//dảo kí tự
void Hoanvi(char &x, char&y){
    char Temp = x;
    x = y;
    y = Temp;
}
void STRREV(char *s){
    int length = STRLEN(s);
    for(int i =0; i<length/2;i++){
        Hoanvi(s[i],s[length-1-i]);
    }
}

//so sanh chuoi
char STRCMP(char *s1,char *s2){
    int Min = STRLEN(s1)<STRLEN(s2) ? STRLEN(s1) : STRLEN(s2);
    int i ;
    for(int i =0; i< Min;i++){
        if(s1[i]<s2[i]){
            return -1;
        }else if(s1[i]>s2[i]){
            return 1;
        }
    }
    if(s1[i]=='\0'){
        if(s2[i]=='\0'){
            return 0;
        }else{
            return -1;
        }    
    }
    if(s2[i]=='\0'){
        if(s1[i]=='\0'){
            return 0;
        }else{
            return 1;
        }    
    }
    return i;
}


int main(){

    char s[]="huy hoang";
    int length =STRLEN(s);
    cout<<"do dai la:"<<length<<endl;


    char s1[]="hUy hoang"; 
    char s3[]="huy hoang";
    // char s2[100];
    // STRCPY(s2,s1); // gan s1 cho s2
    // cout<<s2<<endl;

    char *s2 = STRDUP(s1);
    cout<<"s2="<<s2<<endl;
    free(s2);//giải phóng con trỏ

    STRLWR(s);
    cout<<"s="<<s<<endl;
    STRUPR(s);
    cout<<"s1="<<s<<endl;

    STRREV(s);
    cout<<"hoan vi:"<<s<<endl;

    int sosanh = STRCMP(s3,s1);
    cout<<"so sanh"<<sosanh;

}
