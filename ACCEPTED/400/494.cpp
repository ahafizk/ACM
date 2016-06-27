#include<stdio.h>
#include<string.h>
void main()
{
	long int flag1,n,count;
	char a[10000];
	while(gets(a))
	{
		n=strlen(a);
		count=0;
		flag1=0;
		for(int i=0;i<n;i++)
		{
			if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
			{
				flag1=1;
			}
			else if(!(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')&&flag1==1)
			{
				count++;
				flag1=0;
			}
		}
		if(flag1==1)count++;
		printf("%ld\n",count);
	}

}