#include<stdio.h>
int main()
{

	char ar[10000];
	int i,flag;
	long double num1,num2;
	while(gets(ar))
	{
		i=0;
		flag =0 ;
		num1 = 0;
		num2 = 0;
		int flag1=0,flag2=0;
		char ch;
		while(ar[i])
		{
			if(ar[i]>='0'&&ar[i]<='9')
			{
				if(flag==0&&flag1==0)
				{
					num1 = num1 * 10 + ar[i] -'0';
					if(num1>2147483647.00&&flag1==0)
					{
						flag1=1;
					}
				}
				else if(flag==1&&flag2==0)
				{
					num2 = num2*10 + ar[i] - '0';
					if(num2>2147483647.00&&flag2==0)
					{
						flag2=1;
					}
				}
			}
			else if(ar[i]=='+'||ar[i]=='*')
			{
				ch=ar[i];
				flag=1;
			}
			i++;
			
		}// end of inner while()
		printf("%s\n",ar);
		if(flag1==1)
		{
			printf("first number too big\n");
		}
		if(flag2==1)
		{
			printf("second number too big\n");
		}
		if(ch=='+')
		{
			long double res = num1 + num2;
			if(res>2147483647.00)printf("result too big\n");
		}
		if(ch=='*')
		{
			long double res = num1*num2;
			if(res>2147483647.00)printf("result too big\n");
		}

	}
	return 0;

}

/*while ((c = getchar()) != '\n' && c != EOF)
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
			break;*/