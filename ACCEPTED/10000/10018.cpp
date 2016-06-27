/* @JUDGE_ID: 52238UE 10018 Cpp */

#include<stdio.h>
int palindrom(unsigned long int p)
{
	
	int a[1000],j=0,flag;
	while(p>0)
	{
		a[j]=p%10;
		p=p/10;
		j++;
	}//end of while
	j=j-1;
	for(int i=0;i<=j;i++)
	{
		if(a[i]!=a[j])
		{
			flag=0;
			break;
		}
		else 
		{
			flag=1;
		}
		j--;
	}
	return flag;
}

void main()
{
	unsigned long int p,r,temp;
	int n,i,count,ret,numberofAdd;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lu",&p);
		temp=p;
		
		numberofAdd=1;
		while(numberofAdd<1000)
		{
			count=0;
			while(temp>0)
			{
				if(count==0)
				{
					r=temp%10;
					temp=temp/10;
					count=1;
				}
				else 
				{
					r=r*10+(temp%10);
					temp=temp/10;
				}
			}//end of while
			p=p+r;
			numberofAdd=numberofAdd+1;
			ret=palindrom(p);
			if(ret==1)
			{	
				break;
			}
			temp=p;
		}
		printf("%d %lu\n",numberofAdd-1,p);
		
	}//end of for();

}
/* @END_OF_SOURCE_CODE */