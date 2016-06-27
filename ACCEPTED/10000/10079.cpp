#include<stdio.h>
void main()
{
	
	long long int l,n;
	while(scanf("%lld",&n)==1)
	{
		if(n<0)
		{
			break;
		}
		else
		{
			
			l=((n*(n+1))/2)+1;
			
			printf("%lld\n",l);

		}
	}
}