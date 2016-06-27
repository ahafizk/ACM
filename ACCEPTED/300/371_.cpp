#include<stdio.h>

void main()
{
	unsigned int a,i,j,v,n,len,maxlen;
	while(scanf("%lu%lu",&i,&j)==2)
	{
		if(i==0&&j==0)break;
		else
		{
			if(i>j)
			{
				int t;
				t=i;
				i=j;
				j=t;
			}
			maxlen=0;
			for(a=i;a<=j;a++)
			{
				len=0;n=a;
				while(1)
				{
					if(n%2==0)
					{
						n=n/2;
					}
					else 
					{
						n=n*3+1;
					}
					len++;
					if(n==1)break;
				}
				if(maxlen<len)
				{
					maxlen=len;
					v=a;
				}
			}
			printf("Between %lu and %lu, %lu generates the longest sequence of %lu values.\n",i,j,v,maxlen);
		}
	}//end of input
}