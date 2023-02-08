#include<iostream>
using namespace std;
#define max 100

void nhapmang(int a[][max],int dong, int cot){
    for(int i=0;i<cot;i++){
        for(int j=0;j<dong;j++){
            cout<<"nhap so trong mang"<<endl;
            cin>>a[i][j];
        }
    }
}

void xuatmang(int a[][max],int dong, int cot){
    for(int i=0;i<cot;i++){
        for(int j=0;j<dong;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    
}

int maxdong(int a[][max],int chisodong,int cot, int &vitricot){
   int Max= a[chisodong][0];
   vitricot=0;
   for(int i =0;i<cot;i++){
        if(a[chisodong][i]>Max){
            Max=a[chisodong][i];
            vitricot=i;
        }
    }
    return Max;
}

int mincot(int a[][max],int dong,int chisocot){
    int Min=a[0][chisocot];
    for (int i = 0; i < dong; i++)
    {
        if(a[i][chisocot]<Min){
            Min =a[i][chisocot];
        }
    }
    return Min;
}
//chi dung khi cac phan tu khac nhau
// void lietkeYenNgua(int a[][max],int dong,int cot){
//     for(int i=0;i<dong;i++){
//         for(int j=0;j<cot;j++){
//             int vitricot;
//             int MaxDong = maxdong(a,i,cot,vitricot);
//             int Mincot = mincot(a,dong,vitricot);
//             if(MaxDong==Mincot){
//                 cout<<MaxDong<<endl;
//             }
//         }
//     }
// }

//ham truyen vao chi so dong i & j ktra xem no co la y8en ngua hay klo
//neu thoa man tra ve 1 ko thi tra ve 0
int ktraYenNgua(int a[][max],int dong,int cot,int chisodong,int chisocot){
    //ktra xem a[chisodong][chisocot] co la lon nhat tren do dong do hay ko
    for(int j=0;j<cot;j++){
        if(a[chisodong][j]>a[chisodong][chisocot]){
            return 0;//sai
        }
    }
    for(int i=0;i<dong;i++){
        if(a[i][chisocot]<a[chisodong][chisocot]){
            return 0;
        }
    }
    return 1;
}

void lietkeYenNgua(int a[][max],int dong,int cot){
    for(int i=0;i<dong;i++){
        for (int j=0;j<cot;j++){
            if(ktraYenNgua(a,dong,cot,i,j)==1)
            {
                cout<<a[i][j];
            }
        }
    }

}

int main(){
    int a[max][max];
    int dong;
    cout<<"nhap gia tri dong:"<<endl;
    cin>>dong;
    int cot;
    cout<<"nhap gia tri cot"<<endl;
    cin>>cot;
    nhapmang(a,dong,cot);
    xuatmang(a,dong,cot);
    lietkeYenNgua(a,dong,cot);
}