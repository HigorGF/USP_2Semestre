insertionsort(int A[], int n){
    if(n == 1) return;
    insertionsort(A[],n-1);
    int fim = n-1;
    int j = fim;

    while(j>0 && A[j-1]>A[j]){
        temp = A[j-1];
        A[j-1] = A[j];
        A[j] = temp;
        j--;
    }
}