

Mergesort(int A[],int ini,int fim){
    if(ini<fim){
        meio = (ini+fim)/2;
        Mergesort(A[],ini, meio);
        Mergesort(A[],meio+1,fim);
        Merge(A[],ini,meio, fim);
    }

}


merge(int A[],int ini,int meio int fim){
    int tamseq1 = meio-ini;
    int tamseq2 = fim-meio-1;

    int seq1[tamseq1];
    int seq2[tamseq2];

    for(int i = 0; i<tamseq1;i++){
        seq1[i] = A[i+1]
    }

    for(int i = 0; i<tamseq2;i++){
        seq2[i] = A[i+meio+1]
    }

    int j = 0;
    int k = 0;
    while(j<tamseq1 && k<tamseq2){
        if(seq1[j] < seq2[k]){
            A[j+k] = seq1[j];
            j++
        }
        else{
            A[j+k] = seq2[k];
            k++

        }

    }

    while(j<tamseq1){
        A[j+k] = seq1[j];
        j++;
    }


    
    while(k<tamseq2){
        A[j+k] = seq2[k];
        k++;
    }
}