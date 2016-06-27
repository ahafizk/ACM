#include<stdio.h>
#include<math.h>
void main()
{
	double d,l,dif,a,b,area;
	int t;
	scanf("%d",&t);
	while(t>=1)
	{
		scanf("%lf%lf",&d,&l);
		if(d==0&&l==0)break;
		dif=(l-d)/2;
		a=d/2+dif;
		b=sqrt(l*l/4-d*d/4);
		area=2*acos(0)*a*b;
		printf("%.3lf\n",area);
		t--;
	}
}