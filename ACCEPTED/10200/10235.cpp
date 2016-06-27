#include<stdio.h>
long int prime( long int n)
{
	  long int flag=1,j,p=1;
	if(n==1||n==2||n==3)
	{
		return 1;
	}
	
	for(j=2;j*j<=n;j++)
	{
		if(n%j==0)
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		return 1;
	}
	else return 0;
}
void main()
{
	  long int n,d,k=0,re,r;
	while(scanf("%d",&n)==1)
	{
		if(!prime(n))
		{
			printf("%d is not prime.\n",n);
		}
		else 
		{
			d=n;
			re=0;
			while(d>0)
			{
				r=d%10;
				d=d/10;
				re=re*10+r;
			}
			if(re!=n)
			{
				if(prime(re))
				{
					printf("%d is emirp.\n",n);
				}
				else printf("%d is prime.\n",n); 
			}
			else
			{	
				printf("%d is prime.\n",n);
			}

		}
	}
}