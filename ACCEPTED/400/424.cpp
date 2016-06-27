#include<stdio.h>
#include<string.h>
void main()
{
	char a[10000],b[10000],q[10000];
	int  flag=0,a1,b1,c,d,t,len1,len2,i,l1,l2,len,t1=1;
	while(1)
	{	
		scanf("%s",&a);
		len1=strlen(a);
		
		if(flag==0)
		{
			scanf("%s",&b);
			flag=1;
			len2=strlen(b);
		}
		else len2=strlen(q);
		if(len1==1&&a[0]=='0')
		{
			break;
		//	printf("%s\n",b);
		}
		
		c=0;
		q[0]='\0';
		if(len1<len2)
		{
				t=len2-1;
		}
		else t=len1-1;
		l1=len1-1;
		l2=len2-1;
		//
		//if(flag==0)
		len=t+1;
		
		while(t>=0)
		{
			if(l1>=0)
			{
				a1=a[l1--]-'0';
			}
			else a1=0;
			if(l2>=0)
			{
				b1=b[l2--]-'0';
			}
			else b1=0;
			
			d=(a1+b1+c)%10;
			c=(a1+b1+c)/10;
			q[t]=d+'0';t--;
		}
		if(c!=0)
		{
			for(i=len;i>0;i--)
			{
				q[i]=q[i-1];
			}
			q[0]=c+'0';
			q[len+1]='\0';
			for(i=0;i<=len;i++)
			{	b[i]=q[i];
		//	printf("%d",b[i]);
			}
			b[len+1]='\0';
		}
		
		else 
		{
			q[len]='\0';
			for(i=0;i<len;i++)
			{		b[i]=q[i];
		//		printf("%d",b[i]);
			}b[len]='\0';
		}
		
	//t1++;
	}
	printf("%s\n",b);
	
}