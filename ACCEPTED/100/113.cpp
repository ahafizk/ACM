/* @JUDGE_ID:52238UE  113 C */
#include<stdio.h>
#include<math.h>
void main()
{
	long double n,p,k;
	while(scanf("%Lf",&n)==1)
	{
		scanf("%Lf",&p);
		k=pow(p,1/n);
		printf("%.0Lf\n",k);
	}

}
/*end of source code*/