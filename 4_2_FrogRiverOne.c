int solution(int X, int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i;
    int *tmp;
    int sum = 0;
    
    tmp = (int*)malloc(sizeof(int)*X);
    
    for (i = 0 ; i < X ; i++)
    {
        tmp[i] = 0;
        sum += (i+1);
    }
    
    for(i = 0 ; i < N ; i++)
    {
        if(tmp[A[i]-1])
            continue;
        
        tmp[A[i]-1] = 1;
        sum -= A[i];
        
        if(sum == 0)
            break;
    }
    
    free(tmp);
    
    return (sum > 0) ? -1 : i;
}
