#include<stdio.h>
void main()
{
	int i,j,input,k,N,one;
	while(scanf("%d",&input)==1)
	{
		N=1;
		one=1;
		do
		{
			if(N<input)
			{
				N=N*10+1;
				one=one+1;
			}
			k=N%input;
			N=k;
		}while(k>0);
		printf("%d\n",one);
	}
}

