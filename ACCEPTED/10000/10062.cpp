#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	bool is_start = true;
	int a[2][97],i,j=0,len,t;
		char b[100000],c;
	for(i=32;i<=129;i++)
	{
		a[0][j++]=i;
	}
	
	while(gets(b))
	{
		if (!is_start) {
			printf("\n");
		}
		is_start = false;
		len =strlen(b);
		b[len]='\0';
		if(len==0||b=="\n\r")continue;
		
		for(i=0;i<97;i++)
		{
			a[1][i]=0;
			
		}
		for(i=0;i<len;i++)
		{
			for(j=0;j<97;j++)
			{
				if(a[0][j]==b[i])
				{
					a[1][j]++;
				}
			}
		}
		
		for(i=0;i<96;i++)
		{
			for(j=i+1;j<97;j++)
			{
				if(a[1][i]!=0)
				{
					if(a[1][i]>a[1][j])
					{
						t=a[1][j];
						a[1][j]=a[1][i];
						a[1][i]=t;
						c=a[0][j];
						a[0][j]=a[0][i];
						a[0][i]=c;
					}
					if(a[1][i]==a[1][j])
					{
						if(a[0][j]>a[0][i])
						{
							c=a[0][j];
							a[0][j]=a[0][i];
							a[0][i]=c;
						}
					}
					
				}
			}
		}

		for(i=0;i<97;i++)
		{
			if(a[1][i]!=0)
			{
				printf("%d %d\n",a[0][i],a[1][i]);
			}
		}
		

	}//end of while()
}//end of main()
