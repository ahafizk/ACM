#include<stdio.h>
#include<math.h>
void main()
{
	long double x1,x2,x3,y1,y2,y3,X,Y,D,C,r,cx,cy,c,e,h,k;
	char ch1,ch2,ch3,ch4,ch5;
//	int flag=0;
	while(scanf("%Lf%Lf%Lf%Lf%Lf%Lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF)
	{
		
		
		//if(flag!=0)printf("\n");
		//flag=1;
		D=2*x1*(2*y2-2*y3)-2*x2*(2*y1-2*y3)+2*x3*(2*y1-2*y2);
		X=-1*(x1*x1+y1*y1)*(2*y2-2*y3)+(x2*x2+y2*y2)*(2*y1-2*y3)-(x3*x3+y3*y3)*(2*y1-2*y2);
		Y=(2*x1)*(-pow(x2,2)-pow(y2,2)+pow(x3,2)+pow(y3,2))-(2*x2)*(-pow(x1,2)-pow(y1,2)+pow(x3,2)+pow(y3,2))+(2*x3)*(-pow(x1,2)-pow(y1,2)+pow(x2,2)+pow(y2,2));
			//+(pow(x1,2)+pow(y1,2)*(2*x2-2*x3))+(-2*x2*(pow(x3,2)+pow(y3,2))+2*x3*(pow(x2,2)+pow(y2,2)));//
		//M=-(2*x2)*(-pow(x1,2)-pow(y1,2)+pow(x3,2)+pow(y3,2));
		//	L=+(2*x3)*(-pow(x1,2)-pow(y1,2)+pow(x2,2)+pow(y2,2));
		C=2*x1*(-2*y2*(x3*x3+y3*y3)+2*y3*(x2*x2+y2*y2))-2*x2*(-2*y1*(x3*x3+y3*y3)+2*y3*(x1*x1+y1*y1))+2*x3*(-2*y1*(x2*x2+y2*y2)+2*y2*(x1*x1+y1*y1));
		if(D==0)
		{
			cx=0;cy=0;c=0;
		}
		else

		{
			
			cx=-1*(X/D);
			cy=-1*(Y/D);
			c=C/D;
		}
		r=sqrt((cx*cx+cy*cy-c));
		e=cx*cx+cy*cy-r*r;
		h=-2*cx;
		k=-2*cy;
	//for cx
		if(cx<0)
		{
			ch1='+';
			cx=-1*cx;
		}
		else 
		{
			ch1='-';
		}

	//for cy
		if(cy<0)
		{
			ch2='+';
			cy=-1*cy;
		}
		else 
		{
			ch2='-';
		}
	
	//for e
		if(e<0)
		{
			ch3='-';
			e=-1*e;
		}
		else 
		{
			ch3='+';
		}
	
	//for h
		if(h<0)
		{
			ch4='-';
			h=-1*h;
		}
		else 
		{
			ch4='+';
		}
	//for k
		if(k<0)
		{
			ch5='-';
			k=-1*k;
		}
		else 
		{
			ch5='+';
		}
	
	//print first form
		if(cx==0)
		{
			ch1='-';
		}
		if(cy==0)
		{
			ch2='-';
		}
		if(h==0){ch4='-';}
		if(k==0){ch5='-';}
		if(e==0){ch3='-';}
		printf("(x %c %.3Lf)^2 + (y %c %.3Lf)^2 = %.3Lf^2\n",ch1,cx,ch2,cy,r);
		printf("x^2 + y^2 %c %.3Lfx %c %.3Lfy %c %.3Lf = 0\n",ch4,h,ch5,k,ch3,e);
		printf("\n");
	}
}
