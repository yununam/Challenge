int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i;
    int *arr;
    
    arr = (int*)malloc(sizeof(int)*N);
    for(i = 0 ; i < N ; i++)
        arr[i] = 0;
    
    for(i = 0 ; i < N ; i++)
    {
        if(A[i] <= N)
        {
            arr[A[i]-1]++;   
        }
        else
        {
            free(arr);
            return 0;
        }
    }
    
    for(i = 0; i < N ; i++)
    {
        if(arr[i] != 1)
        {
            free(arr);
            return 0;
        }
    }
    
    free(arr);
    return 1;
}
