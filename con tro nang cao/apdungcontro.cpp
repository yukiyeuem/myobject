#include<iostream>
#include<cmath>
using namespace std;

bool ktrangto(int x){
    if(x<2) return false;
    else if(x>2){
        if(x%2==0){
            return false;
        }
        for(int i=3;i<=(int)sqrt(1.0*x);i+=2){
            if(x%i==0){
                return false;
            }
          
        }
    }
    return true;
}

int main(){
    int x=40;
    if(ktrangto(x)==false){
        int i=2;
        while (true){
        if(x%i==0 && ktrangto(i)==true){
            cout<<i<<"\t";
            x/=i;
            if(x==1){
                break;
            }
        }else{
            i++;  
        }
             
    }
    }else{
        cout<<x<<endl;
    }
}

/*
---------con tro ham----------

*/
