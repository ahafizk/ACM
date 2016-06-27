#include<stdio.h>

int main()
{
	long int i,j;
	/*char quirk2[4][3] = {{0,0},{0,1},{8,1}};
	
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if((i+j)*(i+j)==(i*10+j))
				printf("%c%c\n",i+'0',j+'0');
		}
	}
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			if((i+j)*(i+j)==i*100+j)
			{
				if(i<10)
				{
					printf("0%d",i);
				}
				else printf("%d",i);
				
				if(j<10)printf("0%d",j);
				else printf("%d",j);
				printf("\n");

			}
			
		}
	}
	
	for(i=0;i<1000;i++)
	{
		for(j=0;j<1000;j++)
		{
			if((i+j)*(i+j)==i*1000+j)
			{
				if(i<10)printf("00");
				else if(i<100)printf("0");
				//else if(i<1000)printf("0");
				printf("%ld",i);
				if(j<10)printf("00");
				else if(j<100)printf("0");
				//else if(j<1000)printf("0");
				printf("%ld\n",j);
			}
		}
	}
	printf("\n");
	for(i=0;i<10000;i++)
	{
		for(j=0;j<10000;j++)
		{
			if((i+j)*(i+j)==i*10000+j)
			{
				if(i<10)printf("000");
				else if(i<100)printf("00");
				else if(i<1000)printf("0");
				printf("%ld",i);
				if(j<10)printf("000");
				else if(j<100)printf("00");
				else if(j<1000)printf("0");
				printf("%ld\n",j);
			}
		}
	}
	//
	printf("\n\nhere is the acm output\n\n");*/
	long int ar[4][10]={{0,1,81},{0,1,2025,3025,9801},{0,1,88209,494209,998001},{0,1,4941729,7441984,24502500,25502500,52881984,60481729,99980001}};
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==2)
		{
			for(i=0;i<3;i++)
			{
				if(i<=1)printf("0");
				printf("%ld\n",ar[0][i]);
			}
		}
		else if(n== 4)
		{
			for(i=0;i<5;i++)
			{
				if(i<=1)
				{
					printf("000");
				}
				printf("%ld\n",ar[1][i]);
			}
		}
		else if(n==6)
		{
			for(i=0;i<5;i++)
			{
				if(i<=1)
				printf("00000");
				if(i==2)printf("0");
				printf("%ld\n",ar[2][i]);	
			}
		}
		else if(n==8)
		{
			for(i=0;i<9;i++)
			{
				if(i<=1)
				{
					printf("0000000");
				}
				else if(i>1&&i<=3)
				{
					printf("0");
				}
				printf("%ld\n",ar[3][i]);

			}
		}
		n=0;
	}
	return 0;
}