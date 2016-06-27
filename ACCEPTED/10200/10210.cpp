#include<stdio.h>
#include<math.h>
void main()
{
	double x1,x2,y1,y2,CMD,ENF,AB,AM,AN,s,MN;
	
	while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&CMD,&ENF)!=EOF)
	{
		CMD=2*acos(0)*CMD/180;
		ENF=2*acos(0)*ENF/180;
		s=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
		AB=sqrt(s);
		AM=AB/tan(CMD);
		AN=AB/tan(ENF);
		MN=AM+AN;
		printf("%.3lf\n",MN);


	}
}