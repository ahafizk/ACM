#include<stdio.h>
void main()
{
	int t,l,a[10000],i,j,tmp,count;
	scanf("%d",&t);
	for(int k=1;k<=t;k++)
	{
		scanf("%d",&l);
		count=0;
		for(i=0;i<l;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<l;i++)
		{
			for(j=1;j<l;j++)
			{
				if(a[j-1]>a[j])
				{
					tmp=a[j-1];
					a[j-1]=a[j];
					a[j]=tmp;
					count++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",count);
	}
}