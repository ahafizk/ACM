#include<stdio.h>

int main()
{
	char a[6][3] = {{'B','C','G'},{'B','G','C'},{'C','B','G'},{'C','G','B'},{'G','B','C'},{'G','C','B'}};
	long long int bin1[3],bin2[3],bin3[3],value[6];
	//freopen("in.txt","r+",stdin);
	//freopen("out.txt","w+",stdout);
	while(scanf("%lld%lld%lld %lld%lld%lld %lld%lld%lld",&bin1[0],&bin1[1],&bin1[2],&bin2[0],&bin2[1],&bin2[2],&bin3[0],&bin3[1],&bin3[2])!=EOF)
	{
		for(int i=0;i<6;i++)
		{
			value[i]=0;
			for(int j =0;j<3;j++)
			{
				switch(a[i][j])
				{
					case 'B':
						switch(j)
						{
							case 0://Box 0
								value[i] += bin1[1]+bin1[2];
								break;
							case 1://Box 1
								value[i] += bin2[1]+bin2[2];
								break;
							case 2://Box 2
								value[i] += bin3[2]+bin3[1];
								break;

						}
					break;
					case 'C':
						switch(j)
						{
							case 0://Box 0
								value[i] += bin1[0]+bin1[1];
								break;
							case 1://Box 1
								value[i] += bin2[0]+bin2[1];
								break;
							case 2://Box 2
								value[i] += bin3[0]+bin3[1];
								break;

						}
					break;
					case 'G':
						switch(j)
						{
							case 0://Box 0
								value[i] += bin1[0]+bin1[2];
								break;
							case 1://Box 1
								value[i] += bin2[0]+bin2[2];
								break;
							case 2://Box 2
								value[i] += bin3[0]+bin3[2];
								break;

						}
					break;
				}
				
				
			}//end of inner for
		}//end of outer for;
		long long int min  ,index;
		for(int k=0;k<6;k++)
		{
			if(k==0)
			{
				min = value[k];
				index = k;
			}
			else
			{
				if(value[k]<min)
				{
					min = value[k];
					index = k;
				}
			}
		}
		printf("%c%c%c %lld\n",a[index][0],a[index][1],a[index][2],min);
	}//end of input while
	
	return 0;
}