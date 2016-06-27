#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
	double d,R=6440,deg,arc,cord,rad,b,rad1;
	char a[3];
	while(scanf("%lf %lf %s",&d,&deg,&a)==3)
	{
		if(strcmp(a,"min")==0)
		{
			deg=deg/60;
			b=(180-deg)/2;
			rad1=(2*acos(0)*b)/180;
			rad=(2*acos(0)*deg)/180;
		}
		else if(strcmp(a,"deg")==0)
		{
			if(deg>180)
			{
				deg=360-deg;
			}
			b=(180-deg)/2;
			rad1=(2*acos(0)*b)/180;
			rad=(2*acos(0)*deg)/180;
		}
		

		if(deg==180)
		{
			arc=(R+d)*rad;
			cord=2*(R+d);
		}
		if(deg<180)
		{
			arc=(R+d)*rad;
			cord=2*(R+d)*cos(rad1);
		}

		printf("%.6lf %.6lf\n",arc,cord);
		
	}

}

