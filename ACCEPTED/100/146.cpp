#include<stdio.h>
#include <string>
#include <algorithm>


using namespace std ;

int main()
{
    char s[100];
	int len;
	//freopen("input.txt","r",stdin);
	while(scanf("%s",s)==1 && strcmp(s,"#"))
	{
		
		len = strlen(s);
		
		if(next_permutation(s,s+len))
		{
			printf("%s\n",s);
		}
		else
		{
			printf("No Successor\n");
		}
    
	 }
	return 0;
}