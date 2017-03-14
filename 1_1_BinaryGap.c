int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
    int tmp = 0;
    int max = 0;
    
    while(!(N & 1))
    {
        N >>= 1;   
    }
    
    while(N)
    {
        if(N & 1)
        {
            if(max < tmp)
                max = tmp;
            tmp = 0;
        }
        else
        {
            tmp++;
        }
        N >>= 1;
    }
    return max;
}
