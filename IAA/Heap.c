void refazerHeap(int A[], int conferir, int n){

    int esq = 2*conferir+1;
    int dir = 2*conferir+2;

    int maior = conferir;
    if(esq<n && A[esq]>conferir) maior = esq;
    if(esq<n && A[dir]>conferir) maior = dir;
    if(maior != conferir){
        int temp = A[conferir];
        A[conferir] = A[maior];
        A[maior] = temp;
        refazerHeap(A[], maior, n);
    }
}

void fazerheap(int A[], int n){
    for(int i = n/2-1; i>0;i--){
        refazerHeap(A[], i, n);
    }
}


void heapsort(int A[], int n){
    
    fazerheap(A[], n);
    for(int i = n-1; i>0; i--){
        int temp = A[0];
        A[0] = A[i];
        A[i] = temp;
        refazerHeap(A[],0, i+1);


    }


}