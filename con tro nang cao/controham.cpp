/* Con tro ham co 2 loai
1. con tro ham trong lap trinh cau truc c/c++
2. con tro ham trong huong doi tuong c++
cu phap
<ten bien con tro> =&<ten ham>
<ten bien con tro> = <ten ham>

*/


#include<iostream>
using namespace std;

void A(){
    cout<<"day la ham A"<<endl;
}

void B(){
    cout<<"day la ham B"<<endl;
}

int main(){
    void (*pointer)();// khai bao con tro ham
    pointer=A;//con tro ham tro toi ham A
    pointer();// thuc hien con tro ham

}