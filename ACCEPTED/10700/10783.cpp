#include<stdio.h>
void main()
{
	int a,b,t,sum,count=0;
	scanf("%d",&t);
	while(t>=1)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		count++;
		sum=0;
		while(a<=b)
		{
			if(a%2==1)sum=sum+a;
			a++;
		}

		printf("Case %d: %d\n",count,sum);
		t--;
	}
}