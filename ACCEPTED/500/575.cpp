#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
	char a[100000];
	long long int i,k,len,n;
	long long int sum;
	while(gets(a))
	{
		len=strlen(a);
		if(len==1&&a[0]=='0')break;
		else 
		{
			k=0;sum=0;
			for(i=len-1;i>=0;i--)
			{
				n=a[i]-'0';
				sum=sum+(n*((long int)(pow(2,k+1))-1));
				k++;
			}
		
		}
		printf("%lld\n",sum);
	}
}