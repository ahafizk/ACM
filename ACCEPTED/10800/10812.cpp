#include<stdio.h>
void main()
{
	 int a,b,s,d,t;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d%d",&s,&d);
		if(s<d||(s+d)%2==1)
		{
			printf("impossible\n");
		}
		else
		{
			a=(s+d)/2;
			b=(s-d)/2;
			printf("%d %d\n",a,b);
		}
		t--;
	}
}