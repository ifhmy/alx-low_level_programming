#include <stdlib.h>
#include <time.h>
#include <studio.h>
/**
 * main - entery point
 * Desxription : postive or Negative 
 *
 * Return : 0 (sucess )
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n> 0)
		printf("%i is positive\n" ,n );
	else if (n == 0 )
		printf("%i is zero\n" ,n) ;
	else 
		printf("%i is negative\n" ,n);
	return (0);
}
