#include<stdio.h>
void main()
{
	long int t,f,i,j;
	 double  sum,s,n,e;
	scanf("%ld",&t);
		for(i=1;i<=t;i++)
		{
			sum=0;
			scanf("%ld",&f);
			for(j=1;j<=f;j++)
			{
				scanf("%lf%lf%lf",&s,&n,&e);
				sum=sum+(((s/n)*e)*n);
			}

			printf("%.0lf\n",sum);
		}
}