/* @JUDGE_ID: 52238UE 483 CPP */
#include<stdio.h>
#include<string.h>

void main()
{
	char a[1000];
	int i,n,k,j;
	while(gets(a))
	{
		
		i=0;
		n=strlen(a);
		while(i<n)
		{
			k=0;
			if(a[i]==' '){printf(" ");i++;}
			else  
			{
				k=i;
				while(a[i]!=' ')
				{
					if(a[i]=='\0')break;
					i++;
				}
				j=i-1;
				while(j>=k){printf("%c",a[j]);j--;}
			}
		}
		printf("\n");
	}
}

/* @END_OF_SOURCE_CODE */