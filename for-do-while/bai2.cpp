#include<iostream>
#include<math.h>
using namespace std;

int sumsodaonguoc(int a,int b){
    
    int sumdoixung = 0;
    
    for(int i = a ; i <= b ; i++){
        int Temp = i;
        int sodaonguoc = 0;
        int dem = log10((double)Temp);
        while (Temp!=0)
        {
            int chuso = Temp%10;
            Temp/=10;
            sodaonguoc += chuso *pow(10, dem--);
        }
            
        if(i == sodaonguoc){
            
            sumdoixung += i;
            
        }     
    }
    return sumdoixung ;
}

int demsodaonguoc(int a, int b){
    int demsodaonguoc=0;
    for(int i = a ; i <= b ; i++){
        int Temp = i;
        int sodaonguoc = 0;
        int dem = log10((double)Temp);
        while (Temp!=0)
        {
            int chuso = Temp%10;
            Temp/=10;
            sodaonguoc += chuso *pow(10, dem--);
        }
            
        if(i == sodaonguoc){
            demsodaonguoc ++ ;    
        }     
    }
   return demsodaonguoc;
}

int ktrasochinhphuong(int a,int b){
    int sumchinhphuong = 0;
    for(int i = a;i < b;i++){
        int c=sqrt(i);
        if(c * c == i){
            sumchinhphuong +=i;
        }
    }
    return sumchinhphuong;
}

int demsochinhphuong(int a,int b){
    int demsochinhphuong =0;
    for(int i=a;i<b;i++){
        int c=sqrt(i);
        if(c*c==i){
            demsochinhphuong++;
        }        
    }
    return demsochinhphuong;
}

// int ktrasonguyento(int a, int b){
//     // int sumsongto = 0;
//     int dem = 1;
//     int i=a;
//     for(i; i<b ; i++){
//         for(int j=0;j<sqrt(i);j++){
//             if(i%j==0){
//                 dem++;
//             }
//             if(dem==2){
//                 // sumsongto +=i; 
//                 cout<<"in ra i:"<<i<<endl;
//             }  
//         }     
//     }
//         // cout<<"in ra i:"<<i<<endl;
//     return i;
// }

int inrasongto(int a,int b){
    int i = a;
    int dem = 1;
    for(i;i<b;i++){
        for (int j = 1; j<sqrt(i);j++){
            if(i%j==0){
                dem++;
            }
            if(dem>2){
                cout<<i<<endl;;
            }
        }
    }
    return i;
}

int main(){
    int a,b;
    do{
        cout<<"nhap so nguyen duong a"<<endl;
        cin>>a;
        if(a<0){
            cout<<"nhap lai gia a >0"<<endl;
        }
    }while(a<0);
    do{
        cout<<"nhap so b="<<endl;
        cin>>b;
        if(b<=a){
            cout<<"nhap lai gia tri b lon hon a:"<<endl;
        }
    }while(a>=b);

    // int sumdoixung=0;
    // int demsonguyento = 0;
    // for(int i = a ; i <= b ; i++){
    //     int Temp = i;
    //     int sodaonguoc = 0;
    //     int dem = log10((double)Temp);
    //     while (Temp!=0)
    //     {
    //         int chuso = Temp%10;
    //         Temp/=10;
    //         sodaonguoc += chuso *pow(10, dem--);
    //     }
            
    //     if(i == sodaonguoc){
    //         demsonguyento ++ ;
    //         sumdoixung += i;     
    //     }     
    // }
    // int sumdoixung=0;
    // int demsonguyento = 0;
    // int ktra = sumsodaonguoc(a,b);
    // cout<<ktra<<endl;
    // int dem = demsodaonguoc(a,b);
    // cout<<dem<<endl;
    // int sumsochinhphuong = ktrasochinhphuong(a,b);
    // cout<<sumsochinhphuong<<endl;
    // int demsschinhphuong = demsochinhphuong(a,b);
    // cout<<demsschinhphuong<<endl;
    // int sumngto=ktrasonguyento(a,b);
    // cout<<sumngto<<endl;
    int songto=inrasongto(a,b);
    cout<<songto;
}