/* @JUDGE_ID: 52470AA 444 CPP */
#include<stdio.h>
#include<string.h>
void main()
{
	int k,p,n,i,j;
	char a[1000],temp;
	while(gets(a))
	{
		n=strlen(a);
		for(i=0,j=n-1;i<=j;i++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;j--;
		}

		for(i=0;i<n;i++)
		{
			if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'||a[i]==' '||a[i]=='!'||a[i]==','||a[i]=='.'||a[i]==':'||a[i]==';'||a[i]=='?')
			{
				k=a[i];
				while(k>0)
				{
					p=k%10;
					k=k/10;
					printf("%d",p);
				}
			}//end of if();

			else 
			{
				k=a[i]-'0';
				while(1)
				{
					if(k>=65&&k<=90||k>=97&&k<=122||k==32||k==33||k==44||k==46||k==58||k==59||k==63)
					{
						printf("%c",k);
						break;
					}
					else 
					{
						i++;
						p=a[i]-'0';
						k=k*10+p;
					}
					
				}//end of while
			}
		}//end of for()
		printf("\n");
	}//end of while()
}

/* @END_OF_SOURCE_CODE */