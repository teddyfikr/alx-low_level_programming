#include "main.h"

/**
 * print_alphabet - function that prints lowercase alphabet ten times
 *
 */

void print_alphabet_x10(void)/*Function to print a-z 10 times*/
{
int i;
int a;
for (a = 0 ; a < 10 ; a++)
{
	for (i = 97 ; i < 123 ; i++)
	{
		_putchar(i);
	}
_putchar('\n');
}
}
