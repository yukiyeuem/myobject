void REALLOC(int *&a,int oldsize,int newsize){
    int *b = new int(oldsize);
    for(int i=0;i<oldsize;i++){
        b[i]=a[i];
    }
    delete []a;
    a = new int(newsize);

    int min = oldsize<newsize ? oldsize:newsize;
    for(int i=0;i<min;i++){
        a[i]=b[i];
    }
    delete []b;
}