#include<stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;



int N;
vector < string > ppl;
vector < int > money;



int main() {

   int cnt = 0;
	int i,j;
	//freopen("input.txt","r",stdin);
   while( cin >> N ) {
   
      if( cnt > 0 ) cout << endl;
      cnt++;
         
      ppl.clear();//removes all elements from the vector
	  ppl.resize( N );//resize the vector with N
      
	  money.clear();
	  money.resize( N ,0);//0 are added to the end
	 
	  for(  i = 0; i < N; ++i ) cin >> ppl[i];//take the name of the group

      for(  i = 0; i < N; ++i ) 
	  {
         string from, to;
         int m, n;
         
         cin >> from >> m >> n; //like = dave 200 3 
		 bool flag = false;

         int to_give = ( m == 0 || n == 0 ) ?  0 : m / n;
		 int remain = ( m == 0 || n == 0 ) ?  0 : m % n;
			remain += (m>0&&n==0)?m:0;
			if(n==0)
			{
				for(j=0;j<N;j++)
				{
				if(!flag&&(from == ppl[j])){money[j] += -m+remain;flag = true;}
				}
			}
			else
			{
			    for(  int k = 0; k < n; ++k) 
				 {
				    cin >> to;
					 for(j=0;j<N;j++)
					{
						if(!flag&&(from == ppl[j])){money[j] += -m+remain;flag = true;}
						if(to==ppl[j]){money[j] += to_give; }
					}
			     }
			}
         
      }

      for( int i = 0; i < N; ++i )
         cout << ppl[i] << " " << money[i] << endl;
   }
   return 0;
}