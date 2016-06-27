#include<stdio.h>
void main()
{
	int t,a,f,j,k,i,l,len;
	//freopen("c:\\input.txt","r+",stdin);
	//freopen("c:\\488.txt","w+",stdout);
	scanf("%d",&t);
	while(t)
	{
			scanf("%d%d",&a,&f);
			
			if(f>9)len=9;
			else len=f;
		for(l=1;l<=f;l++)
		{
			for(i=1;i<a;i++)
			{
				//if(i>9)break;
				for(j=1;j<=i;j++)
				{
						//for(k=1;k<=j;k++)
					printf("%d",i);
						
				}
				printf("\n");
			}
			for(k=1;k<=a;k++)
			{
				printf("%d",a);
			}
			printf("\n");
			for(j=a-1;j>=1;j--)
			{
				//if(j>9)continue;
				for(k=1;k<=j;k++)
				{
					printf("%d",j);
				}
				printf("\n");
			}
			if(l!=f)
			printf("\n");
		}
		if(t!=1)
			printf("\n");
		t--;
	}
}