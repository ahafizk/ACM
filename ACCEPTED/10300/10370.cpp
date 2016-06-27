/* @JUDGE_ID: 52238UE 10370 Cpp */
#include<stdio.h>

void main()
{
	int c,n,a[1000],i=1,p,j=0,sum;
	int count;
	double aveg	;
	char ch='%';

	scanf("%d",&c);
	while(i<=c)
	{
		
		scanf("%d",&n);
		p=n;j=0;
		sum=0;
		while(j<n)
		{
			scanf("%d",&a[j]);
			sum+=a[j];
			j++;
		}
		aveg=sum/p;
		count=1;
		for(j=0;j<p;j++)
		{
			if(a[j]>aveg)count++;
			
		}
		count--;
		printf("%.3lf%c\n",double(count*100)/p,ch);
		i++;
		
	}

}
/* @END_OF_SOURCE_CODE */