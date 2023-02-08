#include<iostream>
#include<math.h>
using namespace std;

void Nhapmang(int a[],int n){
    for(int i =0;i<n;i++){
        cout<<"nhap so ptu a[i] trong mang"<<endl;
        cin>>a[i];
    }
}

void Xuatmang(int a[],int n){
    for(int i = 0;i<n;i++){
        cout<<"in ra phan tu a[i]="<<a[i]<<endl;
    }
}


//c1:  
int MangChan(int a[],int n){
 
    int dem = 0;
    for(int i =0;i<n;i++){
        if(a[i]%2==0){
            dem++;
        }
    }
        if(dem==n){
            return 1;
        }
        return 0;
    
}

//x2
int Mangchan2(int a[],int n){
    for(int i =0;i<n;i++){
        if(a[i]%2!=0){
            return 0;
        }
    }
    return 1;
}

void Mangngto(int a[],int n){
    int dem =0;
    for(int i =0;i<n;i++){
        for (int j = 1;j<=sqrt(a[i]);j++){
                if(a[i]%j==0){
                    dem++;
                }    
        }
    }   
        if(dem<2){
            cout<<"mang toan so ng to"<<endl;
        }else{
            cout<<"mang ko toan so ng to";
        }
}

int Mangtangdan(int a[],int n){
    for(int i =1;i<n;i++){
        if(a[i]>a[i-1]){
            return 1;  
        }
        // return 0;
        // if(a[i]>a[i-1]&& a[i]>a[i+1]){
        //     cout<<"ham ko tang ko giam";
        // }
    }
    return 0;
    
}

int main(){
    int n;
    cout<<"nhap so phan tu n:";
    cin>>n;
    int a[100];
    Nhapmang(a,n);
    Xuatmang(a,n);
    MangChan(a,n);


    int check =MangChan(a,n);
    if(check ==1){
        cout<<"mang toan so chan";
    }else{
        cout<<"mang co ca so le"<<endl;
    }

    Mangngto(a,n);


    int check2 = Mangchan2(a,n);
    if(check2 == 1){
        cout<<"mang toan so chan";
    }else{
        cout<<"mang co ca so le"<<endl;
    }
    int tangdan = Mangtangdan(a,n);
    if(tangdan == 1){
        cout<<"mang tang dan";
    }else{
        cout<<"mang giam dan";
    }
}