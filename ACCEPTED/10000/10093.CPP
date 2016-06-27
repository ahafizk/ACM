#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
	long long int i,j,sum,l,largest,number,len;
	char a[100000];
	while(gets(a))
	{
		len=strlen(a);
		sum=0;largest=0;
		for(i=0;i<len;i++)
		{
			if(a[i]>='0'&&a[i]<='9')
			{
				l=(a[i]-'0');
				sum=sum+l;
				if(largest<l)
				{
					largest=l;
				}
			}
			else if(a[i]>='A'&&a[i]<='Z')
			{
				l=(a[i]-'A'+10);
				sum=sum+l;
				if(largest<l)
				{
					largest=l;
				}
			}
			else if(a[i]>='a'&&a[i]<='z')
			{
				l=(a[i]-'a'+36);
				sum=sum+l;
				if(largest<l)
				{
					largest=l;
				}
			}
		}

		if(largest==0||largest==1)
		{
			printf("2\n");
		}
		else if(largest>=2)
		{
			int	flag=0;
			for(j=largest;j<=62;j++)
			{
				if(sum%j==0)
				{
					number=j+1;flag=1;
					break;
				}
			}
			if(flag==1)
			{
				printf("%lld\n",number);
			}
			else 
			{
				printf("such number is impossible!\n");
			}
		}
	
	}//end of input while()
 
}