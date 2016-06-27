#include<stdio.h>
#include<string.h>
void main()
{
	int code[] = { 0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2 },i,j,len;
	char a[29],n[1000];
//	freopen("c:\\input.txt","r+",stdin);
	//freopen("c:\\10260.txt","w+",stdout);
	while(gets(a))
	{
		len=strlen(a);
		j=0;
		for(i=0;i<len;i++)
		{
			
			if(code[a[i]-'A']!=0)
			{
				if(code[a[i]-'A']==code[a[i-1]-'A'])
				{
					continue;
				}
				n[j]=code[a[i]-'A']+'0';
				j++;
				//n=n*10+code[a[i]-'A'];
			}
		}
		n[j]='\0';
		printf("%s\n",n);
	}
}