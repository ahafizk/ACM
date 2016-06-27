#include<stdio.h>
//#include<iostream.h>
#include<math.h>

void bigmultiply(long int a[],long int len1,long int D)
{
	long int t[1000],b[1000];
	
	long int k,i,j,c,n,m,len2=len1,l;
	for(i=0;i<1000;i++)
		t[i] = 0;
	n=0;
	len2 = len1;
	for(l=0;l<len1;l++)b[l] = a[l];
	while(D>1)
	{
		
		for(i=len2-1,k=0; i>=0; i--,k++)
		{
			c = k;
			for(j=len1-1;j>=0;j--)
			{
		
				m = b[i] * a[j];
				n += m;
				t[c] = n%10;
				n = n/10;
				c++;
		
			}
		
			if(n>0)
			{
				t[c] +=  n;
				n  = n/10;
				c++;
			}
			len1 = c;
			//now copy from t to a;
			for(c=0,l=len1-1;l>=0;l--,c++)
			{
				a[c] = t[l];
				t[l] = 0;
			}
		}
		D--;
	}	
	
	for(i =0;i< len1;i++)
	{
		
		printf("%ld",a[i]);
	}
	printf("\n");
}

int main()
{
	long int ar[1000];
	long int N, D;
	long int len1,i;
	while(1)
	{
		scanf("%ld%ld",&N,&D);
			if(N==0&&D==0)break;
		len1 =0;
		
		if(N/10)
		{
			ar[len1] = N/10;
			len1++;
			ar[len1] = N%10;len1++;
		}
		else{ar[len1]= N;len1++;}
	
		if(N<10&&D>0)
		bigmultiply(ar,len1,D);
		else
		{
			printf("1");
			for(i=1;i<=D;i++)printf("0");
			printf("\n");
		}
		
	}
	return 0;
}