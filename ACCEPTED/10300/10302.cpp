#include<stdio.h>
#include<math.h>
void main()
{
	long long int x,r;
	while(scanf("%lld",&x)!=EOF)
	{
		r=(x*(x+1)/2)*(x*(x+1)/2);
		printf("%lld\n",r);
	}
}

