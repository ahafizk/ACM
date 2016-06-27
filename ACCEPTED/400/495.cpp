#include<stdio.h>

char f0 = '0';
char f1 = '1';
char res[5002][1100];


void sum (int i)
{
	int x,j;

	x=j=0;
	while(res[i-1][j])
	{
		if(res[i-1][j]!='\0'&&res[i-2][j]!='\0')
		{
			x = res[i-1][j]-'0'+res[i-2][j]-'0'+x;
			res[i][j] = x%10+'0';
			x=x/10;
			
		}
		else if(res[i-2][j]=='\0')
		{
			x = res[i-1][j]-'0'+x;
			res[i][j] = x%10+'0';
			x=x/10;
		}
		j++;
	}
	if(res[i-2][j]!='\0')
	{
		while(res[i-2][j])
		{
			x = res[i-2][j]-'0'+x;
			res[i][j] = x%10+'0';
			x=x/10;
			j++;
		}
	}
	if(x!=0)
	{
		res[i][j]=x+'0';
		j++;
	}
	res[i][j]='\0';
	
	
	
}


int main()
{
	
	int n,i,j,len;
	
	int arr[5002];

	res[0][0]='0';
	res[0][1] = '\0';
	res[1][0]='1';
	res[1][1] = '\0';
	
	for(i=2;i<=5000;i++) 
	{ 
		sum(i); 
	}
	i=0;
	while(i<5002)
	{
		j=0;
		while(res[i][j])
		{
			j++;
		}
		arr[i]= j;
		i++;
	}

	while(scanf("%d",&n)==1)
	{
		len = arr[n];
		printf("The Fibonacci number for %d is ",n);
		for(i=len-1;i>=0;i--)
		{
			printf("%d",res[n][i]-'0');
						
		}
		printf("\n");
	}

	return 0;
}
