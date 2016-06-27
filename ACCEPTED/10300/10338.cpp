#include<stdio.h>
#include<string.h>
long double factorial(long double n)
{
	long double p=1;
	int k;
	for(k=2;k<=n;k++)
	{
		p=k*p;
	}
	return p;
}

void main()
{
	long double  a,p,c[26];
	int i,j,len;
	char b[21];
	
	scanf("%Lf",&a);
	j=1;
	while(j<=a)
	{
		for(i=0;i<26;i++)
		{
		c[i]=0;
		}
		scanf("%s",&b);
		len=strlen(b);
		for(i=0;i<len;i++)
		{
			c[b[i]-'A']++;
		}
		p=1;
		for(i=2;i<=len;i++)
		{
				p=p*i;
		}
		
		for(i=0;i<26;i++)
		{
			if(c[i]!=0)
			{
				p=p/factorial(c[i]);
			}
		}
		printf("Data set %d: %.0Lf\n",j,p);
		j++;
	}
}