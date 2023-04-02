#include "main.h"
#include "stdio.h"
/**
 * print_array - prints n elements of an array of integers.
 * @n: elements parameter input
 * @a: string parameter input
 * Return: Nothing
*/
void print_array(int *a, int n)
{
	int i;
	int j;

	j = n;
	i = 0;

	for (j--; j >= 0; j--)
	{
		printf("%d", a[i]);
		if (j > 0)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
