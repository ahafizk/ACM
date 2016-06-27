#include<stdio.h>

int main()
{
	long int x1,x2,y1,y2,i,j,n,count;
	
	scanf("%ld",&n);
	for(i=1;i<= n;i++)
	{
		scanf("%ld%ld%ld%ld",&x1,&y1,&x2,&y2);
		count =0 ;
		if(x1== x2 && y1== y2)
		{
			printf("Case %ld: %ld\n",i,count);
		}
		else if((x1+y1)==(x2+y2))
		{
			if(x1==y2&&x2==y1)
			{
				printf("Case %ld: %ld\n",i,y1-x1);
			}
			else
			{
				printf("Case %ld: %ld\n",i,y1-y2+1);
			}// end of else
		}// end of else if
		else
		{
			if((x2+y2)-(x1+y1)==1)
			{
				count = y1+1;
				y1 = x1+y1+1;
				x1= 0;
				if(x1==x2 && y1==y2)
				{
					printf("Case %ld: %ld\n",i,count);
				}
				else
				{
					printf("Case %ld: %ld\n",i,count+y1-y2);
				}
			}
			else
			{
				count = y1+1;
				y1 = x1+y1+1;
				x1= 0;
				for(j = y1;j<(x2+y2);j++)
				{
					count+=j+1;
					
				//	printf("int the for %d  %d\n",count);

				}
				y1=j;
				//printf("\nthe x1= %ld\nx2=%ld \ny1 = %ld\ny2 = %ld\n",x1,x2,y1,y2);
				if(x1==y2 && y1==x2)
				{
					printf("Case %ld: %ld\n",i,count);
				}
				else
				{
					printf("Case %ld: %ld\n",i,count+y1-y2);
				}

			}
		}
	}

	return 0;
}