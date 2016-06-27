#include<stdio.h>

void enqueue(int q[],int value, int *tail)
{
	q[*tail]=value;
	if(*tail== 500)
	{
		*tail=0;
	}
	else *tail=*tail+1;
}

int dequeue(int q[],int *head)
{
	int value;
	value = q[*head];
	if(*head  == 500)
	{
		*head=0;
	}
	else *head = *head+1;

	return value;
}

void bfs(int sRow,int sCol, int dRow, int dCol)
{
	int i,row, col,tail1,tail2,head1,head2;
	//int v[8][8];
	char colour[70];
	int d[70],pi[70][2];
	int rowQueue[500],colQueue[500];
	int adj[10][3];
	
	head1=head2=tail1=tail2=0;

	for(i=0;i<70;i++)
	{
		if((sRow*8+sCol)!=i)
		{
				colour[i] = 'w';
				d[i] = 9999;
				pi[i][0] = -5;
				pi[i][1] = -5;
		}
		
	}

	colour[sRow*8+sCol] = 'g';
	d[sRow*8+sCol] = 0;
	pi[sRow*8+sCol][0] = -5;//-1 represent nill
	pi[sRow*8+sCol][1] = -5;
	
	//printf("\nprint in bfs\n");

	enqueue(rowQueue,sRow,&tail1);
	enqueue(colQueue,sCol,&tail2);

	while((head1!=tail1)&&(head2!=tail2))
	{
		row = dequeue(rowQueue,&head1);
		col = dequeue(colQueue,&head2);
		//printf("parent row= %d , col= %d\n",row,col);
		// here code goes for adj successors
		i=0;
		if(row+2<8)
		{
			if(col+1<8)
			{
				adj[i][0]=row+2;
				adj[i][1]=col+1;
				//printf("succ row= %d , col= %d\n",adj[i][0],adj[i][1]);
				i++;
				
			}
			if((col-1<8)&&(col-1>=0))
			{
				adj[i][0]= row+2;
				adj[i][1]= col-1;
				//printf("succ row= %d , col= %d\n",adj[i][0],adj[i][1]);
				i++;
			}
		}
		if((row-2<8)&&(row-2>=0))
		{
			if(col+1<8)
			{
				adj[i][0]=row-2;
				adj[i][1]=col+1;
				//printf("succ row= %d , col= %d\n",adj[i][0],adj[i][1]);
				i++;
			}
			if((col-1<8)&&(col-1>=0))
			{
				adj[i][0]= row-2;
				adj[i][1]= col-1;
				//printf("succ row= %d , col= %d\n",adj[i][0],adj[i][1]);
				i++;
			}
		}
		if(col+2<8)
		{
			if(row+1<8)
			{
				adj[i][0]=row+1;
				adj[i][1]=col+2;
				//printf("succ row= %d , col= %d\n",adj[i][0],adj[i][1]);
				i++;
			}
			if((row-1<8)&&(row-1>=0))
			{
				adj[i][0]= row-1;
				adj[i][1]= col+2;
				//printf("succ row= %d , col= %d\n",adj[i][0],adj[i][1]);
				i++;
			}
		}
		if((col-2<8)&&(col-2>=0))
		{
			if(row+1<8)
			{
				adj[i][0]=row+1;
				adj[i][1]=col-2;
				//printf("succ row= %d , col= %d\n",adj[i][0],adj[i][1]);
				i++;
			}
			if((row-1<8)&&(row-1>=0))
			{
				adj[i][0]= row-1;
				adj[i][1]= col-2;
				//printf("succ row= %d , col= %d\n",adj[i][0],adj[i][1]);
				i++;
			}
		}// here ends for the successors
		//printf("l=  %d\n",i);
		int adjlen = i;

		for(i=0;i<adjlen;i++)
		{
			if(colour[adj[i][0]*8+adj[i][1]]=='w')
			{
				colour[adj[i][0]*8+adj[i][1]]='g';
				d[adj[i][0]*8+adj[i][1]] = d[row*8+col]+1;
				pi[adj[i][0]*8+adj[i][1]][0] = row;
				pi[adj[i][0]*8+adj[i][1]][1] = col;
				enqueue(rowQueue,adj[i][0],&tail1);
				enqueue(colQueue,adj[i][1],&tail2);
			}
		}
		colour[row*8+col] = 'b';

	}// end of while
	//printf("%d ",dRow*8+dCol);
	printf("To get from %c%d to %c%d takes %d knight moves.\n",(sCol+'a'),sRow+1,(dCol+'a'),dRow+1,d[dRow*8+dCol]);
}

int main()
{
	char input[40],i;
	int flag,num,sr,sc,dr,dc;
	//freopen("i.txt","r+",stdin);
	//freopen("out.txt","w+",stdout);
	while(gets(input))
	{
		i=0;
		while(input[i])i++;
		if(i==0)continue;
		else
		{
			num = i;
			flag = 0;
			int flag1= 0;
			for(i=0;i<num;i++)
			{
				if((input[i]>='a'&&input[i]<='h'))
				{
					if(flag==0)
					{
						sc = input[i] - 'a';
						flag = 1;
					}
					else if(flag == 1)
					{
						dc = input[i]- 'a';
					}
				}
				else if(input[i]>='1'&&input[i]<='8')
				{
					if(flag1==0)
					{
						sr = input[i] - '1';
						flag1 = 1;
					}
					else if(flag1 == 1)
					{
						dr = input[i]- '1';
					}
				}
			}//end of for()
		}//end of else
		//printf(" %d %d %d %d",sr,sc,dr,dc);
		bfs(sr,sc,dr,dc);

	}//end of while
	return 0;
}