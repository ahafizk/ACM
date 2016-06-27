#include<stdio.h>
#include<string.h>

int stack[25][25];
int top[25],total;

void initialize()
{
	for(int i =0;i<total;i++)
	{
		stack[i][0] = i;
	}
}

int search(int in)
{
	int i=-1;
	
	for(int j = 0;j<total; j++)
	{
		for(int k = 0;k<top[j]; k++)
		{
			if(in == stack[j][k])
			{
				i=j;
				break;
			}
			
		}
		if(j==i)break;
	}

	return i;
}

void display()
{
	int i,j;
	for(i=0;i<total;i++)
	{
		printf("%d:",i);
		for(j=0;j<top[i];j++)
		{
			printf(" %d",stack[i][j]);
		}
		printf("\n");
	}
}

void restore(int value , int pos)
{
	int i,flag=-1;
	for(i=0;i<top[pos];i++)
	{
		if(stack[pos][i]==value)
		{
			flag=i;
		}
			
		else if(flag!=-1)
		{
			stack[stack[pos][i]][top[stack[pos][i]]] = stack[pos][i];
			top[stack[pos][i]]++;
			//printf("\nrestore %d: ",stack[stack[pos][i]][top[stack[pos][i]]]);
			
		}
	}
	if(flag!=-1)top[pos] = flag+1;
}


int pile(int value , int pos)
{
	int i,f=-1;
	for(i=0;i<top[pos];i++)
	{
		if(stack[pos][i]==value)
		{
			f=i;
			break;
		}
	}
	return f;
}

int main()
{
	int n,a,b,stacka, stackb;
	char command[50];
	char type[50];
	//freopen("in1.txt","r+",stdin);
	while(scanf("%d",&n)==1)
	{
		total = n;
		initialize();
		for(int i =0; i<25;i++)
			top[i] = 1;

		scanf("%s",command);
		
		while(strcmp(command,"quit")!=0)
		{
			scanf("%d%s%d",&a,type,&b);
			stacka = search(a);
			stackb = search(b);
			//printf("stacka= %d\n",stacka);
			if(stacka!=stackb)
			{
				if(strcmp(command,"move")==0)
				{
					restore(a,stacka);
					if(strcmp(type,"onto")==0)
					{
						restore(b,stackb);
						
					}
					stack[stackb][top[stackb]] = a;
					top[stackb]++;
					top[stacka]--;
					
				}
				else if(strcmp(command,"pile")==0)
				{
					int p;
					p = pile(a,stacka);
				//	printf("p = %d\n",p);
					if(strcmp(type,"onto")==0)
					{
						restore(b,stackb);
						
					}
				//	printf("top[a] = %d\n",top[stacka]);
					for(int j = p;j<top[stacka];j++)
					{
						stack[stackb][top[stackb]] = stack[stacka][j];
						//printf("\nstack[stackb][top[b]]= %d",stack[stackb][top[stackb]]);
						top[stackb]++;
					}
					top[stacka] = p;
				}
			}
			
			scanf("%s",command);
		}//end of command
		display();
		
	}//end of while
	return 0;
}