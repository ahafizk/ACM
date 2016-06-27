#include<stdio.h>
void main()
{
	
	long long int  a,l,n,c,i,t=1,b;
		
	while(scanf("%lld%lld",&a,&l)==2)
	{
		c=0;b=a;
		if(a<0&&l<0)break;
		if(a==0&&l!=0){c=1;b=a+1;}
		if(a==0&&l==0)
		{
			printf("Case %lld: A = %lld, limit = %lld, number of terms = 1\n",t,a,l);
			
		}
		
		else 
		{ i=b;
		
			while(i<=l)
			{
				
				if(i==1)break;
				 if(i%2==0)i=i/2;
					else if(i%2==1)
					{
						if(i>2147483647)
						{
							break;
						}
						else 
						{
							i=i*3+1;
						}
					}
				
				c++;
			}
			if(i==1)
			{
				printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",t,a,l,c+1);
			}
			else 
			{
				printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",t,a,l,c);
			}
			t++;
		}
	}
}