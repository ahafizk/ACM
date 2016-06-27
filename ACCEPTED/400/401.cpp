#include<stdio.h>
void main()
{
	char a[21],tmp[21],mr[21],rp,mp;
	int len,i,j;
	while(gets(a))
	{
		i=0;
		while(a[i])
			i++;
		len=i;
		//palindrom test
		
		j=len-1;
		for(i=0;i<len;i++)
		{
			if(a[i]!=a[j])
			{
				rp='f';
				break;
			}
			j--;rp='t';
		}
		
		//if(rp=='t')
		//START MIRRORED STRING
		mp='t';
		for(i=0,j=0;j<len;j++,i++)
		{
			switch(a[i])
			{
			case 'A':
			case 'H':
			case 'I':
			case 'M':
			case 'O':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case '1':
			case '8':
				mr[j]=a[j];
				break;
			case 'E':
				mr[j]='3';
				break;
			case 'J':
				mr[j]='L';
				break;
			case 'L':
				mr[j]='J';
				break;
			case 'S':
				mr[j]='2';
				break;
			case 'Z':
				mr[j]='5';
				break;
			case '2':
				mr[j]='S';
				break;
			case '3':
				mr[j]='E';
				break;
			case '5':
				mr[j]='Z';
				break;
			default:
				mp='f';
				break;
			}

			if(mp=='f')break;
			else mp='t';
		}
		mr[j]='\0';
		//test mirror palindrom;
		//if(j==len)mp='t';
	
		i=len-1;
		if(mp=='t')
		{
			for(j=0;j<len;j++)
			{
				if(a[j]!=mr[i])
				{
					mp='f';
					break;
				}
				i--;mp='t';
			}
		
		}
	
		////////print test combination

		if(rp=='t' && mp=='f')
		{
			printf("%s -- is a regular palindrome.\n\n",a);
		}
		else if(rp=='f' && mp=='t')
		{
           printf("%s -- is a mirrored string.\n\n",a);
		}
		else if(mp=='t' && rp=='t')
		{
			printf("%s -- is a mirrored palindrome.\n\n",a);
		}
		else
		{
			printf("%s -- is not a palindrome.\n\n",a);

		}
	}//end of first while

}


/*Character 	Reverse 	Character 	Reverse 	Character 	Reverse 
A 	A 	M 	M 	Y 	Y 
B 		N 		Z 	5 
C 		O 	O 	1 	1 
D 		P 		2 	S 
E 	3 	Q 		3 	E 
F 		R 		4 	
G 		S 	2 	5 	Z 
H 	H 	T 	T 	6 	
I 	I 	U 	U 	7 	
J 	L 	V 	V 	8 	8 
K 		W 	W 	9 	
L 	J 	X 	X 		


NOTAPALINDROME 
ISAPALINILAPASI 
2A3MEAS 
ATOYOTA

Sample Output  
NOTAPALINDROME -- is not a palindrome.
 
ISAPALINILAPASI -- is a regular palindrome.
 
2A3MEAS -- is a mirrored string.
 
ATOYOTA -- is a mirrored palindrome.

Note that O (zero) and 0 (the letter) are considered the same character and therefore ONLY the letter "0" is a valid character.*/