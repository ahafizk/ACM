#include<stdio.h>
#include<math.h>
void main()
{
	double hangle,mangle,h,m,angle;
	char c;
	while(scanf("%lf%c%lf",&h,&c,&m)==3)
	{
		if(h==0&&m==0)break;
		hangle=h*30+(m/60)*30;
		mangle=m*6;
		angle=hangle-mangle;
		if(angle<0)angle=-1*angle;
		if(angle>180)
			angle=360-angle;
		printf("%.3lf\n",angle);
	}

}

