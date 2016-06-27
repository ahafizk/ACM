#include<stdio.h>

int main()
{
	long int ca[40],i,j,k,l,cost,testcase,nq,n,min,base[40],num;
	//freopen("11005in.txt","r+",stdin);
//freopen("11005out.txt","w+",stdout);
	scanf("%ld",&testcase);
	for(k=1; k<=testcase; k++)
	{
		j=0;
		if(k!=1)printf("\n");
		for(i=1;i<=4;i++)
		{
			while(1)
			{
				scanf("%ld",&ca[j]);
				j++;
				//if(j==9||j==18||j==27||j==36)break;
				if(j%9==0)break;
			}
			
		}//take the cost of the characters
		
		scanf("%ld",&nq);// this is the num of queries
		printf("Case %ld:\n",k);
		for(l=1;l<=nq;l++)
		{
			scanf("%ld",&n);// this is the query no
			num = n;
			min = 999999;
			j=0;
			for(i=2;i<=36;i++)
			{
				n = num;
				cost = 0;
				while(n!=-1)
				{
					cost+=ca[n%i];
					n=n/i;
					if(n==0)n=-1;
				}
				if(cost<min&&cost!=0)
				{
					min = cost;
					base[0] = i;
					j = 0;
				}
				else if(cost == min)
				{
					j++;
					base[j]=i;
				}
			}
			//print the base
			printf("Cheapest base(s) for number %ld:",num);
			for(i=0;i<=j;i++)
			{
				printf(" %ld",base[i]);
			}
			printf("\n");
		}
		
	}
	return 0;
}