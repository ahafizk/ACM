#include<stdio.h>

int findVal(int N)
{
    int a[100];
	int m,i;

	m=1;
	
	while(1)
	{
      for(i=0;i<N;i++) a[i]=0;
	    
	     int f=N-2;
   	      
		 i=0;
         
		 a[i]=1;
		 
		 while(f)
		   { 
			 int j=m;
             
			 while(j)
			 {
				 i=(i+1)%N;
				 if(!a[i])
                  j--;
			 }

			 a[i]=1;
			 f--;

		   }

	   if(!a[12]) break;

	   m++;
	}
	
	
	
	
	
	return m; 
}



void main()
{
	int N;
	while(1)
	{
		scanf("%d",&N);
		if(!N) break;

        printf("%d\n",findVal(N));
	}
}