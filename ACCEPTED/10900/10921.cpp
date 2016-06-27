#include<stdio.h>
#include<string.h>
void main()
{
	char a[35],b[35];
	int i,j,len;
	while(gets(a))
	{
		len=strlen(a);

		for(i=0;i<len;i++)
		{
			if(a[i]>='A'&&a[i]<='C')
			{
				b[i]='2';
			}
			else if(a[i]>='D'&&a[i]<='F')
			{
				b[i]='3';
			}
			else if(a[i]>='G'&&a[i]<='I')
			{
				b[i]='4';
			}
			else if(a[i]>='J'&&a[i]<='L')
			{
				b[i]='5';
			}
			else if(a[i]>='M'&&a[i]<='O')
			{
				b[i]='6';
			}
			else if(a[i]>='P'&&a[i]<='S')
			{
				b[i]='7';
			}
			else if(a[i]>='T'&&a[i]<='V')
			{
				b[i]='8';
			}
			else if(a[i]>='W'&&a[i]<='Z')
			{
				b[i]='9';
			}
			else b[i]=a[i];
		}
		for(j=0;j<len;j++)
		{
			printf("%c",b[j]);
		}
		printf("\n");
	}
}
