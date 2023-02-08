#include<iostream>
using namespace std;

//buoc1: khai bao cau truc kieu du lieu danh sach lien ket
struct Node
{
    int data;
    struct Node *pNext;
};
typedef struct Node NODE;// thay ca struct Node =NODE

struct List
{
    NODE *pHead ,*pTail;
};
typedef struct List LIST;

//buoc2: khoi tao danh sach lien ket
void Init(LIST &l)
{
    l.pHead=l.pTail=NULL;
}
//buoc3:tao node trong danh sach lien ket

NODE *GetNode(int DATA){
    NODE *p= new NODE;
    if(p==NULL){
        cout<<"bo nho ko du de cap phat"<<endl;
        return NULL;
    }
    p ->data =DATA;
    p->pNext=NULL;
    return p;
}

//buoc4:them dau/cuoi vao danh sach lien ket

void AddHead(LIST &l,NODE *p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }
    else{
        p->pNext=l.pHead;// cho p tro toi đầu danh sách
        l.pHead=p;//cap nhap lai danh sach
    }
}

void AddTail(LIST &l,NODE *p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }
    else{
        l.pTail->pNext=p;
        l.pTail=p;
    }
}

//buoc 5:viet ham input/output

void input(LIST &l){
    Init(l);// klhoi tao danh sach
    int n;
    cout<<"nhap vao so luong phan tu"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int data;
        cout<<"nhap vao data"<<endl;
        cin>>data;
        NODE *p;
        p=GetNode(data);
        AddHead(l,p);
    }
}
void output(LIST &l){
    for(NODE *p=l.pHead ; p!= NULL; p=p->pNext){
        cout<<p->data<<"\t";
    }
}

//buoc6:cac kĩ thuật thường hay dùng trong danh sach liên kết đơn
void ThemVaoSau(LIST &l,NODE *x, NODE*q){

}


//buoc7: giaiphong bo nho
void giaiphong(LIST &l){
    NODE *p;
    while(l.pHead != NULL){
        p=l.pHead;// cho con trỏ vào pHead
        l.pHead=l.pHead ->pNext;// pHead được trỏ sang Node bên cạnh
        delete p;// giải phóng con trỏ
    }
}



int main(){
    LIST l;
    input(l);
    output(l);


    giaiphong(l);
}