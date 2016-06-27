#include<stdio.h>
void main()
{
	long double F;
	while(scanf("%Lf",&F)==1)
	{
		printf("%.10Lf\n",1.0673956817111818692592637626711 * F );
	}
}