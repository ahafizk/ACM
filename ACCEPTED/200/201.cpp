#include<stdio.h>
#include<iostream.h>
#include<vector>
using namespace std;




int main()
{
	int H[10][10];
	int V[10][10];
	int p[100][2];
	int N,size,i,j,k,r1,c1,r2,c2,l=0;
	bool t;
	char ch;
	//freopen("input.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	while(cin>>N)
	{
		l++;
		if(l>1)cout<<"\n"<<"**********************************"<<"\n\n";
		t = false;
		cin>>size;
		//row2=row1 =col1=col2=1;
		
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				V[i][j] = 0;
				H[i][j] = 0;
			}
		}

		for(k=1;k<=size;k++)
		{
			cin>>ch>>i>>j;
			if(ch=='H')
			{
				H[i][j] = 1;
				
			}
			else if(ch=='V')
			{
				V[i][j] = 1;
				
			}
		}
		cout<<"Problem #"<<l<<"\n\n";
		//search for the edge
		int x1,x2,y1,y2,mn;
		bool flag = false,t=false;
		for(i=1;i<=size;i++)
		{
			int count = 0;
			flag = false;
			mn =0;
			for(int row = 1;row+i<=N;row++)
			{
				for(int col = 1;col+i<=N;col++)
				{
					
					x1= row;y1=col;
					x2=x1+i;y2=y1+i;
					if(x2<=N&&y2<=N)
					{	flag = true;	
						for(c1=y1;c1<y2;c1++)//upper horizontal boundary test
						{	
							if((H[x1][c1]==0)||(H[x2][c1]==0))
							{
								flag = false;
								break;
						
						}
											
						for(r1 = x1;r1<x2;r1++)
						{
							if((V[y1][r1]==0)||(V[y2][r1]==0))
							{
								flag = false;
								break;
							}
							
						}
					
						
						if(flag)
						{
							count++;
							flag = false;
						}
					}

				}

			}
			if(count)
			{
				t = true;
				
				cout<<count<<" square (s) of size "<<i<<"\n";
			}
			
		}
		if(!t)cout<<"No completed squares can be found.\n";
		/*for(i=0;i<=N;i++)
		{
			for(j=0;j<=N;j++)
			{
				printf("%d ",V[i][j]);
			}
			printf("\n");
		}*/
	}//end of while

	return 0;
}