#include<stdio.h>


int main()
{
	int index[200][5],m,n,M,k,i,j,l,total;
	char ar[200][80];
	int c[1000],max;

	//freopen("input.txt","r",stdin);
	scanf("%d",&M);
	for(k=1;k<=M;k++)
	{
		max = 0;
		scanf("%d%d",&n,&m);
		for(i=0;i<m;i++)
		{
			//for(j=0;j<n;j++)
			scanf("%s",ar[i]);
			
			total = 0;
			for(l=0;l<n-1;l++)
			{
				
				for(j=l+1;j<n;j++)
				{
					if(ar[i][l]>ar[i][j])total++;
				}
			}
			if(max<total)max = total;
			index[i][0] = i;
			index[i][1] = total;
		}
		// here code goes for stable sort
		for(i=0;i<1000;i++)
		{
			c[i] = 0;
		}

		for(j=0;j<m;j++)
		{
			c[index[j][1]] = c[index[j][1]]+1;
		}
		for(i=1;i<1000;i++)
		{
			c[i] = c[i] + c[i-1];
		}
		
	int b[102][2];
		for(j = m-1;j>=0;j--)
		{
			b[c[index[j][1]]][1] = index[j][1];
			c[index[j][1]] = c[index[j][1]] - 1;
			b[c[index[j][1]]][0] = index[j][0];//this code goes for indices
		}

		for(i=0;i<m;i++)
		{
			//for(j=0;j<n;j++)
			printf("%s\n",ar[b[i][0]]);
			//printf("\n");
		}
		if(k<M)printf("\n");
	}
	return 0;
}