/*wants only big integer and solve this problem 10931*/
#include<stdio.h>
void main()
{ 
	long int a,b,p,n,count,i;
	char sum[100000];
		
	
	while(scanf("%ld",&n)==1)
	{
		

		count=0;
		if(n==0)break;
		/*for(j=0;j<214746382;j++)
		{
			sum[j]=0;
		}*/
		i=0;
		a=n;p=1;
		while (a>0)
		{
	
			b=a%2;
			sum[i]=b+'0';
			i++;
			p*=10;
			a=a/2;	
			if(b==1)count++;
		}
		printf("The parity of ");
		i--;
		while(i>=0)
		{
			printf("%c",sum[i]);
			i--;
		}
		printf(" is %ld (mod 2).\n",count);

	}
	
}