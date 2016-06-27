

#include<stdio.h>



int main()
{

	int a1[100000],b1[100000], i,j,count1,count2,len1,len2;
	
	
	
	while(1)
	{
		i=0;
		
		int c;
		
		int num=0,flag=0,indicate = 0,count = 0;
		
		while ((c = getchar()) != '\n' && c != EOF)
		{
			if((char)c >= '0' && (char)c <= '9')
			{
				num = num * 10 + c -'0';
				indicate = 1;
			}
    
			else if((char)c == '-' ) 
			    flag =1;
			else if((char)c=='+')
			{
				flag = 0;
			}
			else if(indicate == 1)
			{
				if(flag == 1)
					num = num * -1;
			
				a1[count++] = num;
				num = 0;
				indicate = 0;
			}
 
		
		}
		if(indicate == 1)
		{
			a1[count++] = num;
			indicate  = 0;
		}
		if (c == EOF) 
			break;
		len1= count;
		count=0;
		num = 0;
		indicate = 0; flag =0;
		c=0;
		while ((c = getchar()) != '\n' && c != EOF)
		{
			if((char)c >= '0' && (char)c <= '9')
			{
				num = num * 10 + c -'0';
				indicate = 1;
			}
    
			else if((char)c == '-' ) 
			    flag =1;
			else if((char)c=='+')
			{
				flag = 0;
			}
			else if(indicate == 1)
			{
				if(flag == 1)
					num = num * -1;
			
				b1[count++] = num;
				num = 0;
				indicate = 0;
			}
 
			
		}
		
		if(indicate == 1)
		{
			b1[count++] = num;
			indicate = 0;
		}
		if (c == EOF) 
			break;
		len2=count;
		
		
		int flag1=0;
		count1 = len1;
		count2 = len2;
		 flag = 0;
		 int len=len2;
		 if(len1!=0&&len2!=0)
		 {

			for(i=0;i<len1;i++)
			{
				for(j=0;j<len2;j++)
				{
					flag=1;
					if(a1[i]==b1[j])
					{
						b1[j] = b1[len2-1];
						len--;
						count1--;
						count2--;
						break;
					}
				
				}
			}
			if((count1==0)&&(count2==0))printf("A equals B\n");
			if((count1==0)&&(count2!=0))printf("A is a proper subset of B\n");
			if((count1!=0)&&(count2==0))printf("B is a proper subset of A\n");
			if((count1==len1)&&(count2==len2))printf("A and B are disjoint\n");
			if((count1<len1)&&(count1>0)&&(count2<len2)&&(count2>0))printf("I'm confused!\n");
		 }
		 else if(len1==0||len2==0)
		 {	
			 if(len1==0&&len2==0)
			 {
				printf("A equals B\n");
			 }
			 else 
			 {
				printf("A and B are disjoint\n");
			 }
		 }
		
		
	}
	return 0;
}

