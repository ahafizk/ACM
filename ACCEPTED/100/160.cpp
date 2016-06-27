#include<stdio.h>


int num[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

int store[25];


void calc(int m)
{
	int i;

	for(i=0;i<25;)
	{
		if(m==1) break;

		if(m%num[i]==0) 
		{
			store[i]++;
			m/=num[i];
		}
		else
			i++;

	}

}


void show(int n)
{
	int i;

	
	printf("%3d! =",n);
	//if(n==1)printf("%3d",n-1);
	for(i=0;i<25&& store[i];i++)
	{
		
		
		if(i==15) printf("\n      ");
		printf("%3d",store[i]);
	}

	putchar('\n');
}

int main()
{
	int n,m;
    int i;

	while(scanf("%d",&n)!=EOF)
	{
		if(!n) break;
         
		for(i=0;i<25;i++) store[i]=0;

		m=n;

		while(m>1)
		{
			calc(m);
    
			m--;
			
		}

		show(n);

		

	}
	return 0;

}