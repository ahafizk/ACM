
#include "stdio.h"
#include "math.h"
int main()
{
	double n,x;
	while( scanf("%lf",&n)==1 ){
		x=-n*log10(2);
		printf("2^-%.0lf = %.3fe%.0lf\n",n,pow(10,x-floor(x)),floor(x));
	}
	return 0;
}