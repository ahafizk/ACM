#include<stdio.h>
#include<string.h>

int main()
{
	char in[10],mov[1000],initial[5][5],moves[100000];
	int i,j,k,row,col,flag,len,s=1;
	//freopen("227in.txt","r+",stdin);
	//freopen("227out.txt","w+",stdout);
	while(1)
	{
		flag = 0;
		
		for(i=0;i<5;i++)
		{
			gets(in);
			if(in[0]=='Z'&&strlen(in)==1){flag = 1;break;}
			else 
			{
				for(j=0;j<5;j++)
				{
					initial[i][j] = in[j];
					if(initial[i][j]==' ')
					{
						row = i;
						col = j;
					}
				}
			}
		}// end of input initial config
		if(flag==1)break;// end of input file
		if(s>1)printf("\n");
		k=0;
		while(1)
		{
			flag = 0;
			gets(mov);
			len = strlen(mov);
			//if(mov[len-1]=='0'){flag = 1;}
			
			for(i=0;i<len;i++)
			{
				if(mov[i]=='0')
				{
					flag=1;
					break;
				}
				else
				{
					moves[k] = mov[i];
					k++;
				}
			}
			if(flag==1)
			{
				flag=0;
				break;//end of input moves
			}
		}
		// process the moves
		char ch;
		
		for(i=0;i<k;i++)
		{  
			flag = 0;
			if(moves[i]=='A')
			{	
				row--;
				if(row<0)flag = 1;
				else 
				{
					ch = initial[row][col];
					initial[row+1][col] = ch;
					initial[row][col] = ' ';
				}
			}
			else if(moves[i]=='B')
			{
				row++;
				if(row>4)flag = 1;
				else 
				{
					ch = initial[row][col];
					initial[row-1][col] = ch;
					initial[row][col] = ' ';
				}
			}
			else if(moves[i]=='R')
			{
				col++;
				if(col>4)flag = 1;
				else 
				{
					ch = initial[row][col];
					initial[row][col-1] = ch;
					initial[row][col] = ' ';
				}
			}
			else if(moves[i]=='L')
			{
				col--;
				if(col<0)flag = 1;
				else 
				{
					ch = initial[row][col];
					initial[row][col+1] = ch;
					initial[row][col] = ' ';
				}
			}
			if(flag==1)
			{
				break;
			}

		}// end of processing for()
		//printing the output
		printf("Puzzle #%d:\n",s);
		if(flag==0)
		{
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(j<4)
					printf("%c ",initial[i][j]);
					else printf("%c\n",initial[i][j]);
				}
			}
		}
		else 
		{
			printf("This puzzle has no final configuration.\n");
		}
	s++;
	}// end of outer while

	return 0;
}