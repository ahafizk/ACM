
#include<stdio.h>
void main()
{
	long long int ha,op,t;
	while(scanf("%lld%lld",&ha,&op)==2)
	{
		if(ha>op)
		{
			t=ha;
			ha=op;
			op=t;
		}

		printf("%lld\n",op-ha);
	
	}
}

