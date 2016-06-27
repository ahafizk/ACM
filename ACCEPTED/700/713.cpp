#include<stdio.h>
#include<string.h>
#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	long int N;
	char s[1000],s1[1000],s2[1000];
	
	//freopen("input.txt","r",stdin);
	cin>>N;
	gets(s);
	for(long int i=1;i<=N;i++)
	{
		
		gets(s);
		int len = strlen(s),l1=0,l2=0,digit,l;
		bool flag = false;
		//processing input
		for(int j= 0;j<len;j++)
		{
			if(s[j]==' '){flag = true;continue;}
			if(flag){s2[l2] = s[j];l2++;}
			else {s1[l1] = s[j]; l1++;}
		}
    	s1[l1] = '\0';
		s2[l2] = '\0';
		//end of processing
		//printf("s1=%s, s2=%s\n",s1,s2);
		l=0;digit = 0;
		if(l1>=l2)
		{
			
			for(int i = 0;i<l1;i++)
			{
				if(i<l2)
				{	//printf("s2 = %d\n",s2[i]-'0');
					//printf("s1[i] = %c\n",s1[i]);
					//printf("s1[i]-'0' = %d\n",s1[i]-'0');
					digit += (s1[i] - '0') + (s2[i] - '0');
					//printf("digit = %d\n",digit);
					s[l] = (digit%10)+'0';
					digit = digit/10;
					l++;
				}
				else 
				{
					digit += (s1[i] - '0');
					//printf("digit=%d\n",digit);
					s[l] = (digit%10)+'0';
					digit = digit/10;
					l++;
				}
			}
		}//end of if
		else
		{
			for(int i = 0;i<l2;i++)
			{
				if(i<l1)
				{
					digit += (s1[i] - '0') + (s2[i] - '0');
					//printf("digit=%d\n",digit);
					s[l] = (digit%10)+'0';
					digit = digit/10;
					l++;
				}
				else 
				{
					digit += (s2[i] - '0');
					s[l] = (digit%10)+'0';
					digit = digit/10;
					l++;
				}
			}
		}
		if(digit){s[l] = digit +'0';l++;}
		s[l] = '\0';
		flag =  true;
		if((l==1)&&s[i]=='0')printf("0");
		for(int i=0;i<l;i++)
		{
			if(s[i]=='0'&&flag)continue;
			flag = false;
			printf("%d",s[i]-'0');
		}
		printf("\n");
		
	}//end of test case for
	return 0;
}