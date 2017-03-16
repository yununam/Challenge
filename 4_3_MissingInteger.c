int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
   char *arr;
   int i;
   int res = 1;

   arr = (char*)malloc(N+1);

   for(i = 0 ; i < N ; i++)
	   arr[i] = 0;
   
   for(i = 0 ; i < N ; i++)
   {
	   if(A[i] > 0 && A[i] <= N)
	   {
		   arr[A[i]-1] = 1;
	   }
   }

   for(i = 0 ; i < N+1 ;i++)
   {
	   if(!arr[i])
	   {
		   res = i;
		   break;
	   }
   }

   free(arr);
   return res + 1;
}
