#include<stdio.h>
#include<math.h>
void main()
{
	long int i,j,k=0,p,pra[100000],a,len,pos,count;
	for(i=1;i<32768*2;i++)
	{
		p=1;
		for(j=2;j<=sqrt(i);j++)
		{
			
			if(i%j==0)
			{
				p=0;
				break;

			}
		}
		if(i==1||i==2||i==3||i==5||p==1)
		{
			pra[k++]=i;
		}
	}
	len=k;
	
	while(scanf("%ld",&a)==1)
	{
		count=0;
		if(a==0)break;
		else
		{
			for(i=0;i<2*32768;i++)
			{
				if(a>=pra[i]&&a<pra[i+1])
				{
					pos=i;
					break;
				}
			}

			for(i=pos;i>=1;i--)
			{
				for(j=1;j<=i;j++)
				{
					if(pra[i]+pra[j]==a)
					{
						count++;
					}
				}
			}//end of outer for
			printf("%ld\n",count);
		}
	}
}