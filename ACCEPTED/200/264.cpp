#include<stdio.h>
#include<math.h>

int main()
{
	long double d;
	long int n=1,a,term1,term2,tr1,tr2;
//	freopen("out2.txt","w+",stdout);
//	while(n<=1000000)
	while(scanf("%ld",&n)==1)
	{
		d = sqrt(2*n+(long double)1/4)-.5;
		a = (long  int)d;
		term1 = (a*(a+1))/2;
		term2 = ((a+1)*(a+2))/2;
		
		//if(a<=5)
		{
			if(term1==n)
			{ 
				if(a%2==0)
				{
					tr1= a;
					tr2= 1;
					//printf("%d",a);
					//printf("/");
					//printf("1");
				}
				else 
				{
					tr1=1;
					tr2= a;
					//printf("1");
					//printf("/");
					//printf("%d",a);
				}
			}
			else if(term1<n||term2>=n)
			{
				
				if(a%2==0)
				{
					a++;
					long int nn = n - term1;
					tr1= a-nn+1;
					tr2= nn;
					//printf("%d",a-nn+1);
				//	printf("/");
				//	printf("%d",n-term1);
				//	printf("\n");
				}
				else
				{
					a++;
					long int nn = n - term1;
					tr1= nn;
					tr2= a-nn+1;
					//printf("%d",n-term1);
					//printf("/");
					//printf("%d",a-nn+1);
					//printf("\n");	
				}
			}
		}
		printf("TERM %ld IS ",n);
		printf("%ld/%ld",tr1,tr2);
		printf("\n");
	//	n++;
	}
	return 0;
}