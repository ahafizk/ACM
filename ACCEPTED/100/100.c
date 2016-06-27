
#include<stdio.h>
void main()
{
	int i,j,length,maxlength,n,a,input1,input2;
	while(scanf("%d %d",&i,&j)==2)
	{
		
		if(i==0&&j==0)printf("0 0 1\n");
		else 
		{
			if(i>j)
			{
				input1=j;
				input2=i;
			}
			else 
			{
				input1=i;
				input2=j;
			}
			maxlength=0;
			for(a=input1;a<=input2;a++)
			{
				n=a;
				length=1;
				for(; ;)
				{
					if(n==1||n==0)
					{	
						if(maxlength<length)maxlength=length;
						break;
					}
					if(n%2==0)
					{
						n=n/2;
					}
					else 
					{
						n=3*n+1;
					}
				length++;
				}
				
			}
		
		printf("%d %d %d\n",i,j,maxlength);
		}
	}	
}	
	