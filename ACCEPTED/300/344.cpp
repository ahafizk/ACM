#include<stdio.h>
void main()
{
	char a[10000],ch;
	int n,b,c,l,count;
	while(scanf("%d",&n)==1)
	{
		l=0;
		if(n==0)break;
		else 
		{
			for(int i=1;i<=n;i++)
			{
				c=i/10;
				b=i%10;
				if(c>0)
				{
					if(c<=3)
					{
						while(c>0)
						{
							a[l++]='x';
							c--;
						}
					}

					else if(c==4)
					{
						a[l++]='x';
						a[l++]='l';
						c=0;
					}
					else if(c>=5&&c<=8)
					{
						a[l++]='l';
						while(c>5)
						{
							a[l++]='x';
							c--;
						}
						c=0;
					}
					else if(c==9)
					{
						a[l++]='x';
						a[l++]='c';
					}
					else if(c==10)
					{
						a[l++]='c';
					}
				}//end of if it's for division

				if(b>0)
				{
					if(b<=3)
					{
						while(b>0)
						{
							a[l++]='i';
							b--;
						}
					}
					else if(b==4)
					{
						a[l++]='i';
						a[l++]='v';
						b=0;
					}
					else if(b>=5&&b<=8)
					{
						a[l++]='v';
						while(b>5)
						{
							a[l++]='i';
							b--;
						}
						b=0;
					}
					else if(b==9)
					{
						a[l++]='i';
						a[l++]='x';
					}
					else if(b==10)
					{
						a[l++]='x';
					}
				}//end of else if() for mod
			}
		}//end of else
///*************************************************
		///////PRINT HERE/////////////
		printf("%d:",n);
		for(int j=1;j<=5;j++)
		{
			count=0;
			for(int i=0;i<l;i++)
			{
				if(j==1)
				{
					if(a[i]=='i')
					count++;
					ch='i';
				}
				else if(j==2)
				{
				
					if(a[i]=='v')
						count++;
					ch='v';
				}
				else if(j==3)
				{
					if(a[i]=='x')
						count++;
					ch='x';
				}
				else if(j==4)
				{
					if(a[i]=='l')  count++;
					ch='l';
				}
				else if(j==5)
				{
					if(a[i]=='c')count++;
					ch='c';
				}
			}
			if(j<5)
				printf(" %d %c,",count,ch);
			else if(j==5)
				printf(" %d %c",count,ch);
		}
		printf("\n");
	}//end of input while();
}