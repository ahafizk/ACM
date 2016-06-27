#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
	int k,i;
	double r1,r2,r3,s,a,b,c,pi,A,B,C,s1,s2,s3,a1,ar,area=0.00;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%lf",&r1);
		scanf("%lf",&r2);
		scanf("%lf",&r3);
		a=r1+r2;
		b=r2+r3;
		c=r3+r1;
		s=(a+b+c)/2;
		ar=sqrt(s*(s-a)*(s-b)*(s-c));
		pi=2*(acos(0));
	
		A=acos(((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c)));
		B=acos(((pow(c,2)+pow(a,2)-pow(b,2))/(2*a*c)));
		C=acos(((pow(b,2)+pow(a,2)-pow(c,2))/(2*a*b)));
		s1=r1*B;
		s2=r2*C;
		s3=r3*A;
		a1=((r1/2)*r1*B)+((r2/2)*r2*C)+((r3/2)*r3*A);
		area=ar-a1;
		printf("%lf\n",area);

	}
}