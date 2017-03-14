int solution(int X, int Y, int D) {
    // write your code in C99 (gcc 6.2.0)
    
    int tmp;
    
    tmp = (Y-X) / D;
    
    return (Y - X) % D ? tmp + 1 : tmp ;
    
}
