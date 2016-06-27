#include<stdio.h>
#include<math.h>


int p[20000];
int checkIsPrime(long int num)
{
	int prime=1;
	
	for(long int i=2;i<=sqrt(num)+1;i++)
	{
		if(num%i==0)
		{
			prime = 0;
			break;
		}
	}
	return prime;
}

int main()
{
	long int a,b,n;
	
	for(long int j=0;j<=10000;j++)
	{
		n= j*j + j + 41;
		
		p[j]= checkIsPrime(n);
		
	}
	while(scanf("%ld%ld",&a,&b)!=EOF)
	{
		long int count =0;
		double ans = 0.0;
		for(long int i =a;i<=b;i++)
		{
			if(p[i]==1)count++;		
		}
		ans = (count*100.00)/((b-a+1)*1.00)+1e-7;
		printf("%.2lf\n",ans);
	}
	return 0;
}