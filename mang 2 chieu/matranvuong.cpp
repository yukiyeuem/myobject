#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
#define max 100


void nhapmatran(int a[][max],int n){
// c1:       for(int i =0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"nhap so vao ma tran:"<<endl;
//             cin>>a[i][j];
//             // srand(time(NULL));
//             // a[i][j]=rand()% (20-10+1)+10;
//         }
//     }

//c2:
    for(int i =0;i<n*n;i++){
        cout<<"nhap so vao ma tran"<<endl;
        cin>>a[i/n][i%n];
        
    }

}

void xuatmatran(int a[][max],int n){
// c1:    for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<a[i][j]<<"\t";
//         }
//         cout<<"\n";
//     }

//c2:
    for(int i=0;i<n*n;i++){
        cout<<a[i/n][i%n]<<"\t";
        if((i+1)%n==0){// n o day la so cot
            cout<<"\n";
        }
    } 
}

void tinhtongtungdong(int a[][max],int n){
    for(int i=0;i<n;i++){
        int tong =0;
        for(int j=0;j<n;j++){
            tong +=a[i][j];
        }
        cout<<"tong cua tung dong "<<i<<":"<<tong<<endl;
    }
}

void tichtungcot(int a[][max],int n){
    for(int i=0;i<n;i++){
       int tich =1;
       for(int j=0;j<n;j++){
            tich *=a[i][j];
       }
       cout<<"tich cua dong "<<i<<":"<<tich<<endl;
    }
}


void tichduongcheochinh(int a[][max],int n){
    int tich =1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i=j){
                tich *=a[i][j];
            }
        }
    }
    cout<<"tich duong cheo="<<tich<<endl;
}

int main(){
    int a[max][max];
    int n;
    do{
        cout<<"nhap vao gia tri n"<<endl;
        cin>>n;
        if(n<0||n>max){
            cout<<"nhap lai gia tri n:"<<endl;
        }
    }while(n<0||n>max);
    nhapmatran(a,n);
    xuatmatran(a,n);

    tinhtongtungdong(a,n);
    tichtungcot(a,n);
    tichduongcheochinh(a,n);
}