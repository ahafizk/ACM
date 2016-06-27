#include<stdio.h>
long double fact(int n)
{
	long  double s=1;
	while(n>1)
	{
		s*=n;
		n--;
	}
	return s;
}
void main()
{
	int n,m;
		long double i;
	while(scanf("%d%d",&n,&m)==2)
	{
		if(n==0&&m==0)break;
		i=fact(n)/(fact(n-m)*fact(m));
		printf("%d things taken %d at a time is %.0Lf exactly.\n",n,m,i);
	}
}