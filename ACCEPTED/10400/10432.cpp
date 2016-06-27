#include<stdio.h>
#include<math.h>
void main()
{
	long double r,n,s,A,pi;
	pi=2*acos(0);
	long int i;
	while(scanf("%Lf%Lf",&r,&n)!=EOF)
	{
		A=(2*pi)/n;
		s=0;
		for(i=1;i<=n;i++)
		{
			s=s+(r*r*sin(A))/2;
		}
		printf("%.3Lf\n",s);	
	}
}