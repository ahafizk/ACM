#include<stdio.h>
#include<math.h>
void main()
{
	double s,r,R,S,areas,areav,arear,pi;
	int a,b,c;
	pi=2*acos(0);
	while(scanf("%d%d%d",&a,&b,&c)==3)
	{
			if(a>b||b>c||c<a)continue;	

			s=double(a+b+c)/2;
			S=s*(s-a)*(s-b)*(s-c);
			if(S==0){printf("0.0000 0.0000 0.0000\n");continue;}
			r=sqrt(S)/s;
			R=double(a*b*c)/(4*sqrt(S));
			arear=pi*r*r;
			areav=(sqrt(S)-arear);
			areas=(pi*R*R-sqrt(S));
			
			printf("%.4lf %.4lf %.4lf\n",areas,areav,arear);
		
	}
}