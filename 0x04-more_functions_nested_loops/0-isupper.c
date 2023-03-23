#include "main.h"
/**
 * _isupper - checks the uppercase or otherwise.
 *@c: input value
 * Return: Returns  1 when it is capital letter or 0 otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
