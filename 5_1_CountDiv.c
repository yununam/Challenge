int solution(int A, int B, int K) {
    // write your code in C99 (gcc 6.2.0)
    int tmp;
    
    tmp = (B/K) - (A/K) ;
    
    if(A % K == 0)
        tmp++;
        
    return tmp;
    
}
