#include <stdlib.h>

/**
 * create_array - creates an array of a spacific size and fill with a char.
 * @size : the Size of the array to be created.
 * @c: character to fill the array.
 *
 * Return: An array pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *array;

	if (size <= 0)
		return (0);
	array = malloc(size);
	if (array == 0)
		return (0);
	a = 0;
	while (a < size)
	{
		array[a] = c;
		a++;
	}
	return (array);
}
