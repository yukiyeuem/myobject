#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int tienhang;
    cout<<"nhap so tien cua mon hang:"<<endl;
    cin>>tienhang;

    int tienkhachdua;
    cout<<"nhap so tien khach dua:"<<endl;
    cin>>tienkhachdua;

    int temp = tienkhachdua - tienhang;
    if(temp>=500){
        int to500 = temp/500;
        cout<<to500<<"to 500"<<endl;
        temp %=500; 
            
            if(temp>=200&&temp<500){
                int to200 = temp/200;
                cout<<to200<<"to 200"<<endl;
                temp%=200;
            }
                
                if(temp>=100&& temp<200){
                    int to100 = temp/100;
                    cout<<to100<<"to 100"<<endl;
                    temp%=100;
                }
                    
                    if(temp>=50&&temp<100){
                        int to50 = temp/50;
                        cout<<to50<<"to 50"<<endl;
                        temp%=50;
                    }
                    
                        if(temp>=20&&temp<50){
                            int to20 = temp/20;
                            cout<<to20<<"to 20"<<endl;
                            temp%=20;
                            }
                            
                            if(temp>=10&&temp<20){
                                int to10 = temp/10;
                                cout<<to10<<"to 10"<<endl;
                                temp%=10;
                            }
                                
                                if(temp>=5&&temp<10){
                                    int to5 = temp/5;
                                    cout<<to5<<"to 5"<<endl;
                                    temp%=5;
                                }
                                    
                                    if(temp>=2&&temp<5){
                                        int to2 = temp/2;
                                        cout<<to2<<"to 2"<<endl;
                                        temp%=2;
    
                                        }else{
                                            int to1 = temp/1;
                                            cout<<to1<<"to 1"<<endl;
                                        }
    }else if(temp>=200&&temp<500){
        int to200 = temp/200;
        cout<<to200<<"to"<<endl;
        temp%=200;
            if(temp>=100&& temp<200){
                    int to100 = temp/100;
                    cout<<to100<<"to 100"<<endl;
                    temp%=100;
                }
                    if(temp>=50&&temp<100){
                        int to50 = temp/50;
                        cout<<to50<<"to 50"<<endl;
                        temp%=50;
                    }
                    
                        if(temp>=20&&temp<50){
                            int to20 = temp/20;
                            cout<<to20<<"to 20"<<endl;
                            temp%=20;
                            }
                            
                            if(temp>=10&&temp<20){
                                int to10 = temp/10;
                                cout<<to10<<"to 10"<<endl;
                                temp%=10;
                            }
                                
                                if(temp>=5&&temp<10){
                                    int to5 = temp/5;
                                    cout<<to5<<"to 5"<<endl;
                                    temp%=5;
                                }
                                    
                                    if(temp>=2&&temp<5){
                                        int to2 = temp/2;
                                        cout<<to2<<"to 2"<<endl;
                                        temp%=2;
    
                                        }else{
                                            int to1 = temp/1;
                                            cout<<to1<<"to 1"<<endl;
                                        }

        }else if(temp>=100&& temp<200){
            int to100 = temp/100;
            cout<<to100<<"to"<<endl;
            temp%=100;
            if(temp>=50&&temp<100){
                        int to50 = temp/50;
                        cout<<to50<<"to 50"<<endl;
                        temp%=50;
                    }
                    
                        if(temp>=20&&temp<50){
                            int to20 = temp/20;
                            cout<<to20<<"to 20"<<endl;
                            temp%=20;
                            }
                            
                            if(temp>=10&&temp<20){
                                int to10 = temp/10;
                                cout<<to10<<"to 10"<<endl;
                                temp%=10;
                            }
                                
                                if(temp>=5&&temp<10){
                                    int to5 = temp/5;
                                    cout<<to5<<"to 5"<<endl;
                                    temp%=5;
                                }
                                    
                                    if(temp>=2&&temp<5){
                                        int to2 = temp/2;
                                        cout<<to2<<"to 2"<<endl;
                                        temp%=2;
    
                                        }else{
                                            int to1 = temp/1;
                                            cout<<to1<<"to 1"<<endl;
                                        }
        }else if(temp>=50&&temp<100){
            int to50 = temp/50;
            cout<<to50<<"to"<<endl;
            temp%=50;

                if(temp>=20&&temp<50){
                            int to20 = temp/20;
                            cout<<to20<<"to 20"<<endl;
                            temp%=20;
                            }
                            
                            if(temp>=10&&temp<20){
                                int to10 = temp/10;
                                cout<<to10<<"to 10"<<endl;
                                temp%=10;
                            }
                                
                                if(temp>=5&&temp<10){
                                    int to5 = temp/5;
                                    cout<<to5<<"to 5"<<endl;
                                    temp%=5;
                                }
                                    
                                    if(temp>=2&&temp<5){
                                        int to2 = temp/2;
                                        cout<<to2<<"to 2"<<endl;
                                        temp%=2;
    
                                        }else{
                                            int to1 = temp/1;
                                            cout<<to1<<"to 1"<<endl;
                                        }

    }else if(temp>=20&&temp<50){
        int to20 = temp/20;
        cout<<to20<<"to"<<endl;
        temp%=20;

            if(temp>=10&&temp<20){
                int to10 = temp/10;
                cout<<to10<<"to 10"<<endl;
                temp%=10;
            }
                                
            if(temp>=5&&temp<10){
                int to5 = temp/5;
                    cout<<to5<<"to 5"<<endl;
                    temp%=5;
                }
                                    
                    if(temp>=2&&temp<5){
                        int to2 = temp/2;
                        cout<<to2<<"to 2"<<endl;
                        temp%=2;
                        }else{
                            int to1 = temp/1;
                            cout<<to1<<"to 1"<<endl;
                        }
    }else if(temp>=10&&temp<20){
        int to10 = temp/10;
        cout<<to10<<"to"<<endl;
        temp%=10;
        if(temp>=5&&temp<10){
            int to5 = temp/5;
            cout<<to5<<"to 5"<<endl;
            temp%=5;
        }
                                    
            if(temp>=2&&temp<5){
                int to2 = temp/2;
                cout<<to2<<"to 2"<<endl;
                temp%=2;
    
                }else{
                    int to1 = temp/1;
                    cout<<to1<<"to 1"<<endl;
                }

    }else if(temp>=5&&temp<10){
        int to5 = temp/5;
        cout<<to5<<"to"<<endl;
        temp%=5;
        if(temp>=2&&temp<5){
                int to2 = temp/2;
                cout<<to2<<"to 2"<<endl;
                temp%=2;
    
                }else{
                    int to1 = temp/1;
                    cout<<to1<<"to 1"<<endl;
                }

    }else if(temp>=2&&temp<5){
        int to2 = temp/2;
        cout<<to2<<"to"<<endl;
        temp%=2;
        int to1 = temp/1;
            cout<<to1<<"to 1"<<endl;
        
    }else{
        int to1 = temp/1;
        cout<<to1<<"to"<<endl;
    }

   return 0;
}