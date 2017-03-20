struct Results solution(char *S, int P[], int Q[], int M) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    
    result.A = (int*)malloc(sizeof(int)*M);
    result.M = M;
    
    int *A;
    int *C;
    int *G;

    int a = 0;
    int c = 0;
    int g = 0;
 
    int len = 0;
    len = strlen(S);

    int i;

    A = (int*)malloc(sizeof(int)*len+1);
    C = (int*)malloc(sizeof(int)*len+1);
    G = (int*)malloc(sizeof(int)*len+1);

    A[0] = C[0] = G[0] = 0;

    for(i = 1 ; i <= len ; i++)
    {
        switch(S[i-1])
        {
            case 'A':
                a++;
                break;
            case 'C':
                c++;
                break;
            case 'G':
                g++;
                break;
        }

        A[i] = a;
        C[i] = c;
        G[i] = g;
    }

    for(i = 0 ; i < M ; i++)
    {
        if(Q[i] == P[i])
        {
            switch(S[Q[i]])
            {
                case 'A':
                   result.A[i] = 1;
                   break;
                case 'C':
                   result.A[i] = 2;
                   break;
                case 'G':
                   result.A[i] = 3;
                   break;
                case 'T':
                   result.A[i] = 4;
                   break;
            }

        }
        else if(A[Q[i]+1] != A[P[i]])
            result.A[i] = 1;
        else if(C[Q[i]+1] != C[P[i]])
            result.A[i] = 2;
        else if(G[Q[i]+1] != G[P[i]])
            result.A[i] = 3;
        else
            result.A[i] = 4;
    }

    free(A);
    free(C);
    free(G);
    
    return result;
}
