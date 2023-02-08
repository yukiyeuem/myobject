#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
#define max 100

void nhapmang(int a[][max],int sodong,int socot){
    for(int i=0;i<sodong;i++){
        for(int j=0;j<socot;j++){
            cout<<"nhap vao phan tu a[]:"<<endl;
            cin>>a[i][j];
            // srand(time(NULL));
            // a[i][j]=rand()%(20-10+1)+10;


        }
    }
}

void xuatnhap(int a[][max],int sodong, int socot){
    for(int i=0;i<sodong;i++){
        for(int j=0;j<socot;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}



//note: i/socot=sodong ,i%socot=socot
void lietkephanbiet(int a[][max],int sodong, int socot){
    cout<<"cac phan tu phan biet la:"<<endl;
    for(int i = 0;i < sodong*socot;i++){
        int check = 1;
        for(int j= i-1;j>=0;j--){
            if(a[i/socot][i%socot]==a[j/socot][j%socot]){
                check = 0;
                break;
            }
        }
        if(check==1){
            cout<<a[i/socot][i%socot]<<"\t";
        }
    }
}

void hoanvi(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void sapxep(int a[][max],int sodong,int socot,char phanloai){
    for(int i=0;i<sodong*socot-1;i++){
        for(int j=i+1;j<sodong*socot ; j++){
            if(phanloai=='t'){
                if(a[i/socot][i%socot]>a[j/socot][j%socot]){
                    hoanvi(a[i/socot][i%socot],a[j/socot][j%socot]);
                }
            }else if(phanloai=='g'){
                 if(a[i/socot][i%socot]<a[j/socot][j%socot]){
                    hoanvi(a[i/socot][i%socot],a[j/socot][j%socot]);
                }
            }
        }
    }
}

int main(){
    int a[max][max];

    int sodong;
    do{
        cout<<"nhap so dong"<<endl;
        cin>>sodong;
        if(sodong<0||sodong>max){
            cout<<"nhap lai so dong"<<endl;
        }
    }while(sodong<0||sodong>max);
    
    int socot;
    do{
        cout<<"nhap so cot"<<endl;
        cin>>socot;
        if(socot<0||socot>max){
            cout<<"nhap lai so cot"<<endl;
        }

    }while(socot<0||socot>max);
    nhapmang(a,sodong,socot);
    xuatnhap(a,sodong,socot);

    lietkephanbiet(a,sodong,socot);
    cout<<"\n";
    cout<<"sap xep tang dan"<<endl;
    sapxep(a,sodong,socot,'t');
    xuatnhap(a,sodong,socot);

}