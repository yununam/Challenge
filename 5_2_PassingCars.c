#define MAX_NUM	1000000000

int solution(int A[], int N) {

	int i;	
	int wVal = 0;
	int res = 0;


	for(i = 0 ; i < N ; i++)
	{
		if(A[i] == 1)
			wVal++;
	}


	for(i = 0 ; i < N ; i++)
	{
		if(A[i] == 0)
		{
			res += wVal;
		}
		else
		{
			wVal--;
		}

		if(res > MAX_NUM)
			break;
	}

	return res > MAX_NUM ? -1 : res;
}
