int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int sum = 0;
    int min = 0x7FFFFFFF;
    int tmp = 0;
    int i;

    for(i = 0 ; i < N ; i++)
    {
        sum += A[i];
    }
    
    for(i = 1 ; i < N ; i++)
    {
        tmp = abs(A[i-1]*2 - sum);
        
        if(min > tmp)
            min = tmp;
        
        A[i] += A[i-1];
    }
    
    return min;
}
