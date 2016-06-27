#include<stdio.h>
#include<string.h>

int main()
{
	int n = 0; // a variable containing total sentence, initialized as ZERO.
	char bank[1000]; // here the given line will be stored
	//freopen("input.txt","r",stdin);
	while(gets(bank))
	{
		n = 0;
	int len = strlen(bank);

	for(int i = len - 1;i>= 0;i--) {
	  if ((bank[i] >='p')&& (bank[i] <='z'))
	    n = n+1; 
	  else if ((bank[i] == 'C')||(bank[i] == 'D')||(bank[i] == 'E')||(bank[i] == 'I'))
	  { if (n >= 2)
	      n = n - 1;
	    else 
		{n = 0;
		break;}
	  }
		else if (bank[i] == 'N')
		{	if (n < 1)
			{n = 0;
			  break;
			}
			else
		  n = n; // no change in 'n'
		}
	}

	///After completing the FOR loop.....

	if (n == 1)
	 printf("YES\n");
	else
	printf("NO\n");
	}
	return 0;
}