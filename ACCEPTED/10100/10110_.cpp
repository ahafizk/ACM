/* @JUDGE_ID: 52238UE 10110 C++ */
#include<stdio.h>
#include<math.h>
int main(void)
{
	unsigned long n,k;
	
	while(scanf("%lu",&n)==1)
	{
		if(n==0)break;
		k=sqrt(n);
		if(n==pow(k,2))
		  printf("yes\n");
		else printf("no\n");		
	}
	return 0;
}
/*@END_OF_SOURCE_CODE*/