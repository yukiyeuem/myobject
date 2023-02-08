#include<iostream>
#include<math.h>
using namespace std;
#define max 100
void Nhapmang(int a[][max], int sodong, int socot){
    for(int i = 0;i<sodong;i++){
        for(int j  =0;j<socot;j++){
            cout<<"nhap vao so phan tu trong mang"<<"\t"<<i<<"\t"<<j<<endl;
            cin>>a[i][j];
        }
    }
}

void XuatMang(int a[][max],int sodong, int socot){
    for(int i =0;i<sodong;i++){
        for(int j=0;j<socot;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

int  tinhtongmang(int a[][max],int sodong,int socot){
    int sum = 0;
    for(int i =0;i<sodong;i++){
        for(int j=0;j<socot;j++){
            sum +=a[i][j];
        }
    }
    return sum;
}


int demsoluongsochan(int a[][max],int sodong,int socot){
    int dem=0;
    for(int i=0;i<sodong;i++){
        for(int j=0; j<socot;j++){
            if(a[i][j]%2==0){
                dem++;
            }
        }
    }
    
    return dem;
}

void insochan(int a[][max],int sodong,int socot){
    for(int i=0;i<sodong;i++){
        for(int j=0;j<socot;j++){
            if(a[i][j]%2==0){
                cout<<"so chan la:"<<a[i][j]<<"\t";
            }
        cout<<endl;
        }
    }
}

int ktrachinhphuong(int n){
    int a= sqrt(n);
    if(a*a==n) return 1;
    else
    return 0;
}

void ktrachinhphuongmang(int a[][max],int sodong,int socot){
    for(int i=0;i<sodong;i++){
        for(int j=0;j<socot;j++){
            if(ktrachinhphuong(a[i][j])==1){
                cout<<"day la so chinh phuong:"<<a[i][j]<<endl;
            }
        }
    }
}

int timkiem(int a[][max],int sodong,int socot,int x){
    for(int i =0;i<sodong;i++){
        for(int j=0;j<socot;j++){
            if(a[i][j]==x){
                return i;
            }
        }
    }
    return -1;
}

int MaxMin(int a[][max],int sodong,int socot,char phan_loai){
    
    int temp = a[0][0];
    for(int i=0;i<sodong;i++){
        for(int j=0;j<socot;j++){
            if (phan_loai==1)
            {
                if(a[i][j]>temp){
                    temp=a[i][j];
                }
            }else if(phan_loai==0){
                if(a[i][j]<temp){
                    temp=a[i][j];
                }
            }
            
        }
    }
        return temp;
}

int main(){
    int sodong,socot;
    int a[max][max];
    do{
        cout<<"nhap so dong"<<endl;
        cin>>sodong;
        if(sodong<0||sodong>max){
            cout<<"nhap lai so dong"<<endl;
        }
    }while(sodong<0||sodong>max);

    do{
        cout<<"nhap so cot"<<endl;
        cin>>socot;
        if(socot<0||socot>max){
            cout<<"nhap lai so cot"<<endl;
        }
    }while(socot<0||socot>max);

    Nhapmang(a,sodong,socot);
    XuatMang(a,sodong,socot);
    int sum1 =tinhtongmang(a,sodong,socot);
    cout<<"tong cua a[][]="<<sum1<<endl;;

    insochan(a,sodong,socot);
    int dem =  demsoluongsochan(a,sodong,socot);
    cout<<"so luong so chan co trong mang:"<<dem<<endl;

    ktrachinhphuongmang(a,sodong,socot);
    
    int x;
    cout<<"nhap so x"<<endl;
    cin>>x;
    int ktra= timkiem(a,sodong,socot,x);
    if(ktra==-1){
        cout<<"ko tim thay"<<endl;
    }else{
        cout<<"tim thay"<<endl;
    }

   



        
    int max1=MaxMin(a,sodong,socot,1);
    cout<<"max="<<max1<<endl;  
    int min1=MaxMin(a,sodong,socot,0);
    cout<<"min="<<min1<<endl;
            
        
        
    
        
    
        
    
   

}