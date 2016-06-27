/* @JUDGE_ID: 52238UE 10327 C */

#include<stdio.h>
#include<string.h>
void main()
{
	int a[1000];
	int i,j,r,count,temp;
	while(scanf("%d",&r)!=EOF)
	{
		
		for(i=0;i<r;i++)
		{
			scanf("%d",&a[i]);
		}
		count=0;
		for(j=0;j<r;j++)
		{
			i=r-1;
			while(i>=1)
			{
				if(a[i]<a[i-1])
				{
					temp=a[i-1];
					a[i-1]=a[i];
					a[i]=temp;
					count++;i--;
				}
				else i--;
			}//end of while()
		}//end of for()
		
	printf("Minimum exchange operations : %d\n",count);		
	}

}

/* @END_OF_SOURCE_CODE */