// so sánh 2 con trỏ bản chất là so sánh 2 địa chỉ với nhau

#include<iostream>
using namespace std;

int main(){
    int cost;
    int *p=&cost;
    *p=100;
    cout<<cost;
}