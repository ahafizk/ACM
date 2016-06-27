#include<stdio.h>

int main()
{
	long int a[100000][2];
	int n,flag;
	long int i,count = 0;

	
	while(scanf("%d",&n)!=EOF)
	{
		if(count == 0)
		{
			a[count][0] = n;
			a[count][1] = 1;
			count++;
		}
		else
		{
			flag = 0;
			for(i=0;i<count;i++)
			{
				
				if(a[i][0] == n)
				{
					a[i][1]= a[i][1]+1;
					flag = 1;
					break;
				}
				
			}
			if(flag == 0)
			{
				a[count][0] = n;
				a[count][1] = 1;
				count++;
			}
		}
		
	}// end of while()
	for(i=0;i<count;i++)
	{
		printf("%ld %ld\n",a[i][0],a[i][1]);
	}

	return 0;
}