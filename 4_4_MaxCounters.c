struct Results solution(int N, int A[], int M) {
	struct Results result;
	// write your code in C99 (gcc 6.2.0)

   
	int i = 0;
	int max = 0;
	int iv=0;
			
	result.C = (int *)malloc(sizeof(int)*N);
	result.L = N;

	for(i = 0 ; i < N ; i++)
		result.C[i] = iv;

	for(i = 0 ; i < M ; i++)
	{		
		if(A[i] == N+1)
		{
			iv = max;
		}
		else
		{
			if(result.C[A[i]-1] <= iv)
				result.C[A[i]-1] = iv + 1;
			else
				result.C[A[i]-1]++;

			if(max < result.C[A[i]-1])
				max = result.C[A[i]-1];
		}

	}

	for(i = 0 ; i < N ; i++)
	{
		if(result.C[i] < iv)
			result.C[i] = iv; 
	}

    
	return result;
    
}
