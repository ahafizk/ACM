#include<stdio.h>

int main()
{
	bool flag = false;
	char c;
	//freopen("input.txt","r",stdin);
	//freopen("out.txt","w+",stdout);
	c = getchar();
	while(!feof(stdin))
	{
		switch(c)
		{
		case '"':
			if(flag==false)
			{
				printf("``");
				flag = true;
			}
			else 
			{
				printf("''");
				flag = false;
			}
			break;
		case '\n':
			putchar(c);
			break;
		default:
			putchar(c);
			break;
		}
		c = getchar();
	}
	
	return 0;
}