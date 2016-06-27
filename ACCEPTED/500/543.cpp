#include<stdio.h>
#include<math.h>

bool primeCheck(long int a)
{
	bool flag = false;
	long int  n = (long int)sqrt(a),i;
	for(i=2;i<=n;i++)
	{
		if(a%i==0)
		{
			flag = false;
			break;
		}
	}
	if(i==n+1)flag = true;
	return flag;
}

long int next_prime(long int a)
{
	
	while(1)
	{
	
		if(primeCheck(a))break;
			a++;
	}
	return a;
}


int main()
{
	long int a,b,n;
	bool f = false;
	
	//freopen("input.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	//printf("after generate\n");
	while(scanf("%ld",&n)==1)
	{
		if(n==0)break;
		else
		{
			a = 2;
			f = false;
			while(!f)
			{
				a = next_prime(a);
				
				if(primeCheck(n-a))
				{
					b = n-a;
					f = true;
					break;
				}
				a++;
				
				
			}

		}
		
		if(f==true)
		printf("%ld = %ld + %ld\n",n,a,b);
		else
		printf("Goldbach's conjecture is wrong.\n");
	}
	return 0;
}