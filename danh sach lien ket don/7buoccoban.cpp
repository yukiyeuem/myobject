/* 7 bước căn bản luôn phải có trên danh sách liên kết
bước 1: khai báo cấu trúc dữ liệu danh sách liên kết
bước 2: khởi tạo danh sách liên kết
bước 3: tạo node trong danh sách liên kết
bước 4: thêm đầu / thêm cuối trong danh sách liên kết
bước 5:viết hàm input /output
bước 6: những xử lý yêu cầu cần có trên danh sách liên kết
bước 7:giải phóng danh sách liên kết
*/

#include<iostream>
using namespace std;



    // buoc 1:
    struct Node
    {
        int data;
        struct Node *pNext;
    };
    typedef struct Node NODE;// thay ca struct Node = NODE

    struct List
    {
        NODE *pHead, *pTail;
    };
    typedef struct List LIST;

    /*--------------------------------------------------------*/

    //buoc 2:
    void Init(LIST &l)
    {
        l.pHead = l.pTail = NULL;
    }

    //buoc3:
    NODE* GetNode (int DATA){
        NODE *p= new NODE;// khoi tao con tro p
        // neu truong hop het bo nho
        if(p==NULL){
            cout<<"bo nho ko du de cap phat"<<endl;
            return NULL;// tra ve rong
        }
        p -> data =DATA;// dua data vao trong node
        p -> pNext = NULL;// khoi tao moi lien ket
        return p;
    }

    //buoc 4: 
    void AddHead(LIST &l,NODE *p){
        if(l.pHead==NULL){
            l.pHead = l.pTail =p;//p vua la phan tu dau vua la cuoi
        }
        else{
            p -> pNext = l.pHead;// cho p tro toi dau danh sach
            l.pHead=p;//cap nhap lai dau danh sach
        }
    }

    void AddTail(LIST &l,NODE *p){
        if(l.pHead==NULL){
            l.pHead = l.pTail = p;
        }
        else{
            l.pTail -> pNext = p;// pTail tro next toi p
            l.pTail = p;//cap nhap pTail chinh la p
        }
    }

    //buoc 5: input va output
    void Input(LIST &l){
        Init(l);//khởi tạo danh sách

        int n;
        cout<<"nhap vao so luong phan tu trong danh sach"<<endl;
        cin>>n;
        // vong lap chay n lan, moi lan nhap duoc 1 phan tu
        for(int i=1;i<=n;i++){
            int data;
            cout<<"nhap vao data"<<endl;
            cin>>data;
            // dong goi data vao trong Node
            NODE *p;//khai bao
            p =GetNode(data);// cho con tro p tro toi Node duoc tao ra
            // AddHead(l,p);// them Node p vao dau danh sach
            AddTail(l,p);// thm Node p vao cuoi danh sach
            

        }
    }
    void output(LIST l){
        for(NODE *p=l.pHead; p!=NULL; p = p ->pNext){
            cout<<p->data<<"\t";
        }
    }

    //buoc6:
    int Tinhtong(LIST l){
        int sum=0;
        for(NODE *p=l.pHead;p!=NULL;p=p->pNext){
            sum+=p ->data;
        }
        return sum;
    }

    void inrasochan(LIST l)
{
    cout<<"cac so chan co trong danh sach"<<endl;
    for(NODE *p=l.pHead;p!=NULL;p=p->pNext){
        if(p->data%2==0){
            cout<<p->data<<"\t";
        }
    }
}
    //buoc7: giai phong lien ket
    void giaiphong(LIST &l){
        NODE *p;
        while(l.pHead !=NULL){
            p = l.pHead;// cho con tro p tro vao pHead
            l.pHead=l.pHead -> pNext;//pHead duoc tro sang Node ben canh
            delete p;//giai phong con tro
        }
    }
    int main(){
        LIST l;// khai bao danh sach
        Input(l);
        output(l);
        cout<<l.pTail ->data;// in ra phan tu cuoi danh sach
        // int sum= Tinhtong(l);
        // cout<<endl;
        // cout<<"sum="<<sum;
        // cout<<endl;
        // inrasochan(l);
        // giaiphong(l);// giai phong bo nho

    }

