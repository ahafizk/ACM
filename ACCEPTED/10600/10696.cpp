#include<stdio.h>
long long int f91( long long int n)
{
	if(n<=100)
	{
		return(f91(f91(n+11)));
	}
	else if(n>=101)
	{
		n=n-10;
		return n;
	}
}
void main()
{
	long long int N,t;
	t=1;
	while(t<=250000)
	{
		scanf("%lld",&N);
		if(N==0)break;
		else 
		{
			printf("f91(%lld) = %ld\n",N,f91(N));
		}
		t++;
	}
}
