#include<stdio.h>
#include<math.h>
void main()
{
	long int a[10000],i,count,c,n,flag,j,k=0,t,l1,l2;
	for(i=1;i<=2000;i++)
	{
		flag=1;
		if(i>=4)
		{
			for(j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
				{flag=0;break;}
		
			}
		}
		else if(i==1||i==2||i==3)
		{
			flag=1;
		}
		if(flag==1)
		{
			a[k]=i;
			k++;
		}
	}
	
	while(scanf("%ld%ld",&n,&c)==2)
	{
		count=1;
		for(i=0;i<=n;i++)
		{
			if(a[i+1]>n)
			{
				break;
			}
			else count++;
		}
		printf("%ld %ld:",n,c);
		
		if(count%2==0)
		{
			l2=2*c;
			l1=count/2-c;
			t=count/2+c-1;
			if(l2>count)
			{
				l1=0;
				t=count-1;
			}
		}
		else 
		{
			l2=c*2-1;
			if(l2>count)
			{
				l1=0;
				t=count-1;
			}
			else
			{
				l1=(count+1)/2-c;
				t=(count)/2+c-1;
			}
		}
		for(;l1<=t;l1++)
		{
			printf(" %ld",a[l1]);
		}
		
		printf("\n\n");
	}

}