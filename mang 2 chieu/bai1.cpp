#include<iostream>
using namespace std;
#define max 100

void nhapmang(int a[][max],int n){
    for(int i=0;i<n*n;i++){
        cout<<"nhap cac so vao mang"<<endl;
        cin>>a[i/n][i%n];
    }
    
}

void xuatmang(int a[][max],int n){
    for(int i=0;i<n*n;i++){
        cout<<a[i/n][i%n]<<"\t";
        if((i+1)%n==0){
            cout<<endl;
        }
    }
}

void timkiemmotphantutrongmang(int a[][max],int n,int x){
    int check = 0;
    for(int i = 0; i<n*n;i++){
        if(x == a[i/n][i%n]){
            check = 1;
        }
    }
    if(check==1){
        cout<<"so "<<x<< " co trong mang 2 chieu"<<endl;
    }else{
        cout<< "so "<<x<< " ko co trong mang 2 chieu"<<endl;

    }
}

void ktratinhchatmang(int a[][max],int n){
    int check =0;
    for(int i=0;i<n*n;i++){
        if(a[i]<a[i+1]){
            check =1;
        }else{
            check =0;
        }
    }
    if(check ==1){
        cout<<"tang dan"<<endl;
    }else{
        cout<<"giam dan"<<endl;
    }
}

void tongphantunuatrenduongcheo(int a[][max],int n){
    int sum =0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            sum += a[i][j];
        }
    }
    cout<<sum<<endl;
}

void tongcacsoduongduongcheo(int a[][max],int n){
    int sum=0;
    for(int i=n-1;i>n-n;i--){
        for (int j=i-1;j>=n-n;j--){
            sum +=a[i][j];
            // cout<<a[i][j]<<endl;
        }
    }
    cout<<"sum"<<sum<<endl;
}

int tongtungdong(int a[][max],int chisodong,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum +=a[chisodong][i];
    }
    return sum;
}

void tongdong(int a[][max],int n){
    for(int i=0;i<n;i++){
       int sum = tongtungdong(a,i,n);
       cout<<"tong dong"<< i<< "=" <<sum<<endl;
    }
}

void maxx(int a[][max],int n){
    int maxx =a[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>maxx){
                maxx= a[i][j];
            }
        }
    }
    cout<<maxx;
}

int sumsoduong(int a[][max],int n){
    int sum =0;
    for(int i=0;i<n*n;i++){
        if(a[i/n][i%n]>0){
            sum  += a[i/n][i%n];
        }
    }
    return sum;
} 

int sumvien(int a[][max],int dong,int cot){
    int sum = 0;
    for(int i = 0;i < cot ; i++){
        sum += a[0][i]+a[dong - 1][i];
    }

    for(int j=1;j<dong-1;j++){
        sum +=a[j][0]+a[j][cot-1];
    }
    return sum;
}

int main(){
    int a[max][max];
    int n;
    cout<<"nhap n duong"<<endl;
    cin>>n;
    nhapmang(a,n);
    xuatmang(a,n);
    int x;
    cout<<"nhap gia tri x"<<endl;
    cin>>x;
    timkiemmotphantutrongmang(a,n,x);
    ktratinhchatmang(a,n);
    tongphantunuatrenduongcheo(a,n);

    tongcacsoduongduongcheo(a,n);

    tongdong(a,n);

    maxx(a,n);

    int sum1 = sumsoduong(a,n);
    cout<<"sum so duong"<<sum1<<endl;

    int sum2 =sumvien(a,3,3);
    cout<<"so vien"<<sum2<<endl;
}