#include<stdio.h>
void main()
{
	long int a,b;
	int t;
	scanf("%d",&t);
	while(t>=1)
	{
		scanf("%ld%ld",&a,&b);
		if(a<b)printf("<\n");
		else if(a>b)printf(">\n");
		else if(a==b)printf("=\n");
	t--;
	}

}