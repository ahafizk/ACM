#include<stdio.h>


void LCS_LENGTH(int x[],int y[],int len)
{
	int i,j;
	int c[22][22];
	for(i=1;i<=len;i++)
	{
		c[i][0] =0;
	}
	for(j=0;j<=len;j++)
	{
		c[0][j] =0;
	}
	for(i=1;i<=len;i++)
	{
		for(j=1;j<=len;j++)
		{
			if(x[i]==y[j])
			{
				c[i][j]= c[i-1][j-1]+1;
			}
			else if(c[i-1][j]>=c[i][j-1])
			{
				c[i][j] = c[i-1][j];
			}
			else
			{
				c[i][j] = c[i][j-1];
			}
		}
	}

	
	printf("%d\n",c[len][len]);
}

void order(int a[],int len)
{
	int event[22],pos1;
	
	for(int i=1;i<=len;i++)
	{
		pos1 = a[i];
		event[pos1] = i;
	}
	for(int j=1;j<=len;j++)
	{	
		a[j]= event[j];//printf("%d ",a[j-1]);
	}
		//printf("%d ",event[j]);

}

int main()
{
	int line,i;
	int x[22],y[22];
	bool f=false;
	//freopen("out.txt","r",stdin);
	scanf("%d",&line);
	x[0]=0;
	for(i=1;i<=line;i++)
	{
		scanf("%d",&x[i]);
		//x [i] = a[i];
	
	}
	order(x,line);
	y[0]=0;
	while(1)
	{
		for(i=1;i<=line;i++)
		{
			if(scanf("%d",&y[i])!=EOF)f=true;
			else f = false;
			
		}
		order(y,line);
	
		if(f==false)break;
		LCS_LENGTH(x,y,line);
	}
		
     return 0;
	
}