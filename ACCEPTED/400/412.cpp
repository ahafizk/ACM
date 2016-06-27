#include<stdio.h>
#include<math.h>

int euclid(int a,int b)
{
   if(b==0)
        return a;
   else
        return euclid(b,a%b);
}



int main()
{
	int n,i,j,arr[50],total,count;
	//double pi;
	
	while(scanf("%d",&n))
	{
		if(n==0)break;
		else
		{
			for(int k = 0;k<n;k++)
			{
				scanf("%d",&arr[k]);
			}
			
			total = 0;
			count = 0;
			
			for(i=0;i<n-1;i++)
			{
				for(j=i+1;j<n;j++)
				{
					total++;
					if(euclid(arr[i],arr[j])==1)
					{
						count++;
						
					}
				}
			}
			
			if(count==0)
			{
				printf("No estimate for this data set.\n");
			}
			else
			{
				printf("%lf\n",sqrt((6.0/count)*total));
			}
		}
	}
	return 0;
}