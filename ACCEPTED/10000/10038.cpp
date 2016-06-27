#include <stdio.h> 
#include <stdlib.h> 
#define SIZE 3001 
int s[3001];


int main() 
{ 
   int array[SIZE], n, w,abs_diff,flag; 
   while( scanf( "%d", &n ) == 1 ) 
      { 
         for( w = 0; w < n; w++ ) 
		 {
			 scanf( "%d", &array[w] );
			s[w]=0;
		 }
		 s[w]=0;
		 flag=1;
		 if( n-1 ) 
		 {
			for( w = 1; w <= n-1; w++ ) 
			{    
				abs_diff = abs(array[w-1] - array[w]);
				s[abs_diff]=1;
				if( abs_diff < 1 || abs_diff > n-1 ) 
					flag=0;    
			}
		 }
		 if(flag==1)
		 for(w=1;w<=n-1;w++)
		 {
			 if(s[w]==0)
			 {
				 flag=0;break;
			 }	 
		 }
         if( flag==1 ||n==1) 
            printf( "Jolly\n" ); 
         else 
            printf( "Not jolly\n" ); 
      } 

   return 0; 
}