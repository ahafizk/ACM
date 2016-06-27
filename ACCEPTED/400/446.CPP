#include<stdio.h>
#include<string.h>
void main()
{
	int n1,n2,i,n,t;
		char a[10000],b[10000],ch,c1,c2;

	scanf("%d",&t);
	while(t>0)
	{
		scanf("%X%c%c%c%X",&n1,&c1,&ch,&c2,&n2);
		for(i=0;i<13;i++)
		{
			a[i]='0';
			b[i]='0';
		}
		i=12;
		if(ch=='+')
		n=n1+n2;
		else if(ch=='-')
			n=n1-n2;
		while(n1>0)
		{
			a[i]=n1%2+'0';
			n1=n1/2;
			i--;
		}
		//a[i]='\0';
		i=12;
		while(n2>0)
		{
			b[i]=n2%2+'0';
			n2=n2/2;
			i--;
		}
	//b[i]='\0';
		for(i=0;i<13;i++)
		printf("%c",a[i]);
		printf(" %c ",ch);
		for(i=0;i<13;i++)
		printf("%c",b[i]);
		printf(" = %d\n",n);
		t--;
	}
}