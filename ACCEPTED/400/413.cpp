
#include<stdio.h>

int main()
{
	int arr[30],i,flag=0,n,totalElement=0,up,dn;
	double neutralValue,totalUp,totalDown,totalUpSequence,totalDownSequence,avg1, avg2;
	
	//freopen("413out.txt","w",stdout);
	//freopen("413in.txt","r",stdin);


	while(1)
	{
		totalElement = 0;
		neutralValue = 0;
		totalUp = 0;
		totalDown = 0;
		totalUpSequence =0 ;
		totalDownSequence = 0;
		flag = 0;
		up = 0;
		dn = 0;
		
		while(scanf("%d",&n))
		{
			if(n==0)break;
			arr[totalElement] = n;
			totalElement++;
			
		}

		if(totalElement==0)break;
		else
		{
			for(i=0;i<totalElement-1;i++)
			{
				if(arr[i]==arr[i+1])
				{
					neutralValue++;
					
				}
				if(arr[i]<arr[i+1])//up sequence length
				{
					totalUp++;
					up = 1;
					
					if(dn==1)
					{
						totalDown = totalDown + neutralValue;
						totalDownSequence = totalDownSequence + 1;
						neutralValue = 0;
						dn = 0;
					}
					
				}
				if(arr[i]>arr[i+1]) // down sequence length
				{
					totalDown++;
					dn = 1;
					
					if(up == 1)
					{
						totalUp = totalUp + neutralValue;
						totalUpSequence = totalUpSequence + 1;
						neutralValue = 0;
						up = 0;
						
					}
					
				}
				
			}// end of for

			if(i == totalElement-1)
				{
					if(up == 1)
					{
						totalUp = totalUp + neutralValue;
						totalUpSequence = totalUpSequence +1;
						neutralValue = 0;
						up = 0;
					}
					else if(dn==1)
					{
						totalDown = totalDown + neutralValue;
						totalDownSequence = totalDownSequence +1 ;
						neutralValue = 0;
						dn = 0;
					}
				}
		
			if(totalUpSequence == 0)
			{
					totalUpSequence = 1;
			}
			if(totalDownSequence == 0)
			{
				totalDownSequence  = 1;
			}
			avg1 = (totalUp/totalUpSequence);
			avg2 = (totalDown/totalDownSequence);
			printf("Nr values = %d:  %lf %lf\n",totalElement,avg1,avg2);
		
		}//end of else
	}//end of outer while
	
	return 0;	
}