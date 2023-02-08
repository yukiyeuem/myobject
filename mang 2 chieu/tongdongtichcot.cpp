#include<iostream>
using namespace std;
#define max 100

void nhapmang(int a[][max],int n){
    for(int i =0;i<n*n;i++){
        cout<<"nhap vao cac so trong mang"<<endl;
        cin>>a[i/n][i%n];
    }
}

void xuatmang(int a[][max],int n){
    for(int i =0;i<n*n;i++){
        cout<<a[i/n][i%n]<<"\t";
        if((i+1)%n==0){
            cout<<endl;
        }
    }
}

int tongdong(int a[][max], int chisodong,int n){
    int sum=0;
    for(int j=0;j<n;j++){
        sum +=a[chisodong][j];
    }
    return sum;
}

int tichcot(int a[][max], int chisocot,int n){
    int tich=1;
    for(int j=0;j<n;j++){
        tich *=a[j][chisocot];
    }
    return tich;
}

void tongtungdong(int a[][max],int n){
    for(int i =0;i<n;i++){
        int tong = tongdong(a,i,n);
        cout<<"tong tung dong "<<i<<":"<<tong<<endl;
    }
}

void tichtungcot(int a[][max],int n){
    for(int i=0;i<n;i++){
        int tich =tichcot(a,i,n);
        cout<<"tich tung cot "<<i<<":"<<tich<<endl;
    }
}

void duongcheochinh(int a[][max],int n){
    int sum =0;
    for(int i=0;i<n*n;i++){
       sum+= a[i][i];
    }
    cout<<"sum duong cheo chinh"<<sum<<endl;
}

void timminmaxduongcheochinh(int a[][max],int n){
    int maxx,min;
    maxx = min = a[0][n - 1];
    cout<<a[0][n-1]<<endl;
    for(int i=1;i<n;i++){
        cout<<a[i][n-1-i]<<endl;
        maxx = a[i][n-1-i]>maxx ? a[i][n-1-i] : maxx;
        min = a[i][n-1-i]<min ? a[i][n-1-i] : min;
    }
    cout<<"max:"<<maxx<<endl;
    cout<<"min:"<<min<<endl;
}

void duongcheophu(int a[][max],int n){
    int sum = 0;
    for(int i =0 ;i<n*n;i++){
        sum +=a[i][n-1-i];
    }
    cout<<"sum duong cheo phu"<<sum<<endl;
}

int lietkevademsochan(int a[][max],int n){
    int dem = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            cout<<a[i][j]<<endl;
                if(a[i][j] % 2==0){
                    dem++;
                    cout<<"so chan="<<a[i][j]<<endl;
            }
            
        }
    }
    return dem;
}

int ktracochanduoiduongcheochinh(int a[][max],int n){
    int dem =0;
    for(int i=n-1;i>n-n;i--){
        for(int j=i-1;j>=n-n;j--){
            cout<<a[i][j]<<endl;
            if(a[i][j]%2==0){
                cout<<"in ra:"<<a[i][j]<<endl;
                dem++;
            }
        }
    }
    return dem;
}

void ktrasoxconamduoiduongcheoko(int a[][max],int n,int x){
    int check =0;
    for(int i =n-1;i>n-n;i--){
        for(int j=i-1;j>=n-n;j--){
            cout<<a[i][j]<<endl;
            if (x==a[i][j])
            {
                check=1;
            }
            
        }
    }
    if(check ==1 ){
        cout<<"gia tri nay nam duoi duong cheo"<<endl;
    }else{
        cout<<"ko cos gia tri nay thoa man"<<endl;
        }
}

int main(){
    int a[max][max];
    int n;
    cout<<"nhap so n"<<endl;
    cin>>n;
    nhapmang(a,n);
    xuatmang(a,n);
    
    int chisodong;
    do{
        cout<<"nhap vao gia tri chi so dong"<<endl;
        cin>>chisodong;
        if(chisodong>n-1){
            cout<<"nhap lai chi so dong"<<endl;
        }
    }while(chisodong>(n-1));

    int sum = tongdong(a,chisodong,n);
    cout<<sum<<endl;


    int chisocot;
    do{
        cout<<"nhap vao gia tri chi so cot"<<endl;
        cin>>chisocot;
        if(chisocot>n-1){
            cout<<"nhap lai chi so cot"<<endl;
        }
    }while(chisocot>(n-1));

    int tich = tichcot(a,chisocot,n);
    cout<<tich<<endl;

    tongtungdong(a,n);

    tichtungcot(a,n);

    duongcheochinh(a,n);

    duongcheophu(a,n);

    timminmaxduongcheochinh(a,n);

    // int lietke = lietkevademsochan(a, n);
    // cout<<lietke<<endl;
    

    int duoi =ktracochanduoiduongcheochinh(a,n);
    cout<<duoi<<endl;

    int x;
    cout<<"nhap gia tri x:"<<endl;
    cin>>x;

    ktrasoxconamduoiduongcheoko(a,n,x);

}