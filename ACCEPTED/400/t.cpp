#include<stdio.h>

#include<math.h>

int abs1(double d)
{
	return (int)d;
}

int main()
{
	double b[1000][70],ux,uy;
	double a1,a2,a3,a4;
	char c, s[1000];
	int i =1,len,flag;
	//freopen("i.txt","r+",stdin);
	//freopen("12.txt","w+",stdout);
	while(1)
	{
		scanf("%c",&c);
		if(c=='*')break;
		
		if(c=='r')
		{
			s[i]='r';
			scanf("%lf %lf %lf %lf ",&b[i][0],&b[i][1],&b[i][2],&b[i][3]);
		//printf("%lf \n%lf \n%lf\n%lf\n%lf\n%lf",b[1][0],b[1][1],b[1][2],b[1][3],b[1][4],b[1][5]);
			i++;
		}
		else if(c=='c')
		{
			s[i]='c';
			
			scanf("%lf%lf%lf",&b[i][0],&b[i][1],&b[i][2]);
			i++;
		}
		else if(c == 't')
		{
			s[i] = 't';
			scanf("%lf%lf%lf%lf%lf%lf",&b[i][0],&b[i][1],&b[i][2],&b[i][3],&b[i][4],&b[i][5]);
			i++;
		}
	}// end of while taking input

	len = i;
	int count = 0;
	while(scanf("%lf%lf",&ux,&uy)==2)
	{
		count++;
		if((fabs(ux-9999.9)<0.000001) &&(fabs(uy-9999.9)<0.000001))break;
		else
		{
			flag = 0;

			for(i=1;i<len;i++)
			{
							
				if(s[i]=='r')
				{
					if((ux>b[i][0]&&ux<b[i][2])&&(uy<b[i][1]&&uy>b[i][3]))
					{
						flag=1;
						printf("Point %d is contained in figure %d\n",count,i);
					
					}
					//t++;
				}
				if(s[i]=='c')
				{
					if((((b[i][0]-ux)*(b[i][0]-ux))+((b[i][1]-uy)*(b[i][1]-uy)))<(b[i][2]*b[i][2]))
					{
						flag=1;
						printf("Point %d is contained in figure %d\n",count,i);
					}
					//t++;	
				}
				if(s[i]=='t')
				{
					
					/*the area of a triangle having vertices (A,B), (C,D),(E,F) 
						is 
						(1/2)[AD + BE + CF - ED - FA - BC]*/

					a1=fabs((1.0/2.0)*((b[i][0]*b[i][3])+(b[i][1]*ux)+(b[i][2]*uy)-(ux*b[i][3])-(uy*b[i][0])-(b[i][1]*b[i][2])));
					a2=fabs((1.0/2.0)*((b[i][0]*b[i][5])+(b[i][1]*ux)+(b[i][4]*uy)-(ux*b[i][5])-(uy*b[i][0])-(b[i][1]*b[i][4])));
					a3=fabs((1.0/2.0)*((b[i][4]*b[i][3])+(b[i][5]*ux)+(b[i][2]*uy)-(ux*b[i][3])-(uy*b[i][4])-(b[i][5]*b[i][2])));
					a4=fabs((1.0/2.0)*((b[i][0]*b[i][3])+(b[i][1]*b[i][4])+(b[i][2]*b[i][5])-(b[i][4]*b[i][3])-(b[i][5]*b[i][0])-(b[i][1]*b[i][2])));
					//if(a1<0)a1=a1*(-1.0);
					//if(a2<0)a2=a2*(-1.0);
					//if(a3<0)a3=a3*(-1.0);
					//if(a4<0)a4=a4*(-1.0);

				/*	printf("\n\nin the triangle\n");
					printf("a1= %lf\n",a1);
					printf("a2= %lf\n",a2);
					printf("a3= %lf\n",a3);
					printf("a4= %lf\n\n",a4);*/

					if(fabs(a1+a2+a3-a4)<= 0.000001)
					{
						flag = 1;
						printf("Point %d is contained in figure %d\n",count,i);
					}
				}
			}// end of for()
			if(flag==0)
			{
				printf("Point %d is not contained in any figure\n",count);
			}
		
		}// end of else
		
	}

	return 0;
}
