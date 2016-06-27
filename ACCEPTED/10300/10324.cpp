#include<stdio.h>
#include<string.h>

int main()
{

	char a[1000001],m[10];
	long int b[1000001],c1[100001];
	long int i,j,n,k,c=1,count,len;
	
	while(gets(a))
	{
	
		
		len=strlen(a);
		if(len==0)break;
					
		printf("Case %ld:\n",c);c++;
		for(k=0;k<1000001;k++)
		{
			b[k]=0;
		}
		count=0;
		
		for(k=0;k<len;k++)
		{
			if(a[k]==a[k-1]&&(k-1)>=0)
			{
				
				b[k]=b[k-1];
			}
			else 
			{
				if(k==0){b[k]=0;}
				else
				{
				b[k]=b[k-1]+1;
				}
			}
		}
		//printf("\n");
		scanf("%ld",&n);
			
		for(k=0;k<n;k++)
		{
			
			scanf("%ld%ld",&i,&j);
			gets(m);
			if(b[i]!=b[j]||i>=len||j>=len)printf("No\n");
			else if(b[i]==b[j])
			{
				printf("Yes\n");
			}
		}
	}
}
