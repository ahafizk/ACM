#include <stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
	char a[10000],c[26],ch='\0',ca[26];
	int i,j,k,fre,len,pos,f[52],line,flag;
	
	for(i=0;i<26;i++)
	{
		
		
			if(i==0){c[i]='A';ch='A';}
			else
			{

				ch=ch+1;c[i]='\0';
				c[i]=ch;
			}
		
		
	}
	for(i=0;i<26;i++)
	{
			f[i]=0;
	}
	scanf("%d",&line);
	while(line>=0)
	{
		gets(a);
		
		len=strlen(a);
		for(i=0;i<26;i++)
		{
			ca[i]='\0';
		}
		int	l=0;
		for(i=0;i<len;i++)
		{
			if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
			{
				fre=0;flag=0;
				
				for(k=0;k<26;k++)
				{
					if(toupper(a[i])==ca[k])
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					
					ca[l++]=toupper(a[i]);
					
					for(j=i;j<len;j++)
					{
						if(toupper(a[i])==toupper(a[j]))
						{
							fre++;
						
						}
					}
					for(int k=0;k<26;k++)
					{
						if(toupper(a[i])==c[k])
							f[k]=f[k]+fre;
					
					}
				}//end of if
			}//end of if()
		}//end of outer for();
		
	line--;
	}

	for(i=1;i<26;i++)
	{
		for(j=1;j<26;j++)
		{
			if(f[j-1]<f[j])
			{
				pos=f[j-1];
				f[j-1]=f[j];
				f[j]=pos;
				ch=c[j-1];
				c[j-1]=c[j];
				c[j]=ch;
			}
		}
	}

flag=0;
		for(j=0;j<26;j++)
		{
			if(f[j]!=0)
			{
				printf("%c %d\n",c[j],f[j]);
				flag=1;
			}
		}
if(flag==0)printf("\n");
	
}//end of main()
