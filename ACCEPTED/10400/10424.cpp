#include<stdio.h>
#include<string.h>
int summ(char ch)
{
	 if(ch=='a'||ch=='A')return 1;
	 else if(ch=='b'||ch=='B')return 2;
	 else if(ch=='c'||ch=='C')return 3;
	 else if(ch=='d'||ch=='D')return 4;
	 else if(ch=='e'||ch=='E')return 5;
	 else if(ch=='f'||ch=='F')return 6;
	 else if(ch=='g'||ch=='G')return 7;
	 else if(ch=='h'||ch=='H')return 8;
	 else if(ch=='i'||ch=='I')return 9;
	 else if(ch=='j'||ch=='J')return 10;
	 else if(ch=='k'||ch=='K')return 11;
	 else if(ch=='l'||ch=='L')return 12;
	 else if(ch=='m'||ch=='M')return 13;
	 else if(ch=='n'||ch=='N')return 14;
	 else if(ch=='o'||ch=='O')return 15;
	 else if(ch=='p'||ch=='P')return 16;
	 else if(ch=='q'||ch=='Q')return 17;
	 else if(ch=='r'||ch=='R')return 18;
	 else if(ch=='s'||ch=='S')return 19;
	 else if(ch=='t'||ch=='T')return 20;
	 else if(ch=='u'||ch=='U')return 21;
	 else if(ch=='v'||ch=='V')return 22;
	 else if(ch=='w'||ch=='W')return 23;
	 else if(ch=='x'||ch=='X')return 24;
	 else if(ch=='y'||ch=='Y')return 25;
	 else if(ch=='z'||ch=='Z')return 26;
	 else return 0;

}

int cal(int s)
{
	int sum=0;
	while(s>0)
	{
		sum=sum+s%10;
		s=s/10;
	}
	return sum;
	
}

void main()
{
	char a[25],b[25];
	int len1,len2,sum1,sum2,sum11,sum22,i;
	double result;
	while(gets(a)&&gets(b))
	{
		
		
		
		sum1=0;sum2=0;
		
		len1=strlen(a);
		len2=strlen(b);
		
		

		for(i=0;i<len1;i++)
		{
			if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
			{
				sum1=sum1+summ(a[i]);
			}
			else sum1=sum1+0;
		}
		

		for(i=0;i<len2;i++)
		{
			if(b[i]>='a'&&b[i]<='z'||b[i]>='A'&&b[i]<='Z')
			{
				sum2=sum2+summ(b[i]);
			}
			else sum2=sum2+0;
		}

		sum11=cal(sum1);
		while(sum11>9)
		{
			sum11=cal(sum11);
			
		}

		sum22=cal(sum2);
		while(sum22>9)
		{
			sum22=cal(sum22);
			
		}
		
		if(sum11>sum22)
		{
			int t=sum11;
			sum11=sum22;
			sum22=t;
		}
		
			if(sum22!=0&&sum11!=0)
			{
				result=100*((double)(sum11))/((double)(sum22));
				printf("%.2lf ",result);
				printf("%%");
				printf("\n");
			}
			else if(sum11==0||sum22==0)
			{
				printf("000.00 %%\n");
			}
		
	}
}