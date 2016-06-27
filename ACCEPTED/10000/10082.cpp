#include<stdio.h>
#include<string.h>
int main()
{
	int flag,i,j,len[4]={14,12,11,10};
	char c,array[4][13];
	strcpy(array[0],"`1234567890-=\\");
	strcpy(array[1],"QWERTYUIOP[]");
	strcpy(array[2],"ASDFGHJKL;'");
	strcpy(array[3],"ZXCVBNM,./");
	while(scanf("%c",&c)==1)
	{
		flag=0;
		for(i=0;i<4;i++)
		{
			for(j=1;j<len[i];j++)
				if(c==array[i][j])
				{
					printf("%c",array[i][j-1]);
					flag=1;
					break;
				}
			if(flag)
			break;
		}
		if(!flag)
		printf("%c",c);
	}
	return 1;
}