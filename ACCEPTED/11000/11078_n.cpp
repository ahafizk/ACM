#include<stdio.h>

int main()
{
	long int T,n,i,j,num,max;
	long int senior,junior;
	long int pos1,pos2,posi,posj;
	bool f = false;
//	freopen("input.txt","r",stdin);
	scanf("%ld",&T);
	for(i=1;i<=T;i++)
	{ 
		f = false;
		pos1 =-150000;
		pos2 = 150000;
		scanf("%ld",&n);
		for(j=1;j<=n;j++)
		{
			scanf("%ld",&num);
			if(j<=2)
			{
				if(j==1){senior = num;posi=1;}
				else if(posi<j)
				{
					junior = num;posj = j;
					max = senior - junior;
				}
				continue;
			}
			else
			{
				if(max<(senior - num)&&posi<j)
				{
					max = senior - num;
					junior = num;
				}
				if(max<(junior - num)&&posj<j)
				{
					max = junior - num;
					senior = junior;
					junior = num;
				}

			   if(j>=3&&j<=(n-1)&&pos1<num)
				{
				  pos1 = num;
				  posi = j;
				  f = true;
				}
				else if(j>=4&&j<=n)
				{
				
					if(pos2>=num)
					{
						pos2 = num;
						posj = j;
						f = false;
					}
					else if(f==true)
					{
						pos2 = num;
						posj = j;
						f = false;
					}
				}
				if(pos2<150000&&pos1>-150000&&posi<posj)
				{
					if(max<pos1- pos2)
					{
						max = pos1- pos2;
						senior = pos1;
						junior = pos2;
					}
				}
				
			}
			/*if(j==1)senior = num;
			if(j==2)junior = num;
			*/
						
		}
		//printf("senior = %ld junior = %ld\n",senior,junior);
		printf("%ld\n",senior-junior);
	}
	return 0;
}