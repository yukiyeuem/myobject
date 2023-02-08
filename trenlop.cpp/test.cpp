#include<iostream>
using namespace std;

void exam (int *p , int n){
    int *q;
    q =&n;
    int **ptr =&p;
    **ptr = *q + *p;

}
main(){
    int n(20), p{22};
    int *r{&p};
    exam (r,p);
    cout<<p<<" "<<n<<" "<<*r;
}