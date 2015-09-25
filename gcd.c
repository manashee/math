#include <stdio.h>
#include <stdlib.h>

/* finds the gcd of two input numbers using Euclidean Algorithm */
/* div_t divr = div ( a, b ) ; */
long gcd ( long a , long b ) 
{
 long ret = 0; 

/*  printf ( "gcd %ld %ld \n", a,b ) ; */

 if      ( 0 == a ) ret = b ; 
 else if ( 0 == b ) ret = a ; 
 else    ret = gcd ( b, a%b ) ;

 return ret ; 
}

int main (int argc , char ** argv ) 
{ 
 long a ,b , ret;  

 if (3 != argc)
	printf ( " Usage : gcd 270, 192"); 

 a = strtol(argv[1], NULL, 0);
 b = strtol(argv[2], NULL, 0);

 ret =  gcd ( a , b ) ;    
 printf ( "gcd %ld %ld = %ld \n", a ,b, ret ) ;

 return ret; 
}
