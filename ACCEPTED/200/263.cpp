#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void strcp(char s[],char t[])
{
	int l=0;
	while(t[l])
	{
		s[l] = t[l];
	}
}

int partition(char a[],int p, int r)
{
	int x = a[r];
	int i = p-1,t;
	for(int j= p;j<=r-1;j++)
	{
		if((a[j]-'0')>=(x-'0'))//this line is changed
		{
			i++;
			t = a[i]-'0';
			a[i] = a[j];
			a[j] = t+'0';
		}
	}
	t = a[i+1] - '0';
	a[i+1] = a[r];
	a[r] = t+'0';
	return (i+1);
}

void quicksort(char a[],int p, int r)
{
	int q;
	if(p<r)
	{
		q = partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}

//int values[] = { 40, 10, 100, 90, 20, 25 };

int compare (const void * a, const void * b)
{
  return ( *(char*)a - *(char*)b );
}

int main ()
{
	bool flag ;
  int rem;
  long int n1,n2,n;
  int len,i;
  char c[1000],s1[1000],s2[1000],list[1050][500];
  //freopen("input.txt","r",stdin);
  while(gets(c))
  {
	   i = 0;
	  len = strlen(c);
	  if((len==1)&&(c[0]=='0'))break;
	  printf("Original number was %s\n",c);
	  //quicksort(c,0,len-1);
	  //printf("%s\n",c);
	  strcpy(list[i],c);
	  i++;
	while(1)
	{	
	  strcpy(s1,c);
	  strcpy(s2,c);
	  len=strlen(c);
	  flag = false;
	  quicksort(s1,0,len);//this sort is for decending order
	  qsort (s2, len, sizeof(char), compare);//sort in acending order
	  rem = 0;	
	  //perform subtraction
	 
	  n1= atoi(s1);
	  n2= atoi(s2);
	  n = n1 - n2;
	  printf("%ld - %ld = %ld\n",n1,n2,n);
	  
	  int ln = 0,f=0;
	  if(n==0){c[ln] = '0';ln++;f=1;}
	  while(n)
	  {
		  c[ln] = (n%10)+'0';
		  ln++;
		  n=n/10;
		  f=1;
	  }
	  if(f==1) c[ln]='\0';
	 
	  
	//	printf("\n\nc = %s\n\n",c);	 
	  for(int j = 0;j<i;j++)
	  {	  if(strcmp(list[j],c)==0)
		  {
			  flag = true;
		  }
	  }
	  if(flag)break;
	  else {strcpy(list[i],c);i++;}
	  
	}//end of while(1)
	printf("Chain length %d\n\n",i);
	  
  }
  return 0;
}