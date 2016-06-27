#include<stdio.h>
#include<string.h>

int main()
{
	char a[10000];
	int s,d,len,i;
	//freopen("10922in.txt","r+",stdin);
	while(1)
	{
		gets(a);
		len = strlen(a);
		
		if(len == 1)
		{
			d = a[0]-'0';
			
		}
		if(d==0)break;
		else
		{
			s = 0;
			for(i=0;i<len;i++)
			{
				d = a[i]-'0';
				if(d<=9)
				s+=d;
				//if(s%9!=0)i=len;
				d = 0;
			}
		}
		if(s%9==0)
		{
			//printf("\ns= %d\n",s);
			int degree=1,t,sum=0,flag=0; //= degree1(s);//,t,sum=0;
			
			while(s)
			{
				t=s%10;
				s=s/10;
				sum = sum+t;
				if(sum==9&&s==0)
				{
					degree++;//printf("\nhey\n");
					//flag =1;
					break;
				}
				else if(s==0)
				{
					s=sum;
					sum = 0;
					degree++;
					
				}
				
				//degree++;
				
			}
			for(i=0;i<len;i++)
			{
				printf("%c",a[i]);
			}
			printf(" is a multiple of 9 and has 9-degree %d.\n",degree);
		}
		else
		{
			for(i=0;i<len;i++)
			{
				printf("%c",a[i]);
			}
			printf(" is not a multiple of 9.\n");
		}
		d=3;
	}
	return 0;
}