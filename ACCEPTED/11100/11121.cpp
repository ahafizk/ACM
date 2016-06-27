#include<stdio.h>
//#include<iostream.h>
#include <math.h>

void print_binary(long long int num)
{
	long long int a,rem,b;
	if(num == 0 ){a=0;rem = 0;}
	else if(num == -1){a = 1;rem = 1;}
	else if(num==1){a=0;rem = 1;}
	else if(num<0)
	{
		a = ((-1)*num)/2;
		b = a*(-2);
		if(b>num)
		{
			a++;
			rem = num - a*(-2);
		}
		else if(b==num)
			rem = 0;
	}
	else if(num>0)
	{
		a = num/2;
		a = -1*a;
		b = a*(-2);
		if(b<num)
		{
			rem = num - b;
		}
		else if(b==num)rem = 0;
	}
	if(a!=0)print_binary(a);
	printf("%lld",rem);
}


int main()
{
  long int N,i;
  long long  int n;
  //freopen("input.txt","r",stdin);
  scanf("%ld",&N);
  
  for(i=1;i<=N;i++)
  {
	scanf("%lld",&n);
	printf("Case #%ld: ",i);
	print_binary(n);
	printf("\n");
  }
  return 0;
}