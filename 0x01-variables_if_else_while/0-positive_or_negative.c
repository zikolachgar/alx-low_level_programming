#include <stdio.h>
#include <time.h>
/* more headers goes there*/
/* main function 
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int r;

	srand(time(0));
	r=rand() - RAND_MAX/2;
	if (r > 0)
		printf("%d is positive", r);
	else if (r==0)
		printf("%d is zero",r)
	else 
		printf("%d is negative", r);
	return(0);
		
}
