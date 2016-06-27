#include<stdio.h>
#include<string.h>
#include<math.h>
int prime(int n)
{
	int i,p=1;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			p=0;
			break;
		}
	}
	return p;
}
void main()
{
	char a[100000];
		int c[2][62],i,j,t,len,k,l,flag,flag1,f;
		k=0;
			for(j=0;j<62;j++)
			{
				//if(i==0)
			
					if(j<10)
					{
						c[0][j]=j+'0';
					}
					else if(j>=10&&j<36)
					{
						c[0][j]='A'+k;
						k++;
						if(k==26)k=0;
					}
					
					else if(j>=36)
					{//printf("%d",k);
						c[0][j]='a'+k;
						k++;
					}
			}
		scanf("%d",&t);
		f=1;
		while(f<=t)
		{
			
			scanf("%s",a);
			for(i=0;i<62;i++)
			{
					c[1][i]=0;
			}
					
			len=strlen(a);
			a[len]='\0';
			for(i=0;i<len;i++)
			{
				if(a[i]>='0'&&a[i]<='9')
				{
					l=a[i];
					for(j=0;j<10;j++)
					{
						if(c[0][j]==l)
						{
							c[1][j]++;
						}
					}
				}
				else if(a[i]>='A'&&a[i]<='Z')
				{
					l=a[i];
					for(j=10;j<36;j++)
					{
						if(c[0][j]==l)
						{
							c[1][j]++;
						}
					}
				}
				else if(a[i]>='a'&&a[i]<='z')
				{
					l=a[i];
					for(j=36;j<62;j++)
					{
						if(c[0][j]==l)
						{
							c[1][j]++;
						}
					}
				}
			}
			flag1=1;
			
			printf("Case %d: ",f);
			for(i=0;i<62;i++)
			{
				flag=0;
				if(c[1][i]==1||c[1][i]==0)flag=0;
				else flag=prime(c[1][i]);
								
				if(flag==1)
				{
					printf("%c",c[0][i]);
					flag1=0;
				}
			}
			if(flag1==1)
			{
				printf("empty\n");
			}
			else 
			{
				printf("\n");
			}
			f++;
		}

}