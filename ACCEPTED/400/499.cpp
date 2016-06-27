#include <stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
	char a[10000],c[52],ch='\0';
	int i,j,k,fre,len,pos,maxfre,f[52];
	
	for(i=0;i<52;i++)
	{
		if(i<26)
		{
			if(i==0){c[i]='A';ch='A';}
			else
			{

				ch=ch+1;c[i]='\0';
				c[i]=ch;
			}
		}
		else
		{
			if(i==26){c[i]='a';ch='a';}
			else
			{

				ch=ch+1;c[i]='\0';
				c[i]=ch;
			}
			
		}
	}

	while(gets(a))
	{
		for(i=0;i<52;i++)
		{
			f[i]=0;
		}
		maxfre=0;k=0;pos=0;
		len=strlen(a);
		
		for(i=0;i<len;i++)
		{
			if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
			{
				fre=0;
			
				for(j=i;j<len;j++)
				{
					if(a[i]==a[j])
					{
						fre++;
					
					}
				}

				

				if(maxfre<fre)
				{
					maxfre=fre;
				}
				for(int k=0;k<52;k++)
				{
					if(a[i]==c[k]&&f[k]==0)
					{
						f[k]=fre;

						
					}
				}

			}
		}//end of outer for();
		
		for(i=0;i<52;i++)
		{
		
			if(f[i]==maxfre)
			{
				//printf("%c ",c[i]);
				printf("%c",c[i]);
			}
		}
		printf(" %d\n",maxfre);
	}
}//end of main()
