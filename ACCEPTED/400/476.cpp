#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
	double b[100][40],ux,uy;
	char a;
	int i,c,flag,len,j=0,m;
//	freopen("c:\\input.txt","r+",stdin);
	//freopen("c:\\o476.txt","w+",stdout);
	for(i=1;i<=1000;i++) 
	{
		scanf("%c",&a);
		if(a=='*')break;
		else
		{
			j++;
			scanf("%lf%lf%lf%lf",&b[i][0],&b[i][1],&b[i][2],&b[i][3]);
		}
	}
	c=1;len=j;//printf("%d",len);
	while(scanf("%lf%lf",&ux,&uy)==2)
	{
	 if((abs(ux-9999.9)<0.000001) &&(abs(uy-9999.9)<0.000001))break;
	 else
	 {
		 flag=0;m=0;
		for(i=1;i<=len;i++)
		{
			//printf("%d ",i);
			if(i%2!=0)
			{
				m++;
				if((ux>b[i][0]&&ux<b[i][2])&&(uy<b[i][1]&&uy>b[i][3]))
				{
					flag=1;
					printf("Point %d is contained in figure %d\n",c,m);
					
				}
			}
		}
		if(flag==0)
		{
			printf("Point %d is not contained in any figure\n",c);
		}

		c++;
	 }
	}
}
