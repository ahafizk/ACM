#include<stdio.h>
void main()
{
	unsigned int a,b,c;
	
	while(scanf("%lu%lu",&a,&b)==2)
	{
		c=a^b;
		printf("%lu\n",c);
	}
}