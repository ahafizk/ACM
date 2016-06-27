#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	long long int count,i,c,len,n,a;
	long long int b[1000000];
	while(scanf("%lld",&i)==1)
	{
		if(i==0)break;
		else
		{
			len=0;count=0;
			while(i!=0)
			{
				c=i%2;
				i=i/2;
				b[len++]=c;
			}
			b[len]='\0';
			len--;
			for(n=len;n>=0;n--)
			{
				
				if(b[n]==1)count++;
			}
			printf("The parity of "); 

			for(;len>=0;len--)
			{
				printf("%lld",b[len]);
			}
			printf(" is %lld (mod 2).\n",count);
		}
	}
}