#include<stdio.h>
#include<math.h>
void main()
{
	long double a,b,c,s,r,s1;
	while(scanf("%Lf%Lf%Lf",&a,&b,&c)==3)
	{
		
		if(a==0 || a<0 || b==0 || b<0 || c==0 || c<0)
		{
			printf("The radius of the round table is: 0.000\n");
		}
		else
		{
			s=(a+b+c)/2;
			s1=sqrt(s*(s-a)*(s-b)*(s-c));
			r=s1/s;
			printf("The radius of the round table is: %.3Lf\n",r);
		}
	}

}