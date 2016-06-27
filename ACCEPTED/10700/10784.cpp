#include<stdio.h>
#include<math.h>
void main()
{
	long double N,n;
	int i=1;
	while(scanf("%Lf",&N)==1)
	{
		if(N==0)break;
		n=ceil(1.5+sqrt(3*3+4*1*2*N)*.5);
		printf("Case %d: %.0Lf\n",i,n);
		i++;
	}
}