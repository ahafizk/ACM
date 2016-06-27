#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char a[1000],b[50],c[10000];
	int flag,i,j,len;
		b[0]='q';
		b[1]='w';
		b[2]='e';
		b[3]='r';
		b[4]='t';
		b[5]='y';
		b[6]='u';
		b[7]='i';
		b[8]='o';
		b[9]='p';
		b[10]='[';
		b[11]=']';
		b[12]='a';
		b[13]='s';
		b[14]='d';
		b[15]='f';
		b[16]='g';
		b[17]='h';
		b[18]='j';
		b[19]='k';
		b[20]='l';
		b[21]=';';
		b[22]='\'';
		b[23]='z';
		b[24]='x';
		b[25]='c';
		b[26]='v';
		b[27]='b';
		b[28]='n';
		b[29]='m';
		b[30]=',';
		b[31]='.';
		b[32]='/';

		gets(a);
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			flag=0;
			if(a[i]>='A'&&a[i]<='Z')
			{
				flag=1;
			}
			if(a[i]=='q')
			{
				c[i]='{';

			}
			else if(a[i]=='w')
			{
				c[i]='}';
			}
			else if(a[i]=='a')
			{
				c[i]=';';
			}
			else if(a[i]=='s')
			{
				c[i]='\'';
			}
			else if(a[i]=='z')
			{
				c[i]='.';
			}
			else if(a[i]=='x')
			{
				c[i]='/';
			}
			else if(a[i]=='}'||a[i]==']')
			{
				c[i]='p';
			}
			else if(a[i]=='{'||a[i]=='[')
			{
				c[i]='o';
			}
			else if(a[i]==' ')
			{
				c[i]=a[i];
			}
			else
			{
				if(flag==0)
				{
					for(j=0;j<32;j++)
						if(a[i]==b[j])
						{
							c[i]=b[j-2];
						}
				}
				else if(flag==1) 
				{
					for(j=0;j<32;j++)
					{
						if(tolower(a[i])==b[j])
						{
							c[i]=b[j-2];
						}
					}
				}
			}//end of else

		}
		for(i=0;i<len;i++)
		{
			printf("%c",c[i]);
		}
		printf("\n");
}

/*considered only :
		ertyuiop[]dfghjkl;'cvbnm,.

for   qwaszx  write   outputs: 
{};`./

  case '}': 
      return 'p'; 
   case '{': 
      return 'o';


  case ']': 
      return 'p'; 
   case '[': 
      return 'o'; 

  case ' ': 
      return ' '; 

  case '`': 
      return 'l'; 


*/