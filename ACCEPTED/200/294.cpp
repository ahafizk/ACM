#include<stdio.h>
#include<math.h>

int main()
{
	long int n, n1,n2,nd,i,j;
	long int has,div,total,max,flag ;
	
	scanf("%ld",&nd);
	for(int l = 1; l<=nd; l++)
	{
		scanf("%d%d",&n1,&n2);
		max = -1;
		for(i=n1;i<=n2;i++)
		{
			n = i;
			total  = 0;
			div = 0;
			flag = 0;
			//printf("\nsqrt = %d\n",sqrt(i));
			for(j= 2; j<=(int)sqrt(i);j++)
			{ 
				if((n%j)==0)
				{
					div++;
					if(n/j== j)flag = 1;
					//total = div*2;
				}
				// = total+div;
			}
			
			if(div>=1)
			{
				total = 2*div+2;
				if(flag==1)total--;
			}
			else if(i==1)
				total = 1;
			else if((i> 1 && i<=5) || div == 0)total = 2;

			if(total>max)
			{
				max = total;
				has = i;
			}
		}
		printf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n",n1,n2,has, max);
	}

	return 0;
}