int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i;
    int sum = N+1;
    
    for(i = 0 ; i < N ; i++)
    {
        sum += (i+1);
        sum -= A[i];
    }
    
    return sum;
    
}
