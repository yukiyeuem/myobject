#include<iostream>
#include<conio.h>
using namespace std;

//buoc1: khai bao cau truc du lieu danh sach lien ket
struct Node
{
    int data;
    struct Node *pNext;
};
typedef struct Node NODE;

struct List
{
    Node *pHead,*pTail;
};
typedef struct List LIST;

// buoc 2: khoi tao danh sach lien ket
void Init(LIST &l){
    l.pHead=l.pTail=NULL;
}

//Buoc 3: toa node trong danh sach lien ket
NODE* GetNode(int DATA)
{
    NODE *p= new NODE;// khoi tao con tro p
    if(p==NULL){
        cout<<"ko du bo nho cap phat con tro"<<endl;
        return NULL;
    }
    p ->data=DATA;//dua data vao trong node
    p->pNext =NULL;// khoi tao moi lien ket
    return p;// tra node p ve

}


//buoc4:them Node p vao dau/cuoi danh sach
void AddHead(LIST &l,NODE *p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;// vua la dau vua la cuoi
    }else{
        p->pNext=l.pHead;//tro ve dau danh sach
        l.pHead=p;// cap nhap lai dau danh sach
    }
}

void AddTail(LIST &l,NODE *p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }else{
        l.pTail ->pNext=p;
        l.pTail=p;
    }
}

//buoc5:input va output
void input(LIST &l){
    Init(l);//khoi tao danh sach
    int n;
    cout<<"nhap vao so luong phan tu trong danh sach"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int data;
        cout<<"nhap vao du lieu"<<endl;
        cin>>data;
        NODE *p;
        p=GetNode(data);
        AddHead(l,p);
    }
}

void output(LIST l){
    for(NODE *p=l.pHead; p!=NULL;p=p->pNext){
        cout<<p->data<<"\t";
    }
}

//buoc6:
void hoanvi(int &x,int &y){
    int temp =x;
    x=y;
    y=temp;
}

void sapxeptang(LIST &l){
    for(NODE *p=l.pHead;p!=l.pTail;p = p->pNext){
        for(NODE *q= p -> pNext;q!=NULL;q=q->pNext){
            if((p->data)>(q->data)){
                hoanvi((p->data),(q->data));
            }
        }
    }
}

void sapxepgiam(LIST &l){
    for(NODE *p=l.pHead;p!=l.pTail;p = p->pNext){
        for(NODE *q=p -> pNext;q!=NULL;q =q->pNext){
            if((p->data)<(q->data)){
                hoanvi((p->data),(q->data));
            }
        }
    }
}

void sapxep(LIST &l,char phanloai){
    for(NODE *p=l.pHead;p!=l.pTail;p=p->pNext){
        for(NODE *q =p->pNext;q!=NULL;q=q->pNext){
            if(phanloai == 't'){
                if ((p->data) > (q->data))
                {
                    hoanvi((p->data),(q->data));
                }
            }
            if(phanloai == 'g'){
                if ((p->data) < (q->data))
                {
                    hoanvi((p->data),(q->data));
                }
            }
        }
    }
}

//buoc7: giai phong
void giaiphong(LIST &l)
{
    NODE *p;
    while(l.pHead!=NULL){
        p=l.pHead;
        l.pHead=l.pHead->pNext;
        delete p;     
    }
}

int main(){
    LIST(l);
    input(l);
    output(l);
    cout<<endl;
    // cout<<"sap xep tang"<<endl;
    // sapxeptang(l);
    // output(l);
    // cout<<endl;
    // cout<<"sapxepgiam"<<endl;
    // sapxepgiam(l);
    // output(l);
    char phanloai;
  
        
    cout<<"nhap kieu phan loai"<<endl;
    cin>>phanloai;
        
   
    sapxep(l,phanloai);
    if(phanloai=='t'){
        cout<<"day tang dan la:"<<endl;
    }else{
        cout<<"day giam dan la"<<endl;
    }
    output(l);

    giaiphong(l);
}