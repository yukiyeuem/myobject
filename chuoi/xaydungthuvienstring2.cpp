#include<iostream>
#include<string.h>
using namespace std;

int STRLEN(char *);

void STRCPY(char *s1, char *s2){
    
    int length = STRLEN(s2);
    for(int i =0; i<length;i++){
        s1[i] = s2[i];
    }
    s1[length] = '\0';// ket thuc chuoi
}

int STRLEN(char *s){
    int dem = 0;
   
    while(s[dem++] !='\0'){
        dem++;
    }
    return dem-1;
}


char *STRLWR(char *s){
    char *p = strdup(s);
    int length = strlen (p);
    for(int i =0; i<length;i++){
        if(p[i]>='A'&&p[i]<='Z'){
            p[i] +=32; 
        }
    }
    return p;
}

char *STRUPR(char *s){
    char *p = strdup(s);
    int length =strlen(p);
    for(int i =0; i<length;i++){
        if(p[i]>='a'&&p[i]<='z'){
            p[i] -= 32;
        }
    }
    return p;
}

int main(){
    // char s[30];
    // strcpy(s, "hoaaang cute");
    // char p[30];

    // strcpy(p,STRLWR(s));
    // cout<<p<<endl;
    // strcpy(p,STRUPR(s));
    // cout<<p<<endl;

    // int dodai =STRLEN(s);
    // cout<<dodai<<endl;



    char s[] = "hoang dep zai lang tu dao hoa";
    char p[300];
    STRCPY(p,s);
    
    

}