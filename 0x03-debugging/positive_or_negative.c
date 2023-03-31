#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * positive_or_negative - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 * @n:input parameter to be tested
 * Return: Always 0 (Success)
*/
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
}
