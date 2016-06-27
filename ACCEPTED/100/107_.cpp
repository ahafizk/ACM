#include <math.h>
#include <stdio.h>

#define maxLayer 32

int main ()
{

	unsigned long initialHeight , numOfSmallestCat , numOfSmallerCat , layer , result1 , result2 , i ;
	double catPerHat , epsilon = ( double ) 0.0001 ;
	double fraction, integer;
	char p[100];

	scanf ( "%lu %lu" , &initialHeight , &numOfSmallestCat );

	while(initialHeight || numOfSmallestCat)
	{

		if ( initialHeight == 1 ) printf ( "0 %d\n" , numOfSmallestCat) ;
		else
		{
			for ( layer = 1 ; layer <= maxLayer ; layer ++ )
			{

				catPerHat = pow ( numOfSmallestCat , ( double ) 1.0 / layer ) ;
				sprintf(p,"%lf",catPerHat);
				sscanf(p,"%lf",&catPerHat);
				catPerHat=fabs(catPerHat);
				fraction = modf(catPerHat, &integer);
				if (fraction>.000001) continue ;
				if ( fabs ( pow ( catPerHat + 1 , layer ) - initialHeight ) < epsilon ) break ;
			}
			numOfSmallerCat = floor ( catPerHat ) ;

			if ( numOfSmallerCat == 1 ) result1 = layer ;
			else result1 = ( pow ( numOfSmallerCat , layer ) - 1 ) / ( numOfSmallerCat - 1 ) ;

			result2 = 0 , i = 1 ;

			do
			{
				result2 += i * initialHeight ;

				if ( initialHeight == 1 ) break ;

				initialHeight /= ( numOfSmallerCat + 1 ) ;
				i = i * numOfSmallerCat ;
			}
			while ( 1 ) ;

			printf ( "%lu %lu\n" , result1 , result2 ) ;
		}
	scanf ( "%lu %lu" , &initialHeight , &numOfSmallestCat );
	}
	return 0;
}