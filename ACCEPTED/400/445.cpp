#include<stdio.h>
#include<string.h>
void main()
{
	char a[100000];
	int len,i,b;
	while(gets(a))
	{
		len=strlen(a);
		if(len==0){printf("\n");continue;}
		b=0;
		for(i=0;i<len;i++)
		{
			if(a[i]>='A'&&a[i]<='Z'||a[i]=='*')
			{
				while(b>0)
				{
					printf("%c",a[i]);
					b--;
				}
				

			}
			else if(a[i]>='0'&&a[i]<='9')
			{
				b=b+(a[i]-'0');

			}
			else if(a[i]=='b')
			{
				while(b>0)
				{
					printf(" ");
					b--;
				}
			}
			else if(a[i]=='!'||a[i]=='\n')
				printf("\n");
		}//end of for()
		printf("\n");
	}//end of input while()
}