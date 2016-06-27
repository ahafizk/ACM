
#include<stdio.h>

int main()
{
	long int i ;
	long int seed,hold ;
	long int step,mod,count;
	

	while(scanf("%ld%ld",&step,&mod)==2)
	{
		hold = 0;
		count = 0;
		i=1;
		seed = (seed + step)%mod;
		while(seed!=hold)
		{
			seed = (seed + step)%mod;
			i++;
		}
		//printf("i = %ld\n",i);
		if(i == mod)
		{
			printf("%10ld%10ld    Good Choice\n",step,mod);
		}
		else
		{
			printf("%10ld%10ld    Bad Choice\n",step,mod);
		}
		printf("\n");
	}
	return 0;
}