#include<stdio.h>

void main()
{
	   long long int n,i,flag;
	   long long int p;
	while(scanf("%lld",&n)==1)
	{
		p=1;flag=0;
		
		 
		if(n<0)
		{ 
			n=-n; 
			if(n%2==0) 
				printf("Underflow!\n"); 
			else 
				printf("Overflow!\n"); 
		}   
		else
		{
			if(n<8)
			{
				printf("Underflow!\n");
			}
			else if(n>13)
			{
				printf("Overflow!\n");	
			}
		
			else
			{
				for(i=1;i<=n;i++)
				{
						
					p=p*i;
				
				}
				printf("%lld\n",p);
			}
		}//end of else
	}
			
}