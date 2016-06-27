#include<stdio.h>
void main()
{
	 long int a,b,carry,c,count;
	while(scanf("%ld%ld",&a,&b)==2)
	{
		
		if(a==0&&b==0)break;
		else
		{
			if(a==0||b==0)count=0;
			else{
			carry=0;c=0;count=0;
			while(b>0||a>0)
			{
			
				carry=(a%10+b%10)+c;
				a=a/10;
				b=b/10;
				c=carry/10;
				if(c>0)
				{
					count++;
									
				}
			}
			}
			if(count==0)
			{
				printf("No carry operation.\n");
			}
			else if(count==1)
			{
				printf("%ld carry operation.\n",count);
			}
			else 
			{
				printf("%ld carry operations.\n",count);
			}
		}//end of else
	}//end of while
}