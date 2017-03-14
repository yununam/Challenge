struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    
    int i;
    
    result.A = (int *)malloc(sizeof(int)*N);
    result.N = N;
    
    for(i = 0 ; i < N ; i++)
    {
        result.A[(i+K)%N] = A[i];
    }
    
    return result;
}
