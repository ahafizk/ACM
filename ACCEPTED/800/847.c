#include<stdio.h>
int  main()
{
	long int i=0,p=1,n;
	
while(scanf("%ld",&n)!=EOF){
	p=1;
	while(1)
	{
		
		if(i%2==0)
		{p=p*9;i++;if(p>=n){printf("Stan wins.\n");i=0;break;}	}
		else if(i%2==1){p=p*2;i++;if(p>=n){printf("Ollie wins.\n");i=0;break;}	}
	}
}
return 0;
}
