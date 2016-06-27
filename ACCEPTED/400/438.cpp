#include<stdio.h>
#include<math.h>
void main()
{
	double x1,x2,x3,y1,y2,y3,R,s,a,b,c,S,cir;
	double pi=3.141592653589793;
	while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
	{
		a=sqrt((pow((x1-x2),2)+pow((y1-y2),2)));
		b=sqrt((pow((x1-x3),2)+pow((y1-y3),2)));
		c=sqrt((pow((x2-x3),2)+pow((y2-y3),2)));
		s=double(a+b+c)/2;
		S=sqrt(s*(s-a)*(s-b)*(s-c));
		if(S==0){printf("0.00\n");continue;}
		R=(a*b*c)/(4*S);
		cir=2*pi*R;
		printf("%.2lf\n",cir);
				
	}
}