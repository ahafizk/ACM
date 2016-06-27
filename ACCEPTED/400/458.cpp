#include<stdio.h>
#include<string.h>
void main()
{
	char a[10000];
	int i,len;
	while(gets(a))
	{
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			printf("%c",a[i]-7);
		}
		printf("\n");
	}
}