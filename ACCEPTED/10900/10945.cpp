/* @JUDGE_ID: 52238UE 10945 CPP */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[10000],b[10000];
	int i,n,len,p;
	while(gets(a))
	{
		len=strlen(a);
		if(strcmp(a,"DONE")==0)break;
		else 
		{
			p=0;
			for(i=0;i<len;i++)
			{
				if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
				{
					b[p]=tolower(a[i]);
					p++;
				}	

			}
			

			p=p-1;
			n = 1;
			for(i=0;i<=p;i++)
			{
				if(b[p]!=b[i])
				{
					n=0;break;
				}
				else if(b[p]==b[i])
				{
					p--;
				}
			}

			if(n==0)printf("Uh oh..\n");
			else if(n==1)printf("You won't be eaten!\n");
		}
	}
	
}

/* @END_OF_SOURCE_CODE */
