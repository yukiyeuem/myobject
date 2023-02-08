#include<iostream>
using namespace std;
#define max 50
void NhapHocSinh(char maso[10],char ten[30],float toan, float ly, float hoa){
    cout<<"nhap ma so"<<endl;
    cin>>maso;
    cout<<"nhap ten"<<endl;
    cin>>ten;
    cout<<"nhap toan"<<endl;
    cin>>toan;
    cout<<"nhap ly"<<endl;
    cin>>ly;
    cout<<"nhap hoa"<<endl;
    cin>>hoa;

}

void NhapDanhSach(char dsmaso[max][10],char dsten[max][30],float dstoan[],float dsly[],float dshoa[],int n){
    do{
        cout<<"nhap vao n:"<<"\n";
        cin>>n;
        if(n<0){
            cout<<"nhap lai gia tri n >0:"<<"\n";
        }
    }while(n<0);
    
    for(int i =0; i<n;i++){
        NhapHocSinh(dsmaso[i],dsten[i],dstoan[i],dsly[i],dshoa[i]);
    }
}
int main(){

    NhapDanhSach();
}