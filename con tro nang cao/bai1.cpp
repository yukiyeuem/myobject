/*có 3 cách để truy xuất 1 phần tử
cách 1:a[1][2]
cách 2: *(a[1]+2)
cách 3: *(*(a+1)+2)
*/

#include<iostream>

using namespace std;


void nhapmang(int **a,int dong,int cot){
    for(int i=0;i<dong;i++){
        for(int j=0;j<cot;j++){
            cout<<"nhap vao phan tu trong mang"<<endl;
            cin>>a[i][j];
            //c2: cin>>*(a[i]+j);
            //c3: cin>>*(*(a+i)+j)
        }
    }
}

void xuatmang(int **a,int dong,int cot){
    for(int i=0;i<dong;i++){
        for(int j=0;j<cot;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}

/* code =C dung malloc
int main(){
    int **a;
    int dong =2,cot=3;
    //tao ra cac con tro quan ly dau moi dong
    a = (int **)malloc(dong *sizeof(int));
    // voi nhung con tro quan ly dau moi dong
    for(int i=0;i<dong;i++){
        a[i] = (int *)malloc(cot* sizeof(int));
    }
    nhapmang(a,dong,cot);
    xuatmang(a,dong,cot);

    // giai phong bo nho

    for(int i=0; i<dong;i++){
        free(a[i]);// giai phong tung phan tu ben trong moi dong
    }
    free(a);// giai phong tat ca con tro dau moi dong
}
*/

int main(){
    int dong=2,cot=3;
    int **a= new int*[dong];
    for(int i=0;i<dong;i++){
        a[i]= new int[cot];
    }
    nhapmang(a,dong,cot);
    xuatmang(a,dong,cot);
    for(int i=0;i<dong;i++){
        delete [] a[i];// delete nhieu phan tu
    }
    delete [] a;
}
/*
nếu như muốn xóa đi hẳn 1 dòng or 1 cột trên mảng 2 chiều thì sao
Ví dụ: Ta có mảng 2 chiều
 giả sử có 2 dòng cần xoá hết dòng cuối
 realloc(a[1],0);

 giả sử xóa cột
 for(int i=0;i<dong;i++){
    realloc(a[1],2*sizeof(int))
 }
*/

/*  Mảng răng cưa
là một mảng 2 chiều mà mỗi phần tử trên mỗi dòng ko bằng nhau
vd: 1 2
3 4 5 6 7
8 9 10
=> dùng con trỏ c2 để 
=> nhập xuất mảng răng cưa


*/