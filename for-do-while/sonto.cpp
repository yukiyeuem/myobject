//cách1:
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int check=1;//true(kĩ thuật đặt cờ)
    do{
    cout<<"nhap n=";
    cin>>n; 
    if(n<=0){
        cout<<"nhap lai n:"<<"\n";
    }
    }while(n<=0);
    
    if(n<2){
        cout<<"ko phai so nguyen so";
    }else{
    
    for(int i=2;i<=sqrt((double)n);i++){
        if(n%i==0){
            check = 0;
            break;
        }
        
    }
    if(check==0){
        cout<<" ko la so nguyen to";
    }else{
        cout<<"la so nguyen to";
    }
    }
    
    return 0;
}

//kiểm tra số nguyên tố 
//vd như số 10 : nó sẽ so sánh với các số từ 1 đến 9

//cách 2: ta thấy n ko thể chia hết cho các số từ n/2đến n-1
//cách 3: ta chỉ cân xét đến căn bậc 2 của n;
//cách 4:ta thấy số 2 là số chẵn nguyên tố duy nhất
