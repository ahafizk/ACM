#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
	double b1[100][40],ux,uy,b[100][40];
	char a,s[100];
	int i,c,flag,len,j=0,m,l=0,t=1;
	//freopen("c:\\i.txt","r+",stdin);
	//freopen("c:\\477.txt","w+",stdout);
	for(i=0;i<100;i++)
	{
		for(int k=0;k<40;k++)
		{
			b1[i][k]=0.0;
		}
	}
	for(i=1;i<=1000;i++) 
	{
		scanf("%c",&a);
		if(a=='*')break;
		if(a=='r')
		{
			s[t++]='r';
			j++;
			scanf("%lf%lf%lf%lf",&b1[i][0],&b1[i][1],&b1[i][2],&b1[i][3]);
		}
		else if(a=='c')
		{
			s[t++]='c';
			j++;
			scanf("%lf%lf%lf",&b1[i][0],&b1[i][1],&b1[i][2]);
		}

	}
	
	c=1;len=i+1;//printf("%d",len);
	int k=1;
	for(i=0;i<=len+1;i++)
	{
		if(b1[i][0]==0.0&&b1[i][1]==0.0&&b1[i][2]==0.0&&b1[i][3]==0.0)
		{
		}
		else 
		{
			b[k][0]=b1[i][0];
			b[k][1]=b1[i][1];
			b[k][2]=b1[i][2];
			b[k][3]=b1[i][3];
			k++;
		}
	}
	
	while(scanf("%lf%lf",&ux,&uy)==2)
	{
	 if((abs(ux-9999.9)<0.000001) &&(abs(uy-9999.9)<0.000001))break;
	 else
	 {
		 flag=0;m=0;t=0;
		for(i=1;i<=j;i++)
		{
			//printf("%d ",i);
			//if(i%2!=0)
		
				m++;	
				if(s[i]=='r')
				{
					if((ux>b[i][0]&&ux<b[i][2])&&(uy<b[i][1]&&uy>b[i][3]))
					{
						flag=1;
						printf("Point %d is contained in figure %d\n",c,m);
					
					}
					//t++;
				}
				if(s[i]=='c')
				{
					if((pow((b[i][0]-ux),2)+pow((b[i][1]-uy),2))<pow(b[i][2],2))
					{
						flag=1;
						printf("Point %d is contained in figure %d\n",c,m);
					}
					//t++;	
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
