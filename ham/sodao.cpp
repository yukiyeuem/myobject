#include<iostream>
#include<math.h>
using namespace std;

int sodao(int n){
    
    int sodaonguoc=0;
    int temp = n;
    int scs = log10((double)temp);
    while(temp!=0){
        int chuso =temp%10;
        temp/=10;
        sodaonguoc += chuso *pow(10 , scs--);
    }
    return sodaonguoc;
}

// bool sodoixung(int n){
//     int temp =n;
//     int scs = log10((double)temp);
//     int sodaonguoc=0;
//     while(temp!=0){
//         int chuso = temp%10;
//             temp /=10;
//         sodaonguoc += chuso *pow(10,scs--);
//     }
//         // cout<<sodaonguoc<<endl;
//     if(n==sodaonguoc){
//         return true;
//     }      
//         return false;
    
// }

void ktrasochinhphuong(int n){
    int a =sqrt(n);
    if(a*a==n){
        cout<<"so chinh phuong"<<endl;
    }else{
        cout<<"ko phai so chinh phuong"<<endl;
    }
    
}

void ktrasonguyento(int n){
    int dem = 0;
    if(n<2){
        cout<<"ko phai so nguyen to"<<endl;
    }else{
        for(int i=3;i<sqrt(n);i++){
            if(n%i==0){
                dem++;
            }
        }
        if(dem>1){
                cout<<"ko phai so nguyen to"<<endl;
            }else{
                cout<<"ko phai so nguyen to"<<endl;
            }
    }
}


int sumchusole(int n){
    int temp =n;
    int sumsole=0;
    int scs = log10((double)temp)+1;
    while(temp!=0){
        int chuso = temp%10;
        temp /=10;
        if(chuso%2==1){
            sumsole +=chuso;
        }
    }
    return sumsole;
}



int main(){
    int n;
    cout<<"nhap so n"<<endl;
    cin>>n;
    // int dao = sodao(n);
    // cout<<dao<<endl;

    // int doixung = sodoixung(n);
    // ktrasochinhphuong(n);
    // ktrasonguyento(n);
    int sum = sumchusole(n);
    cout<<"sum = "<<sum<<endl;
}



















