#include<stdio.h>
#include<string.h>
void main()
{
	char q[10000],a[10000][21],c[21];
	int i,j=0,l,pos=0,flag,len;
	while(gets(c))
	{
		len=strlen(c);
		if(strlen(c)==1&&c[0]=='#')
		{
			break;
		}
		else 
		{
			for(i=0;i<len;i++)
			{
				a[j][i]=c[i];
			}
			j++;
		}
	}//end of input
	for(i=0;i<j;i++)
	{
		q[i]='\0';
	}
	for(int k=0;k<21;k++)
	{
		for(i=0;i<j;i++)
		{
			flag=0;
			l=0;
			while(l<pos)
			{
				if(q[l++]==a[i][k])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				q[pos++]=a[i][k];
			}
		}
	}
	q[pos-1]='\0';
	printf("%s\n",q);
}
