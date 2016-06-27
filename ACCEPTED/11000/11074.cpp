#include<stdio.h>
//fopen("c:\\o.txt","w+");
void main()
{
	int s,t,n,i,j,k,l,line=0;
	while(line<101)
	{

		scanf("%d%d%d",&s,&t,&n);
		if(s==0&&t==0&&n==0)break;
		else if((s==0||t==0||n==0)||(s>=21||t>=21||n>=21)){printf("Case %d:\n\n",line+1);line++;continue;}
		else
		{
			printf("Case %d:\n",line+1);
		
			for(i=0;i<n;i++)
			{
				for(l=0;l<t;l++)
				{
					for(j=0;j<(n*s+(n+1)*t);j++)
					{
						printf("*");
					}
					printf("\n");
				}//end of for()
				for(int a=0;a<s;a++)
				{
					for(k=0;k<n;k++)
					{
						for(int b=0;b<t;b++)
						{
							printf("*");
						}
						for(int c=0;c<s;c++)
						{
							printf(".");
						}
					}//end of for()
					for(int d=0;d<t;d++)
					{
						printf("*");
					}
					printf("\n");
				}//end of for()
			}//end of outer for();
		
		}// end of outer for();
		for(int e=0;e<t;e++)
		{
			for(int f=0;f<(n*s+(n+1)*t);f++)
			{
				printf("*");
			}
				printf("\n");
		
		}//end of else
		printf("\n");
		line++;
	}	
}
