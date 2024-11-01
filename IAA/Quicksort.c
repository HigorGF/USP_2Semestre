quicksort(int A[],int ini,int fim){
    if(ini<fim){
        int q = partition(a[],ini,fim);
        quicksort(A[],ini,q-1);
        quicksort(A[],q+1,fim);
    }
}

partition(int A[],int ini,int fim){
    x = A[fim]
    i = ini
    j = fim-1
    while(ini<=fim){
        if(A[i]>x){
            i++;
        }
        else if (A[j]<x){
            j--;
        }
        else{
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        }
    }
    A[fim] = A[i]
    A[i] = x;
    return i; 

}
