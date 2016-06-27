#include<stdio.h>

int a[20];
int N,k,m;


void Joseph()
{
	int t=N;
	int kk,mm,ki=-1,mi=N;

	
	while(t>0)
	{
        kk=k;
		mm=m;
        

		while(kk)
		{
			ki=(ki+1)%N;
			if(a[ki])kk--;
		}

		while(mm)
		{
			     mi--;
				if(mi<0) mi=N-1;

			if(a[mi])mm--;

		}


		if(ki==mi)
		{
	       
		 if(t==1)
			 printf(" %2d",a[ki]);
		  else
			 printf(" %2d,",a[ki]);
			
		  a[ki]=0;
			t--;
		}

		else
		{
		  if(t==2)
			  printf(" %2d %2d",a[ki],a[mi]);
		  else
			  printf(" %2d %2d,",a[ki],a[mi]);
			a[ki]=a[mi]=0;
			t-=2;
		}
			
	}
    putchar('\n');
}

int main()
{
	int i;
    

	while(1)
	{
		scanf("%d %d %d",&N,&k,&m);
			if(!N&&!k&&!m) break;
        
			for(i=0;i<N;i++) a[i]=i+1;
         

			Joseph();


	}
	return 0;
}