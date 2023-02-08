void REALLOC(int *&a, int Oldsize, int Newsize){
    int *b= new int[Oldsize];
    for(int i=0;i<Oldsize;i++){
        b[i]=a[i];
    }
    delete []a;

    a =new int[Newsize];
    int min = Oldsize < Newsize ? Oldsize : Newsize;
    for(int i=0;i<min;i++){
        a[i]=b[i];
    }
    delete []b;
}