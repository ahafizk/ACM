#include<stdio.h>
#include<string.h>
void main()
{
	char n[100000],m[100000],q[100000];
	int len,i,len1,len2,len3,l1,l2,t,b1,a1,d,c;
	while(scanf("%d",&len)==1)
	{
		m[0]='1';
		n[0]='1';
		len1=1;
		len2=1;
		m[len1]='\0';
		n[len2]='\0';
		for(i=0;i<10000;i++)
				q[i]='\0';

		if((len==2||len==1))
		{
			printf("1");
		}
		
		else 
		{
			for(int j=3;j<=len;j++)
			{	
		
				len1=strlen(m);
				len2=strlen(n);
				c=0;len3=len;
				if(len1<len2)
				{
					t=len2-1;//len3=len2;
				}
				else 
				{
					t=len1-1;
					//len3=len1;
				}
				
				l1=len1-1;
				l2=len2-1;
				len3=t+1;
				while(t>=0)
				{
					if(l1>=0)
					{
						a1=m[l1]-'0';
						l1--;
					}
					else a1=0;
					if(l2>=0)
					{
						b1=n[l2]-'0';l2--;
					}
					else b1=0;
			
					d=(a1+b1+c)%10;
					c=(a1+b1+c)/10;
					q[t]=d+'0';t--;
				}
				if(c!=0)
				{
					for(i=len3;i>0;i--)
					{
						q[i]=q[i-1];
					}
					q[0]=c+'0';
					q[len3+1]='\0';
				}
		
				else 
				{
					q[len3]='\0';
				
				}
			
				for(i=0;i<len2;i++)
				{
					m[i]=n[i];
				}
				m[len2]='\0';
				len1=len2;
				for(i=0;i<=len3;i++)
				{
					n[i]=q[i];
				}
				len2=len3;
				n[len3+1]='\0';
				
			}//end of else
		}//end of for
		i=0;
			while(q[i]!='\0')
			{
				printf("%c",q[i]);
				i++;
			}
		printf("\n");
	}//end of while
}